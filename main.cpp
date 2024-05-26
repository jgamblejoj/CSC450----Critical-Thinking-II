/* Java Documentation for the CPP Project
 *
 *import java.util.Scanner;

public class cta2 {
	public static void main(String[] args) {
		// loop counter
		int n = 1;

		// program loop
		while (n < 4) {
			// import scanner
	    	Scanner scr = new Scanner(System.in);

	    	// prompt user for first string
	    	System.out.println("Enter a string...");
	    	String str1 = scr.nextLine();

	    	// prompt user for second string
	    	System.out.println("Enter a second string...");
	    	String str2 = scr.nextLine();

	    	// concatenated string
	    	String str3 = str1 + str2;

	    	// output with two concatenated strings
	    	System.out.println("Output " + n + ": " + str3);

	    	// increment loop counter
	    	n++;

	    }

		// final output message
    	System.out.println("Program complete...");
	}
}

 */

// include statements
#include <iostream>
#include <string>

int main() {
	// loop counter
	int n = 1;

	// program loop
	while (n < 4) {
		// declare string variables for user input
		std::string str1, str2;

		// prompt user for first string
		std:: cout << "Enter a string..." << std::endl;
		std::getline(std::cin, str1);

		// prompt user for second string
		std:: cout << "Enter a second string..." << std::endl;
		std::getline(std::cin, str2);

		// concatenated strings
		std::string str3 = str1 + str2;

		// output with two concatenated strings
		std::cout << "Output " + std::to_string(n) + ": " + str3 << std::endl;

		// increment loop counter
		n++;
	}

	// final output message
	std::cout << "Program complete..." << std::endl;

	// program complete
	return 0;

}
