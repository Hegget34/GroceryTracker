#include "GroceryTracker.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdexcept>
#include <limits>

GroceryTracker::GroceryTracker(const std::string& inputFilename) {
    loadDataFromFile(inputFilename);
    saveDataToFile("frequency.dat");
}

void GroceryTracker::loadDataFromFile(const std::string& filename) {
    std::ifstream inputFile(filename);
    if (!inputFile) {
        throw std::runtime_error("Unable to open input file: " + filename);
    }
    std::string item;
    while (std::getline(inputFile, item)) {
        ++itemFrequency[item];
    }
    inputFile.close();
}

void GroceryTracker::saveDataToFile(const std::string& filename) {
    std::ofstream outputFile(filename);
    if (!outputFile) {
        throw std::runtime_error("Unable to open output file: " + filename);
    }
    for (const auto& pair : itemFrequency) {
        outputFile << pair.first << " " << pair.second << std::endl;
    }
    outputFile.close();
}

int GroceryTracker::getItemFrequency(const std::string& item) {
    return itemFrequency[item];
}

void GroceryTracker::printAllFrequencies() {
    for (const auto& pair : itemFrequency) {
        std::cout << std::setw(20) << std::left << pair.first 
                  << std::setw(5) << std::right << pair.second << std::endl;
    }
}

void GroceryTracker::printHistogram() {
    for (const auto& pair : itemFrequency) {
        std::cout << std::setw(20) << std::left << pair.first << " ";
        for (int i = 0; i < pair.second; ++i) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int GroceryTracker::getValidChoice() {
    int choice;
    while (true) {
        if (std::cin >> choice) {
            if (choice >= 1 && choice <= 4) {
                return choice;
            }
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a number between 1 and 4: ";
    }
}

void GroceryTracker::runMenu() {
    int choice;
    do {
        std::cout << "\n1. Look up an item\n2. Print item frequencies\n"
                  << "3. Print histogram\n4. Exit\nEnter your choice: ";
        
        choice = getValidChoice();
        
        switch(choice) {
            case 1: {
                std::string item;
                std::cout << "Enter item name: ";
                std::cin >> item;
                std::cout << "Frequency of " << item << ": " 
                          << getItemFrequency(item) << std::endl;
                break;
            }
            case 2:
                printAllFrequencies();
                break;
            case 3:
                printHistogram();
                break;
            case 4:
                std::cout << "Exiting program.\n";
                break;
        }
    } while (choice != 4);
}