#include<iostream>
using namespace std;
int main(){
    // Program to calculate percentage of 5 subject 
    float subject5 = 96;
    float subject1 = 36;
    float subject2 = 46;
    float subject3 = 56;
    float subject4 = 93;

    // percentage of marks is calculated as sum of all marks divided by total number of subjects
    float sumOfMarks = subject1 + subject2 + subject3 + subject4 + subject5;

        float percentage = sumOfMarks/5;
        cout<<"Percentage of marks is "<< percentage;



} 