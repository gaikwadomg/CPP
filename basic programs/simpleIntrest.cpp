#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    // program for simple intrest formula p*r*n /100

    float principal=1000;
    float rateOfIntrest=10.5;
    float numberYears=10;
    float SI = (principal *rateOfIntrest*numberYears)/100;

    float intrest = SI - principal;

    cout << "simple intrest :" << SI << endl;
    cout << "intrest :" << intrest;
    getch();
}