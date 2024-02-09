#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    // program for absolute value apsalute value of positive integer and 0 is the number itself however absolute value of negative number is a positive number we can get it by multiplying number less than 0 by -1.
    int x;
    cout << "Enter any number : ";
    cin >> x;
    if(x<0){
        x = x * (-1);

    }
    cout << "Absolute value of entered number is : " << x << endl;
    getch();
    return 0;
}