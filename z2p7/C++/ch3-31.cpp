#include<iostream>
using namespace std;
int main(){
    //Even ODD
    int num;
    string result;
    cout<<"Enter a Number : ";
    cin>> num;
    result = (num%2==0)?"ODD":"Even";
    cout<<result;
    return 0;
}