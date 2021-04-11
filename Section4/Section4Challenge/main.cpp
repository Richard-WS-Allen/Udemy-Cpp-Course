#include <iostream>

int main(){
    // Initialize fav_number
    int fav_number;
    // Prompt user to enter their favorite number
    std::cout << "Enter your favorite number between 1 and 100: ";
    // Get input and assign it to fav_number
    std::cin >> fav_number;
    // Output the fav_number
    std::cout << "Amazing! That's my favorite number too!" << std::endl;
    std::cout << "No really, " << fav_number << " is my favorite number!" << std::endl;
}