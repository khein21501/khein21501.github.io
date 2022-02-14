#include<iostream>
using namespace std;
int main(){
    int myDay ;
    cout<< "enter days : ";
    cin>> myDay;
    int day = myDay%365; // get day to calculate months and day
    int year = myDay/365; //to get year
    int months = day/30;
    day%=30;
    cout<<"Day : "<<day<<endl;
    cout<<"Months : "<<months<<endl;
    cout<<"Years : "<<year<<endl;
    return 0;
}