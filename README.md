# <h1 align="center">ARDUINO UNO - Light Sensing Curtain Control System (Miniature)</h1>

## INTRODUCTION
Introducing the Light Sensing Curtain Control System, a sophisticated and smart solution designed to manage indoor lighting and temperature effortlessly while maximizing energy efficiency. This advanced system incorporates several key components, including a Stepper Motor for precise curtain movement, a DC Motor acting as a fan to regulate airflow, a Servo Motor for fine-tuned adjustments, and an LDR (Light Dependent Resistor) to accurately measure light intensity. By seamlessly integrating these components, the system automates curtain adjustments based on real-time light levels. This automation ensures optimal indoor lighting conditions and temperature regulation without the need for manual intervention, making it a convenient and eco-friendly addition to any space. The Light Sensing Curtain Control System not only enhances comfort and convenience but also contributes to significant energy savings by reducing the reliance on artificial lighting and air conditioning.

## SYSTEM DIAGRAM
![image](https://github.com/JL-PH/Arduino-Light-Sensing-Curtain-Control-System/assets/172193580/d1118fa5-2608-427e-9e42-bd08f440496d)

![image](https://github.com/JL-PH/Arduino-Light-Sensing-Curtain-Control-System/assets/172193580/15267f89-fc42-4206-b4ad-1f5a31985cb6)

## GANTT CHART TIMELINE
![image](https://github.com/JL-PH/Arduino-Light-Sensing-Curtain-Control-System/assets/172193580/67b1a59d-d819-42ff-b80d-5b9940593b48)

## MATERIALS AND FUNCTIONS

| Material              | Function                                                     |
|-----------------------|--------------------------------------------------------------|
| Stepper Motor         | To roll the curtain up or down.                              |
| DC Motor              | To act as a fan, reducing heat by circulating air.           |
| Servo Motor           | To move the Light Dependent Resistor (LDR) through the window.|
| LDR Resistor          | To detect the intensity of light and activate the process.   |
| L293D H-Bridge        | To control the motors (except the servo motor).              |
| Battery               | To provide power to the entire setup.                        |
| Wood (sticks and plywood) | To construct the frame and support structure for the setup.|
| Breadboard            | To make electrical connections and test circuits.            |
| Jumper Wires          | To connect various components on the breadboard.             |
| Paper                 | To act as the blades of the DC motor (fan).                  |
| Cloth                 | To act as the curtain.                                       |

## DESCRIPTION

In this school project, we aim to build a miniature automated curtain and fan system that adjusts based on the light intensity in the room. The system uses a combination of stepper motors, DC motors, servo motors, an LDR resistor, and an L293D H-Bridge. Here is a detailed explanation of the roles of each component:

1. **Stepper Motor**: The stepper motor is responsible for rolling the miniature curtain up and down. It provides precise control over the curtain's position, allowing for smooth and accurate adjustments based on the detected light levels.

2. **DC Motor**: The DC motor serves as a fan to circulate air and reduce heat in the miniature model. The fan blades are crafted from paper, providing a lightweight and effective solution for air movement.

3. **Servo Motor**: The servo motor is used to move the LDR resistor to different positions across the window. This movement allows the LDR to measure light intensity at various points, ensuring a more comprehensive detection of ambient light levels.

4. **LDR Resistor**: The Light Dependent Resistor (LDR) is the key sensor in this setup. It detects the intensity of light and triggers the corresponding actions of the curtain and fan. When the light intensity changes, the LDR sends a signal to the control system to adjust the curtain and fan accordingly.

5. **L293D H-Bridge**: The L293D H-Bridge is used to control the stepper and DC motors. It allows for bidirectional control of the motors, enabling the precise movements required for this project.

6. **Battery**: The battery provides power to the entire setup, ensuring that all components operate smoothly and efficiently.

7. **Wood (Sticks and Plywood)**: The wood components are used to build a sturdy frame and support structure for the miniature model. The sticks and plywood provide stability and durability to ensure the components are securely mounted and function effectively.

8. **Breadboard**: The breadboard is essential for creating electrical connections and testing circuits. It allows for easy modifications and troubleshooting during the development phase.

9. **Jumper Wires**: Jumper wires are used to connect the various electronic components on the breadboard. They provide the necessary pathways for electrical signals to flow between components.

10. **Paper**: The paper acts as the blades of the DC motor (fan). Its lightweight nature makes it ideal for creating efficient fan blades that can effectively circulate air.

11. **Cloth**: The cloth is used as the curtain material. It is attached to the stepper motor mechanism to enable the rolling action, providing a practical and aesthetic solution for controlling light entry into the miniature model.

By integrating these materials and components, the project aims to create a smart and responsive miniature system that demonstrates the principles of automation and sensor-based control. The automated curtain and fan system will adjust based on real-time light intensity, ensuring optimal conditions without manual intervention.
