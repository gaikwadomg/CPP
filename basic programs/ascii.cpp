#include<iostream>
using namespace std;
int main(){

    // We can find ascii value of any characters using typecasting changing data types 
    char x = 'a';
    int asc = (int)x;
    cout << "Ascii Value of a is :" <<asc << endl;

    char y = 'A';
    int ascA = (int)y;
    cout << "Ascii value of A is :" <<ascA << endl;

    char z = '0';
    int asc0 = (int)z;
    cout << "Ascii value of 0 is :" << asc0 << endl;

    char ch;
    cout<< "Enter any character to get its ascii value :";
    cin>>ch;
    int change = (int)ch;
    cout<< "Ascii VValue Of Entered Character is :" << change << endl;
    
}