#include <iostream>
using namespace std;

int main() {
    //Initializing variables as floats and the selection as an integer. Prompts for selection.
    int sel1;
    float num1;
    float num2;
    float num3;
    cout <<"Pick an Operation:\n    1 Addition\n    2 Subtraction\n    3 Multiplication\n    4 Division\n";
    cin >> sel1;
    
    //Switch cases for each of the 4 operations
    switch (sel1) {
        //Addition. Takes two values from input and adds them.
        case 1:
            cout <<"Input two values to be added:";
            cin >> num1 >> num2;
            num3 = num1 + num2;
            cout <<num3<<"\n";
            break;
        //Subtraction. Takes two values from input and subtracts them.
        case 2:
            cout <<"Input two values to be subtracted:";
            cin >> num1 >> num2;
            num3 = num1 - num2;
            cout <<num3<<"\n";
            break;
        //Multiplication. Takes two values from input and multiplies them.
        case 3:
            cout <<"Input two values to be multiplied:";
            cin >> num1 >> num2;
            num3 = num1 * num2;
            cout <<num3<<"\n";
            break;
        //Division. Takes two values from input and divides them.
        case 4:
            int num4;
            cout <<"Input two values to be divided:";
            cin >> num1 >> num2;
            num3 = num1 / num2;
            cout <<num3<<"\n";
            break;
    }
}