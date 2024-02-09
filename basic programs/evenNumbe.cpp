#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num;
    cout<< "Enter your number :";
    cin >> num;

    if(num%2 == 0){
        cout << "Entered number is even number";
    }
    else{
        cout << "Entered number is odd number";
    }
    getch();
    return 0;

}