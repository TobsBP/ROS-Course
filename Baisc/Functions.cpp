#include <iostream>
using namespace std;

// This is a function that dosen't return any value
void myfunction(int a=5, int b=1) {
    int sum = a + b;

    cout << "Result: " << sum << endl;
}

// Calculate the area of a box and return the value
float box_area(float side_x, float side_y)
{
    return side_x * side_y;
}

int main()
{
    // If i call the function whitouth value, the function will use the pre-set values
    myfunction();

    // If i call the function whit values, the function will use these values
    myfunction(2,3);

    // Call the function to calculate the area
    cout << box_area(3.5,6.4) << endl;

    return 0;
}