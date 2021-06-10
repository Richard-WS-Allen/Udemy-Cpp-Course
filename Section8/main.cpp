#include <iostream>

using namespace std;

int main()
{
    /*******Section Eight Challenge*******/
    int cents {0};
    cout << "----Change calculator----" << endl;
    cout << "Enter an amount in cents: ";
    cin >> cents;
    cout << endl;
    
    cout << "You can provide change for this as follows:" << endl;
    
    int values [5] {0};
    int divisors [] {100, 25, 10, 5, 1};
    int carried = cents;
    
    for (int i=0; i < sizeof(values); i++)
    {
        values[i] = carried / divisors[i];
        carried %= divisors[i];
        if (carried == 0) break;
    }
    
    cout << "Dollars : " << values[0] << endl;
    cout << "Quarters: " << values[1] << endl;
    cout << "Dimes   : " << values[2] << endl;
    cout << "Nickels : " << values[3] << endl;
    cout << "Pennies : " << values[4] << endl;
    return 0;
}
