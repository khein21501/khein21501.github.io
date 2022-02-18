#include<iostream>
using namespace std;
int main(){
    int nonZero;
    cout<<"Enter any non-zero Number : ";
    cin>>nonZero;
    if (nonZero > 0)
    {
        cout<<"The Number is positive";
    }else{
        cout<<"The Number is negative";
    }

     
    return 0;
}