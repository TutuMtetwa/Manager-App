# Prerequisites:
# C++ Compiler:
* Ensure you have a C++ compiler installed on your system. If you don't have one, you can install tools like g++ (GNU Compiler Collection) for Linux and macOS, or MinGW for Windows.
# Instructions:
# Download the Files:
Download the following files into a directory on your computer:
* Employee.h
* Employee.cpp
* Manager.h
* Manager.cpp
* main.cpp
# Compile the Program:
* Open a terminal or command prompt and navigate to the directory where your files are located. Compile the program using g++:
## Copy code
* g++ Employee.cpp Manager.cpp main.cpp -o main
* This command compiles all the source files into an executable named main.

# Run the Program:
* After compiling successfully, run the program:


* Copy code : "./main"
* The program will prompt you to enter the number of managers and then ask for details (name, hourly wage, hours worked, and bonus) for each manager.

# Enter Manager Details:
Follow the prompts to enter the details for each manager.

# View Output:
After entering the details for all managers, the program will calculate and display the highest paid manager and the average pay among all managers.

# Clean Up:
The program deallocates memory used by dynamically allocated objects before exiting. You don't need to worry about cleanup; it's handled in the code.

### Remember, this program demonstrates basic concepts of classes, inheritance, and dynamic memory allocation in C++. Make sure you understand the logic behind it and modify it according to your needs if required. If you encounter any errors or unexpected behavior, feel free to ask for help!
