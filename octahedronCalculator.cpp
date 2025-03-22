// Copyright (c) 2025 Dylan Mutabazi All rights reserved
//
// Created by Dylan Mutabazi
// Created Feb 2025
// This program calculates the surface area & volume of an octahedron

#include <chrono>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
#include <thread>

int main() {
    // creates variable edge and choice
    std::string progressBar = "loading ...";
    float edge;
    std::string choice;  // variable choice for if statement

    // initial greeting
    std::cout << "HELLO, USER !!!!\n";
    std::cout << "this program is used to calculate ";
    std::cout << "the VOLUME and SURFACE AREA";
    std::cout << "of an OCTAHEDRON\n";
    std::cout << "before we begin which of the two";
    std::cout << " would you like to calculate\n";

    // assigns a value v or a to choice for if statement
    std::cout << "v = Volume\n";
    std::cout << "a = Surface area\n";
    std::cout << "(pls press v or a only): ";
    std::cin >> choice;
    std::cout << "\n";

    // calculates for volume
    if (choice == "v") {
        std::cout << "you have chosen volume. \n";
        std::cout << "Now, what are the lengths of your edges (cm)?: ";
        std::cin >> edge;  // assigns a value to edge

        // assigns variable volume and calculates for it
        float volume = ((sqrt(2)) / 3) * (pow(edge, 3));

        // displays volume
        std::cout << progressBar << "\n";
        std::this_thread::sleep_for(std::chrono::seconds(5));
        std::cout << "You're volume round up to "
                  << std::setprecision(4) << volume;
        std::cout << " cm^3 \n";
        std::cout << "\n";
    }

    // calculates for surface area
    else if (choice == "a") {
        
        std::cout << "you have chosen surface area. \n";
        std::cout << "Now, what are the lengths of your edges (cm)?: ";
        std::cin >> edge;  // assigns a value to edge

        // assigns variable surface_area and calculates for it
        float surface_area = (2 * (sqrt(3))) * pow(edge, 2);

        // displays surface_area
        std::cout << progressBar <<"\n";
        std::this_thread::sleep_for(std::chrono::seconds(5));
        std::cout << "You're surface area round up to "
                  << std::setprecision(4) << surface_area;
        std::cout << " cm^2 \n";
        std::cout << "\n";
    }

    else {
        std::cout << "ERROR 34, please run the program again \n";
    }
}
