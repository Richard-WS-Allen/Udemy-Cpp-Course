// Section 12
// Challenge

/* Write a C++ function named apply_all that expects two arrays of integers and their sizes and
  dynamically allocates a new array of integers whose size is the product of the 2 array sizes
  
  The function should loop through the second array and multiplies each element across each element of array 1 and store the
  product in the newly created array.
   * 
   * UPDATE
   * 
   * I will be using a 2 dimensional array, rather that a single array.
  
  The function should return a pointer to the newly allocated array.
  
  You can also write a print function that expects a pointer to an array of integers and its size and display the
  elements in the array.
    
  For example,
  
  Below is the output from the following code which would be in main:
  
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,5);
    
    cout << "Array 2: " ;
    print(array2,3);
    
    int *results = apply_all(array1, 5, array2, 3);
    cout << "Result: " ;
    print(results,15);
   
   Output
   ---------------------
   Array 1: [ 1 2 3 4 5 ]
   Array 2: [ 10 20 30 ]
   Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
    * 
    * Expected result for 2d array
    * [ 10 20 30 40 50 ]
    * [ 20 40 60 80 100 ]
    * [ 30 60 90 120 150 ]
    * 
*/
  
#include <iostream>

using namespace std;

int ** apply_all( int *arr1, size_t size1, int *arr2, size_t size2 ){
    
    // 2D array, dynamically allocated on heap
    int **new_arr = new int*[size2];
    
    for( size_t i=0; i<size2; i++ ){
        // Allocate for each new arary
        new_arr[i] = new int[size1];
        for( size_t j=0; j<size1; j++ ){
            new_arr[i][j] = arr1[j] * arr2[i];
        }
    }
    return new_arr;
}
// Still using to print original arrays
void print( int *arr, size_t arr_size ){
    cout << "[ ";
    for( size_t i=0; i<arr_size; i++ ){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}
// Overloading to print 2D array
void print( int **arr, size_t size1, size_t size2 ){
    
    for( size_t i=0; i<size2; i++ ) {
        cout << "[ ";
        for( size_t j=0; j<size1; j++ ){
            cout << arr[i][j] << " ";
        }
        cout << "]" << endl;
    }
}

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    // Updated results, now returning pointer to a pointer
    int **results = apply_all(array1, array1_size, array2, array2_size);
    // No longer being used, using 2D array
    // constexpr size_t results_size {array1_size * array2_size};

    cout << "Result:" << endl;
    print(results, array1_size, array2_size );
    
    cout << endl;

    return 0;
}
