#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int cp ; // cost price
    int sp;  // selling price 

    //entering both values
    cout << "Enter cost price : ";
    cin >> cp;
    cout << "enter selling price : ";
    cin >> sp;

    
    if(sp > cp){
        cout<<"You Made a profit of : " << sp -cp << " Rs" << endl;
    }
    if(cp > sp){
        cout<<"You encured a loss of : " << cp -sp  << " Rs" << endl;
    }
    getch();

    return 0;
}