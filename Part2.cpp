#include <iostream>
using namespace std;
int main()
{    
  //Question 1
        for (int i =50; i >= 2; i = i - 2) { //Uses a for loop to print each even number from 50 to 1. Will continue unil the number reaches 2 and uses subtraction to calculate the next integer. 
        cout << i << "  "; //Prints the integer
    }
        cout << "\n"; // Addes a newline between functions

  //Question 2

        int array[10] = {}; // Initializes the array with 10 elements
        int j = 0; // Sets counter to 0

        //Inputs array elements using a while loop until the counter is no longer less than 10
        cout << "Enter Array Elements: \n";
        while (j < 10) {
        cin >> array[j];
        j = j + 1;
    }
        //Outputs array elements until the counter is no longer less than 10 using a for loop
        for(j = 0; j < 10; j = j + 1) {
        cout << array[j] <<" ";
    }
}
