#include <string>
#include <iostream>

int main() {
    int number_input;
    std::string english_dict_for_output[10] = {  
        "one", 
        "two", 
        "three", 
        "four", 
        "five", 
        "six", 
        "seven", 
        "eight", 
        "nine",
        "Greater than 9"
    };

    number_input = -1;
    if (number_input > 9) {
        std::cout << english_dict_for_output[9];
    }
    else if (number_input <= 9 && number_input > 0 ) {
        std::cout << english_dict_for_output[number_input - 1];
    } else {
        std::cout << "Error" << std::endl;
    }
    
    return 0;
}

