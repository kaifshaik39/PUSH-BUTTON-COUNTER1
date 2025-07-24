# PUSH-BUTTON-COUNTER1

TASK 1 (EMBEDDED SYSTEMS INTERNSHIP)

COMPANY: CODTECH IT SOLUTIONS

NAME: SHAIK MOHAMMED KAIF

INTERN ID: CITS0D758

DOMAIN: EMBEDDED SYSTEMS

BATCH DURATION: JUNE 17th,2025 to AUGUST 2ND,2025 (6 Weeks)

MENTOR NAME: Neela Santhosh Kumar

DESCRIPTION: The Push Button Counter is a basic yet highly educational embedded systems project that involves using a tactile push button to increment a numerical value and display it on an output device, such as a 7-segment display or an LCD screen. It is a commonly implemented mini-project for students learning microcontrollers, digital electronics, or embedded C/C++ programming. This project introduces important concepts like digital input reading, signal debouncing, real-time display updates, and control logic.

Objective: The main objective of the Push Button Counter is to detect each valid press of a button and increase a counter value accordingly. This counter is then displayed in real-time to the user. The goal is to create a reliable system that only increments once per press, regardless of electrical noise or bouncing effects inherent in mechanical switches.

Working Principle: When the push button is pressed, it sends a digital HIGH (or LOW, depending on configuration) signal to a microcontroller’s GPIO (General Purpose Input Output) pin. The microcontroller monitors this pin using a polling or interrupt method. On detecting a valid state change, it increases an internal counter variable by one. This new value is then displayed using a suitable output device.

To ensure accurate counting, debouncing is essential. Mechanical buttons can generate multiple transitions in milliseconds due to physical bounce, leading to false multiple increments. Debouncing can be handled either in software using delays and state checking, or in hardware using resistors and capacitors (RC filters).

Components Used: Microcontroller (e.g., Arduino Uno, ESP32, or ATmega328P)

Push Button

Pull-down or Pull-up Resistor (typically 10kΩ)

7-Segment Display or 16x2 LCD Display

Breadboard and Jumper Wires

USB Cable for Programming

CIRCUTI DIAGRAM:

<img width="1643" height="943" alt="circuit diagram" src="https://github.com/user-attachments/assets/107f238d-91a1-4ef5-907f-a9239969d5c3" />

OUTPUT:

<img width="1380" height="1039" alt="OUTPUT" src="https://github.com/user-attachments/assets/ce76c2fc-9375-4285-9e1a-606aeb6c95c6" />

