# 5GSimulator

The 5GSimulator is a C++ based project aimed at simulating and analyzing the communication protocols used in 5G networks. It provides a platform for simulating various aspects of 5G communication, including signaling procedures, data transmission, and network interactions.

## Table of Contents
- [Key Features](#key-features)
- [Technologies and Tools](#technologies-and-tools)
- [Project Structure](#project-structure)
- [Getting Started](#getting-started)
  - [Building the Simulator](#building-the-simulator)
  - [Configuring and Running Simulations](#configuring-and-running-simulations)
  - [Integrating Dear ImGui](#integrating-dear-imgui)
- [Sample Simulation Scenario](#sample-simulation-scenario)
- [Contributing](#contributing)
- [License](#license)

## Key Features
- **Protocol Simulation:** Simulate 5G protocols such as NR, NGAP, and N2 interface.
- **Network Elements:** Define virtual gNB, AMF, and UPF to replicate 5G network architecture.
- **Message Encoding/Decoding:** Implement modules for encoding and decoding based on 5G protocol specifications.
- **Realistic Traffic Simulation:** Simulate realistic signaling and data traffic with configurable scenarios.
- **Visualization:** Provide visualization tools using Dear ImGui for displaying message flows and network topology.
- **Logs and Statistics:** Generate logs and statistics for analyzing the simulated network's behavior.
- **Configurability:** Highly configurable, allowing customization of network parameters and scenarios.

## Technologies and Tools
- **C++:** Primary programming language for performance and flexibility.
- **CMake:** Build system for project management and dependencies.
- **Google Test (gtest):** Unit testing for reliability.
- **Git:** Version control for collaborative development.

## Project Structure
- **src/:** Contains source code for the simulator.
- **tests/:** Includes unit tests.
- **docs/:** Documentation for the project.

## Getting Started

### Building the Simulator
1. Clone this repository: `git clone https://github.com/yourusername/5GSimulator.git`
2. Navigate to the project root: `cd 5GSimulator`
3. Create a build directory: `mkdir build && cd build`
4. Generate build files with CMake: `cmake ..`
5. Build the simulator: `cmake --build .`

### Configuring and Running Simulations
- TODO: Provide instructions on configuring and running simulations.

### Integrating Dear ImGui
- TODO: Explain how to integrate Dear ImGui for visualization.

## Sample Simulation Scenario
- TODO: Provide a simple example scenario to help users understand and use the simulator.

## Contributing
- TODO: Explain how others can contribute to the project.

## License
This project is licensed under the [MIT License](LICENSE).
