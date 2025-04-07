#include <iostream>
using namespace std;
void isPrime();
void calculateArea();
int main() {



void calculateArea(); {    
//Initializes all 3 Variables as Floats
    float n1;
    float n2;
    float n3;

//Takes n1 as the Width, prompts user to input a number
    cout << "Enter Width:";
    cin >> n1;

//Takes n1 as the Length, prompts user to input a number
    cout << "Enter Length:";
    cin >> n2;
    
//Calculates Area and outputs the result
     n3 = n1*n2;
     cout << "Area: " << n3 << "\n"; 
   
  }

void isPrime(); {
//Initializes a variable 
  int n4;
  int n5 = 1;
//Prompts user for inout and takes n4 as input
  cout << "Enter a Number:";
  cin >> n4;

//Calculates if prime

//If n4 is less than 2 than n5 is set to 0
  if(n4 < 2) n5 = 0; 
//If n4 is 2 than n5 is set to 1
  if(n4 == 2) n5 = 1; 
//If n4 divided by 2 has a remainder of 0 than n5 is set to 0
  if(n4 % 2 == 0) n5 = 0; 
// i is set to 3. i is then compared to n4 by dividing i from n4 and testing if the remainder is 0. 
// The function will repeat until i^2 is less than or equal to n4. On each increment i will increase by 2.
// If the remainder is equal to 0, n5 is set to 0
  for(int i=3; (i*i) <= n4; i = i+2){
    if(n4 % i == 0) n5 = 0;
} 

//Uses a variable to determine which output to use. If n5 = 1, the integer is prime. If n5 != 1, the integer is not prime.
if(n5 == 1) 
  cout << n4 << " is prime.\n";
else
  cout << n4 << " is not prime. \n";
}

}