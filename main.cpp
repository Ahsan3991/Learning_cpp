#include <iostream>
#include <cmath> //telling c that we wanna use some math functions

using namespace std;

class Bucky{            // declaring a class
public:                 // access specifier so that function can be used outside class
    void coolsaying () {
    cout << "learning is fun" << endl;
    }
};
int main()
{

    Bucky buckysobject;  // defining a object so system would know which class function to call
    buckysobject.coolsaying(); // calling the function in the class


    cout << 40 <<endl; // printing different types of numbers directly
    cout << -36 <<endl;
    cout << -32.98 <<endl;
    cout << 36.65 <<endl;
    cout << 5 + 7 <<endl; // doing arithmetic operations
    cout << 5 * 3 <<endl;
    cout << 36.65 / 2 <<endl;
    cout << 10 % 3 <<endl; // modulus operator for getting remainder of division
    cout << (4 + 5) * 10 <<endl; // this follows the BODMAS rule
    int wnum = 5; // saving  whole numbers into variables
    int dnum = 5.5; // saving decimal number into a variable
    cout << wnum <<endl; // math operations with decimal numbers return decimal numbers and vice versa for integers
    cout << dnum <<endl;
    wnum ++; // increment wnum by +1
    cout << wnum <<endl;


   cout << pow(2,5) <<endl; // using power function for 2 raised to power 5
   cout << sqrt(36) <<endl; // find square root
   cout << round(36.34) <<endl; //round to nearest integer
    cout << ceil(36.4) <<endl; //ceiling to next integer
    cout << floor(36.8) <<endl; // lower to nearest integer
    cout << fmin(3,6) <<endl; // return minimum
    return 0;
}
