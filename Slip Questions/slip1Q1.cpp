// Cpp program to find maximum and minimum integer of entered two integer 
#include<iostream>
using namespace std;
#include<conio.h>
int main(){
    // creating container for two integers and assigning values for same from user 
    int num1, num2;
    cout << "Enter first integer : " << endl;
    cin >> num1;
    cout << "Enter second integer : " <<endl;
    cin >> num2;

    // Identifying the minimum and maximum integer
    if(num1>num2){
        cout <<  num1 << " is greater number than " << num2 << endl;;
    }
    else{
        cout << num1 <<  " is less number than " <<  num2 << endl;
    }

    // can also write conditional statement as 
    num1>num2? cout << num1 << " is greater number" << endl : cout << num1 << " is smaller number ";
    getch();
    return 0;
}