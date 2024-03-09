// create a cpp program to create a multiplication table 

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter your multipllication table number : " << endl;
    cin >> num ;

    // perform table multiplication 
    cout << "Multiplication table of entered number is : " << endl;
    for(int i = 1 ; i < 11 ;i++){
        cout << i*num << endl;

    }

    return 0;
}