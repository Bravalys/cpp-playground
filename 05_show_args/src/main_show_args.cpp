#include <iostream>

int main(int argc, char* argv[]){
	// Make sure there are some program arguments available.
	if (argc <= 1){
		std::cout << "No program arguments found." << std::endl; 
	}
	// For loop to print every argument on a new line
    else{
        for (int index = 1; index < argc; ++index) {
		    std::cout << argv[index] << std::endl;
	    }
    }
    return 0;
}