#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //*****Section 7 Challenge*****//
    // Declare empty int vectors
    vector <int> vector1;
    vector <int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "vector1 has " << vector1.size() << " elements" << endl;
    cout << endl;
    cout << "vector1 elements:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "vector2 has " << vector2.size() << " elements" << endl;
    cout << endl;
    cout << "vector2 elements:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    cout << endl;

    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "vector_2d has the following elements:" << endl;
    for (vector<int> v : vector_2d) {
        for(int n : v) {
            cout << n << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    // Changing vector1 and seeing if it affects vector_2d
    
    vector1.at(0) = 1000;
    cout << "Did changing vector1 affect vector_2d?" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    
    return 0;
}
