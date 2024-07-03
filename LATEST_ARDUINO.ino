#include <Stepper.h>
#include <Servo.h>

const int stepsPerRevolution = 200; // Change this to fit the number of steps per revolution for your motor
const int photoResistorPin = A0;    // Photoresistor on A0
const int motorPin1 = 6;            // Stepper motor pin 1 on 6
const int motorPin2 = 10;           // Stepper motor pin 2 on 10
const int motorPin3 = 5;            // Stepper motor pin 3 on 5
const int motorPin4 = 3;            // Stepper motor pin 4 on 3
const int dcMotorPin1 = 9;          // DC motor pin 1 on ~9
const int dcMotorPin2 = 11;         // DC motor pin 2 on ~11
const int servoPin = 12;            // Servo motor pin
int lastSensorValue = 0;            // Variable to track the last sensor value

// Initialize the stepper library on pins 6, 10, 5, and 3
Stepper myStepper(stepsPerRevolution, motorPin1, motorPin2, motorPin3, motorPin4);
Servo myServo;                      // Create a servo object

void setup() {
  Serial.begin(9600);               // Start the serial communication
  pinMode(photoResistorPin, INPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(dcMotorPin1, OUTPUT);
  pinMode(dcMotorPin2, OUTPUT);
  myStepper.setSpeed(60);           // Set the speed at 30 rpm
  myServo.attach(servoPin);         // Attach the servo to the pin
}

void loop() {
  int sensorValue = analogRead(photoResistorPin); // Read the photoresistor value
  Serial.print("Photoresistor Value: ");
  Serial.println(sensorValue);                    // Print the value to the serial monitor

  // Control the servo motor and DC motor based on the photoresistor value
  if (sensorValue > 200) {
    myServo.write(0);             // Move the servo to 0 degrees if sensor value > 200
    digitalWrite(dcMotorPin1, HIGH);
    digitalWrite(dcMotorPin2, LOW);
  } else {
    digitalWrite(dcMotorPin1, LOW);
    digitalWrite(dcMotorPin2, LOW);
  }

// Control the servo motor based on the photoresistor value
if (sensorValue < 200) {
  myServo.attach(servoPin); 
    // Move the servo more slowly to 0 degrees
    for (int pos = myServo.read(); pos > 0 && sensorValue < 200; pos -= 1) {
      myServo.write(pos);
      delay(15);  // Short delay to slow down the movement
      sensorValue = analogRead(A0);  // update the sensor value
    }
    
    // Move the servo more slowly to 180 degrees
    for (int pos = myServo.read(); pos < 180 && sensorValue < 200; pos += 1) {
      myServo.write(pos);
      delay(15);  // Short delay to slow down the movement
      sensorValue = analogRead(A0);  // update the sensor value
    }
    
  } else {
    myServo.detach(); // Detach the servo if sensor value is greater than 200 to stop it completely
  }

  // Control the stepper motor based on the photoresistor value change
  if (sensorValue > 200 && lastSensorValue <= 200) {
    Serial.println("Stepper clockwise");   
    myStepper.step(3 * stepsPerRevolution);   // Move the stepper motor one revolution
    // Add a delay if needed to keep the motor on for a while
    delay(500);
  } else if (sensorValue < 200 && lastSensorValue >= 200) {
    Serial.println("Stepper counterclockwise"); 
    myStepper.step(-3 * stepsPerRevolution);  // Move the stepper motor one revolution in the opposite direction
    // Add a delay if needed to keep the motor on for a while
    delay(500);
  } else {
    // Turn off the stepper motor by setting all control pins to LOW
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
  }

  lastSensorValue = sensorValue;        // Update the last sensor value
  delay(100);                           // Short delay before reading the value again
}
