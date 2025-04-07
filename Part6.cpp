#include<iostream>
using namespace std;

int main() {
    int number = 10;
  if(number == 20) {  //Replaced = with == 
        cout << "Number is 20" << endl;
    } else {
        cout << "Number is not 20" << endl;
    }

    for(int i = 0; i <= 5; i++){ //Added {}
        cout << i << endl;
    }
    return 0;
}

//Errors fixed:
//1. Replaced = with ==
//2. Added {}
