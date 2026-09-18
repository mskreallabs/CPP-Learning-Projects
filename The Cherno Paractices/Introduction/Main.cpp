#include<iostream> /*called the preprocessor directive. It tells the compiler to 
include the contents of the iostream header file, which allows us to use input 
and output streams like std::cout and std::endl.*/

int main() {
	/* Main function from which the program starts  .it doesnot return a value
	because it is special funtion that is called by the operating system and program
	ends when it ends or returns a value*/
	std::cout << "Hello, World!" << std::endl;
	/* std::cout is the standard output stream in C++. 
	It is used to print text to the console.*/
	std::cin.get();
	/* std::cin.get() is used to wait for user input before closing the console
	window.*/
	return 0;
	/* The return statement indicates that the program has completed successfully.
	if we donot write it, the program will still compile and run, but it will not 
	explicitly indicate success.*/
}
/*Error list is actually a list of all the errors that the compiler detects in the 
code.or we can say that it is garbage of memory*/