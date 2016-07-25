
#include <iostream>
#include "Utilities.h"

int getPositiveInteger() {
    int input;
    bool validInput = false;
    
    while (!validInput) {
        if (std::cin >> input && input >= 0) {
            validInput = true;
            return input;
        }
        
        std::cout << "Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        
        // Explicitly set flag to false
        validInput = false;
    }
    
    // Should never reach this return.
    return static_cast<int>(NULL);
}
