Grocery Tracker Project
Project Summary
The Grocery Tracker is a C++ program developed to help a grocery store analyze their product purchase data. The program reads purchase records from a text file and provides functionality to:

Look up the frequency of specific items
Display frequencies for all items
Generate a visual histogram of purchase frequencies
Save frequency data to a persistent file

This tool solves the problem of manually tracking product purchase patterns, allowing the store to better understand customer buying habits and make informed inventory decisions.
Code Highlights
Several aspects of this project demonstrate solid programming practices:

Efficient data structure usage: Implemented a std::map for O(log n) lookup time complexity
Exception handling: Robust error handling for file operations and user input
Modularity: Clear separation of concerns between the main program, GroceryTracker class, and I/O operations
Input validation: Comprehensive checking of user input to prevent program crashes
Data persistence: Automatic saving of frequency data to maintain records between sessions

Potential Enhancements
The code could be enhanced in several ways:

Add data visualization capabilities using a graphics library for more professional-looking charts
Implement date-based tracking to analyze purchase patterns over time
Add support for case-insensitive item lookup
Include unit tests to ensure reliability of core functions
Implement a more sophisticated user interface, possibly using a GUI framework

Development Challenges
The most challenging aspects of the project were:

Ensuring robust file I/O operations with proper error handling
Creating an intuitive text-based histogram representation
Implementing foolproof input validation

These challenges were overcome by:

Consulting C++ documentation for file handling best practices
Testing edge cases extensively
Using C++ standard library features like numeric_limits for input validation

Transferable Skills
This project helped develop several valuable skills:

Data structure selection and implementation
File I/O operations
User input handling and validation
Error handling and exception management
Object-oriented programming principles
Documentation writing

Code Maintenance
The code was designed with maintainability in mind:

Clear class structure with single responsibility principle
Comprehensive comments explaining complex logic
Consistent naming conventions
Modular design allowing for easy feature additions
Separation of interface and implementation
Use of standard C++ practices and idioms

Build Instructions

Ensure you have a C++ compiler installed (e.g., Visual Studio 2019 or later)
Clone this repository
Open GroceryTracker.sln in Visual Studio
Build the solution (Build > Build Solution)
Run the program (Debug > Start Without Debugging or press Ctrl + F5)

Input Requirements
The program expects an input file named "CS210_Project_Three_Input_File.txt" in the same directory as the executable. Each line should contain a single item name.

Author
Trevor Hegge

Version
1.0 (October 2024)
