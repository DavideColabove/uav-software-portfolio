# UAV Software Engineering Portfolio

## About This Project
This repository documents my 3-month intensive journey to master software engineering for Unmanned Aerial Vehicles (UAVs). The ultimate goal is to build a robust skill set for the autonomous last-mile delivery sector (medical and commercial logistics) and prepare for a 6-month internship in Europe.

## Tech Stack
* **Languages:** C++ (17/20), Python
* **Frameworks & Middleware:** ROS 2 (Humble), DDS Protocol
* **Avionics & Simulation:** PX4 Autopilot, MAVSDK, Gazebo, QGroundControl
* **AI & Vision:** PyTorch, OpenCV
* **Infrastructure:** Linux (Ubuntu 22.04), Docker, CMake

## Project Roadmap & Structure

### Phase 1: Systems & ROS 2 Fundamentals (Month 1)
* `01_cpp_robotics/`: Memory management (Smart Pointers), concurrency (`std::thread`), and asynchronous logging in modern C++.
* `02_ros2_telemetry/`: Custom nodes, Client/Server services, and QoS (Quality of Service) configurations for reliable sensor data transmission.

### Phase 2: Avionics & SITL Simulation (Month 2)
* `03_px4_sitl/`: Integration of the PX4 flight stack with the Gazebo simulator.
* `04_mavsdk_control/`: Python/C++ scripts for offboard autonomous flight control (takeoff, waypoint navigation, landing).

### Phase 3: Vision & Precision Landing (Month 3)
* `05_vision_landing/`: A complete pipeline where the simulated drone detects a visual marker using PyTorch/OpenCV and executes an autonomous precision landing.

## How to Build
