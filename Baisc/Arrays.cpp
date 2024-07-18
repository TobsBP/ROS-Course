#include <iostream>
using namespace std;

int main()
{
    int array[] = {2,4,7,2,6,8,1};      // Can place numbers like that and c++ will know what size is

    for (int number : array)            // Loop to run all the array 
        cout << number << " ";          // Print function
    cout << endl;

    array[4] = 54;                      // You can change the value from the array just jusing the place

    for (int number : array)            // Loop to run all the array modified
        cout << number << " ";          // Print function
    cout << endl;

    return 0;
}