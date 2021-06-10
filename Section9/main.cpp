#include <iostream>
#include <vector>

using namespace std;

int main()
{
    /*---------Section 9 Challenge---------
     * Output a menu that allows:
     * A-Adding a number to a list
     * P-Printing the list
     * C-Clearing the list
     * M-Output the mean of numbers in the list
     * H-Output the max number in the list
     * L-Output the minimum number in the list
     * Q-Quit
    */
    
    vector <int> vec;
    char choice {'Q'};
    int min {0};
    int max {0};
    bool numberAdded {false};
    int sum {0};
    
    do {
        cout << "P - Print numbers\n"
        "A - Add a number\n"
        "M - Display mean of the numbers\n"
        "L - Display the lowest number\n"
        "H - Display the highest number\n"
        "Q - Quit\n\n"
        "Enter your choice: ";
        
        cin >> choice;
        cout << endl;
        
        switch (choice){
            case 'a':
            case 'A':
                cout << "Enter an integer to add to the list: ";
                int n;
                cin >> n;
                vec.push_back(n);
                cout << endl;
                
                sum += n;
                
                if (!numberAdded)
                {
                    min = max = n;
                    numberAdded = true;
                } else {
                    if (n < min)
                    {
                        min = n;
                    }
                    else if (n > max)
                    {
                        max = n;
                    }
                }
                break;
            
            case 'p':
            case 'P':
                cout << "[ ";
                for (int n : vec)
                {
                    cout << n << " ";
                }
                cout << "]" << endl;
                break;
            
            case 'm':
            case 'M':
                if(vec.size() == 0)
                {
                    cout << "Error - No entries have been made" << endl;
                    break;
                }
                cout << "The mean of the list is: " << (double) sum / vec.size() << endl;
                break;
            
            case 'l':
            case 'L':
                cout << "The smallest number is: " << min << endl;
                break;
            
            case 'h':
            case 'H':
                cout << "The largest number is: " << max << endl;
                break;
            
            default:
                break;
        }

    } while (choice != 'q' && choice != 'Q');
    return 0;
}
