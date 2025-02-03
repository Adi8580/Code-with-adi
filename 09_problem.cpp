#include <iostream>

using namespace std;

    
int main()
{
    int num1 , num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << endl <<"Enter the second number: ";
    cin >> num2;
    cout << endl << "Sum of the two numbers is: " << num1 + num2;
    return 0;
}


// endl is used to insert a new line character and flush the output buffer.
// also endl is just like "\n" but it is slower than "\n" because it flushes the output buffer.