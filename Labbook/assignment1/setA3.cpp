// Write a cpp program to reverse a number 
// if number is 12345 then output should be 54321
#include<iostream>

using namespace std;

int main(){
    int number , reversed = 0 ; 
        cout << "Enter your number : " << endl;
        cin >> number;

        while(number != 0){
            int rem = number % 10 ;
            reversed = reversed * 10 + rem ;

            number = number / 10 ;

        }
        cout << "Reversed number is : " << reversed << endl;

    return 0;
}

