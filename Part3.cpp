#include <iostream>
using namespace std;
int main()
{    
  //Question 1
    //Establishing Variables
    string name;
    float age;
    float number;

    //Prompting for name and accepting it
    cout << "Enter User Name: \n";
    cin >> name;

    //Prompting for age and accepting it
    cout << "Enter User Age: \n";
    cin >> age;

    //Prompting for number and accepting it
    cout << "Enter User's Favorite Number: \n";
    cin >> number;

    //Outputting values
    cout << name <<"'s age is " << age <<" and their favorite number is " << number <<"\n";
 
  //Question 2

    //Initializes and declares integer
    int num1;
    num1 = 21;

    //Initializes and declares float
    float float1;
    float1 = 6.9;

    //Initializes and declares character
    char char1;
    char1 = 'A';

    //Initializes and declares string
    string str1;
    str1 = "Hello There";

    //Prints each variable
    cout << num1 << "\n" << float1 << "\n" << char1 << "\n" << str1 << "\n";
}
