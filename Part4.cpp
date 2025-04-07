#include <iostream>
using namespace std;

int main() {
//Question 1
    //Initializing Variables
    float num1;
    float num2;
    float num3;
    float largest;

    //Prompting and taking in inputs
    cout <<"Insert 3 Numbers: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    //Using If statements to determine largest. num1 and num2 are compared first, then num3 is compared with the greatest of those 2 integers. The greatest is outputted.
    if (num1 > num2) {
        if (num3 > num1) {
            cout << "Largest Value: " << num3<< "\n";
        }
        else { 
            cout << "Largest Value: " << num1<< "\n";
        }       
        }
    else {
       if (num3 > num2) {
            cout << "Largest Value: " << num3<< "\n";
       }
        else {
            cout << "Largest Value: " << num2 << "\n";
        }
    }

//Question 2
    //Initializing Variable, prompting for inputs, and taking inputs
    int year;
    cout <<"Enter a year: ";
    cin >> year;

    //The inputted year is a leap year if the year is divisible by 400 or if the year is divisible by 4 but not 100.
    //Uses logical operators to determine if the input is a leap year (OR, AND, NOT in that order).
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout <<year<<" is a leap year.\n";
         }
    else
        cout <<year<<" is not a leap year.\n";
}