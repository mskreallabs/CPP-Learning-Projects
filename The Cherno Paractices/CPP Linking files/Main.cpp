#include<iostream> 
#include "Log.h"
// The Log.h header file is included to declare the log function,

void Print(const std::string& message);
// This function takes a string as an argument and prints it to the console.
// The function is declared here and defined in Print.cpp.

int main() {
	std::cout << "Hello, World!" << std::endl;

	Print("This is a message from the Print function.");
	// The Print function is called with a string argument, 
	// which will be printed to the console.

	/*Defferneces between compiler and linking:
	compiler is just a tool that converts source code into object code.
	while linking is the process of combining object files into a single executable file.
	so for linking it must have entry point and all the necessary symbols
	and we can change the entry point */

	log("This is a message from the Log function.")	;
	// The log function is called with a string argument,
	// which will be printed to the console.
	//it use the .h file to declare the function and the .cpp file to define it.
	

	std::cin.get();
	return 0;
}
//how compire works:
//compile the Print.cpp file to create an object file (Print.o).
//compile the Main.cpp file to create an object file (Main.o).
//link the object files (Print.o and Main.o) together to create an executable file (program.exe).
//run the program.exe file to see the output in the console.
// The output will be:
// Hello, World!
// This is a message from the Print function.
