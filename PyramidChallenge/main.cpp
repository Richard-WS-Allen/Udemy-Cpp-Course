#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a string to make a pyramid!" << endl;
    string userInput;
    
    getline(cin, userInput);
    int userInputLength = userInput.length();
    
    // Outer loop to track current letters
    for(int i=0; i<userInputLength; i++){
        
        // Output spaces to align pyramid correctly
        for(int j=0; j<userInputLength-i-1; j++){
            cout << ' ';
        }
        // Output letters up to current spot
        for(int k=0; k<=i; k++){
            cout << userInput[k];
        }
        // Output the letters in reverse
        for(int l=i-1; l>=0; l--)
        {
            cout << userInput[l];
        }
        cout << endl;
    }    
    return 0;
}
