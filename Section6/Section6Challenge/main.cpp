#include <iostream>
using namespace std;

int main(){
    // Ricky's Carpet Cleaning Service
    const double SMALL_ROOM_COST {25.0};
    const double LARGE_ROOM_COST {30.0};
    const double SALES_TAX_RATE {0.07};
    const int ESTIMATE_EXPIRATION {30};
    
    // User variables
    int small_rooms {0};
    int large_rooms {0};
    double subtotal {0.0};
    double sales_tax {0.0};
    double total {0.0};
    
    // Prompt user for number of small and large rooms
    cout << "Welcome to Ricky's Carpet Cleaning!" << endl << endl;
    cout << "Price per small room $" << SMALL_ROOM_COST << endl;
    cout << "How many small rooms would you like cleaned? ";
    cin >> small_rooms;
    cout << "\nPrice per large room $" << LARGE_ROOM_COST << endl;
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;
    cout << "*************************************************" << endl << endl;
    
    // Calculate and display costs
    subtotal = (small_rooms * SMALL_ROOM_COST) + (large_rooms * LARGE_ROOM_COST);
    cout << "Subtotal: $" << subtotal << endl;
    
    sales_tax = subtotal * SALES_TAX_RATE;
    cout << "Tax: $" << sales_tax << endl;
    
    total = subtotal + sales_tax;
    cout << "Total Cost: $" << total << endl << endl;
    cout << "This estimate valid for " << ESTIMATE_EXPIRATION << " days." << endl;

    return 0;
}