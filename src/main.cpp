#include "GroceryTracker.h"
#include <iostream>
#include <stdexcept>

int main() {
    try {
        GroceryTracker tracker("CS210_Project_Three_Input_File.txt");
        tracker.runMenu();

        std::cout << "\nPress Enter to exit...";
        std::cin.ignore();
        std::cin.get();
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}