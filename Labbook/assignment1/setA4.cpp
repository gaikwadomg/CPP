// cpp program to display armstrong number between two intervals
// armstrong number =  a number whose sum of all digits of number raised to power of number of digits in that number is same then it is armstrong 
// eg . 134 if  1*3 + 3*3 + 4 * 3 == 134  then it is armstrong number 

// i need initial number , number of digits in number n then i need to multiply n by each digit indually then i need to add all and then i need to check if output number is equal to inital number or not 

#include<iostream>
using namespace std;
int main(){
    int number, ref , digit = 0 , output = 0;
    cout << "Enter your number you want to check armstrong : " ;
    cin >> number ;
    ref = number;

    while(ref != 0){
        digit = digit +1;
        ref = ref /10;
    }

    for(int i = 0 ; i < digit ; i ++){
        output = output + (number/10) * digit;

    }

    cout << "Number of output : " << output << endl;

    cout << "Number of digits : " << digit << endl;

    return 0;
}