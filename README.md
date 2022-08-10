
## IOT Project

This project aims at developing a system that simulates home automation in IOT. This system consists of a controller board -ie- ESP32 module, and Bulbs that are to be controlled using an Android App. We aim to implement digital output (ON/OFF) by turning on/off the bulbs; and analog output (varying the intensity) by changing the colour of RGB LED bulb.
The app and the ESP32 module is connected to an online database (Firebase Database). On click of a button the on the app, the values of different variables change in the database in real-time. The ESP32 reads the value of the variables and accordingly changes the state of the peripheral devices (bulbs).


### 🔗 Content

* [Overview](#iot-project)
* [Content](#-content)
* [Features](#-features)
* [Flow Diagram](#-flow-diagram)
* [Componants Required](#-componants-required)
* [Circuit Diagram](#-circuit-diagram)
* [Database Design](#-database-design)
* [code](#-code)
* [Documentation](#-documentation)
* [Demo](#-demo)
* [Images](#-images)
* [Author](#-author)
 

### 📋 Features

- Turning ON/OFF Relays. Bulb or fan or any other applience can be turend ON/OFF.

- Turning ON/OFF RGB LED. 

- Changing colour of the RBG LED, by changing the intensity of Red, Green and Blue colour.


### 🧠 Flow Diagram

![Flow Diagram](docs/flow-diagram.png)


### 🔩 Componants Required

**HARDWARE REQUIREMENTS**
- The Hardware components used for this project are
    - ESP32 Module
    - LED Bulbs
    - RGB Module
    - Relay
- Additional Peripherals used
    - Battery (or any other power source) 
    - Jumper wires
    - Holders
    - Breadboard
**SOFTWARE REQUIREMENTS**
- The Software used for this project are
    - Android studio (for developing the app) - Arduino IDE (for coding the ESP32)
    - Firebase (database)


### 🔗 Circuit Diagram

![Circuit Diagram](docs/circuit-diagram.png)


### 🗂 Database Design

![Database Design](docs/database-design.png)


### 🕹 Code

- **Frontend code :** https://github.com/AkashCSanjeev/IOT

- **Hardware code :** https://github.com/atharvparkhe/iot


### 📄 Documentation

The docs folder contain all the project documentations and screenshots of the project.

- Read the *Project Report* [here](docs/project-report.pdf)


### 🧑🏻‍💻 Demo

YouTube Link : https://youtu.be/SxM_EhIoMEc


### 🌄 Images

- **Android App**
![App Screen-Shot](docs/app/app-ss1.jpeg)
![App Screen-Shot](docs/app/app-ss2.jpeg)
![App Screen-Shot](docs/app/app-ss3.jpeg)

- **Project**
![Project Image](docs/project/project-img1.jpeg)
![Project Image](docs/project/project-img2.jpeg)
![Project Image](docs/project/project-img3.jpeg)
![Project Image](docs/project/project-img4.jpeg)
![Project Image](docs/project/project-img5.jpeg)


### 🙋🏻‍♂️ Author

**🤝 Connect with Atharva Parkhe**

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/atharva-parkhe-3283b2202/)
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://www.github.com/atharvparkhe/)
[![Twitter](https://img.shields.io/badge/Twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://www.twitter.com/atharvparkhe/)
[![Instagram](https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white)](https://www.instagram.com/atharvparkhe/)
[![LeetCode](https://img.shields.io/badge/-LeetCode-FFA116?style=for-the-badge&logo=LeetCode&logoColor=black)](https://leetcode.com/patharv777/)
[![YouTube](https://img.shields.io/badge/YouTube-FF0000?style=for-the-badge&logo=youtube&logoColor=white)](https://www.youtube.com/channel/UChimOJO64hOqtE7HCgtiIig)
[![Discord](https://img.shields.io/badge/Discord-5865F2?style=for-the-badge&logo=discord&logoColor=white)](https://discord.gg/8WNC43Xsfc)
