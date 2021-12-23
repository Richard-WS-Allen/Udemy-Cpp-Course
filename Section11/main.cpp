#include <iostream>
#include <vector>

using namespace std;

/*----Prototyping Functions-----*/

// Get user choice
char get_user_choice();
// Add numbers to vector
void add_numbers( vector<int> &vec );

/*--- const because vec should not get
 *    manipulated in the following ---*/

// Pretty print vector
void print_vector( const vector<int> &vec );
// Calculate mean, return as string
string get_mean( const vector<int> &vec );
// Get min, as string
string get_min( const vector<int> &vec );
// Get max, as string
string get_max( const vector<int> &vec );

int main()
{
    /*---------Section 11 Challenge---------
     * Output a menu that allows:
       P - Print numbers
       A - Add a number
       M - Display mean of the numbers
       S - Display the smallest number
       L - Display the largest number
       Q - Quit
        * 
        * Use functions for each option and displaying menu
        * Use function prototypes
        * Pass in vector when needed
    */
    
    vector <int> vec;
    char choice {'Q'};
    
    do {
        
        choice = get_user_choice();
        
        switch (choice){
            case 'a':
            case 'A':
                add_numbers( vec );
                break;
            case 'p':
            case 'P':
                print_vector( vec );
                break;
            case 'm':
            case 'M':
                cout << "The mean of the list is: " << get_mean( vec ) << endl << endl;
                break;
            case 's':
            case 'S':
                cout << "The smallest number is: " << get_min( vec ) << endl << endl;
                break;
            case 'l':
            case 'L':
                cout << "The largest number is: " << get_max( vec ) << endl << endl;
                break;
            case 'c':
            case 'C':
                vec.clear();
            default:
                break;
        }

    } while (choice != 'q' && choice != 'Q');
    
    return 0;
}

// Return user choice
char get_user_choice(){
    char choice;
    
    cout << "P - Print numbers\n"
        "A - Add a number\n"
        "M - Display mean of the numbers\n"
        "S - Display the smallest number\n"
        "L - Display the largest number\n"
        "C - Clear list\n"
        "Q - Quit\n\n"
        "Enter your choice: ";
    
    cin >> choice;
    cout << endl;
    return choice;
}

// Get user entered number
void add_numbers( vector<int> &vec ){
    cout << "Enter an integer to add to the list: ";
    int n;
    cin >> n;
    cout << endl;
    
    // Add n to vector
    vec.push_back(n);            
}

// Pretty print
void print_vector( const vector<int> &vec ){
    cout << "[ ";
    
    // If size 0, last cout won't work. Print close bracket and return
    if( vec.size() == 0 ){
        cout << "]" << endl << endl;
        return;
    }
    // Print all but last element, we only want commas
    // after these
    for ( size_t i=0; i < vec.size() - 1; i++ )
    {
        cout << vec.at(i) << ", ";
    }
    cout << vec.at(vec.size() - 1) << " ]" << endl << endl;
}

// Calculate mean
string get_mean( const vector<int> &vec ){
    if( vec.size() == 0 )
        return "N/A";
    
    int sum{0};
    for( int n : vec )
        sum += n;
    return to_string( (double)sum / vec.size() );
}

// Find min
string get_min( const vector<int> &vec ){
    if( vec.size() == 0 )
        return "N/A";
    
    int min = vec.at(0);
    for( int n : vec )
        if( n < min )
            min = n;
    
    return to_string( min );

}

// Find max
string get_max( const vector<int> &vec){
    if( vec.size() == 0 )
        return "N/A";
    
    int max = vec.at(0);
    for( int n : vec )
        if( n > max )
            max = n;
    
    return to_string( max );}
