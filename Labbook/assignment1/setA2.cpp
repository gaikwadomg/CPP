//  construct a cpp program to display first n number of fibonacci series 
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter value for n to get fibonacci series upto nth number : " << endl;
    cin >> n;
    // what is fibonacci series  = first number in fibonacci series is 0 then second is 1 and rest series is calculated by adding preceding two numbers hence 3rd number will be 0 + 1 ie 1 then fourth will be 1+ 1 = 2 and so on 
    cout << "Fibonacci series of first n numbers is as follows : " << endl;
    int a = 0 , b = 1 , c ;
    for(int i = 0 ; i < n ; i++){
        cout << a << endl;
        c = a+b;
        a = b ;
        b = c ;

    }
    return 0;
}