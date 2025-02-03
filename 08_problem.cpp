#include <iostream>

// using namespace std;
    int a = 10 , b = 20;
    int ok()
    {
        int c;
        c = a + b;
        std::cout << c ;
        return c;
    }

int main()
{
    ok();std::cout << " : This is the value of ok";
    std::cout << "\nThe value is " << a  << " and " << b << " and also there sum is : " << a+b;
    
    return 0;
}
