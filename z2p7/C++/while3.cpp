#include<iostream>
using namespace std;
int main(){
    int start, end,sum=0,count=0;
    float average;
    cout<<"Enter start Number: ";
    cin>>start;
    cout<<"Enter end Number: ";
    cin>>end;
    while (start<=end)
    {
        sum +=start;
        count++;
        start++;
    }
    average=(float)sum/count;
    cout<<"Sum of"<<start<<"to"<<end<<"is :" <<sum<<endl;
    cout<<"Total number count :"<<count<<endl;
    cout<<"Average :"<<average<<endl; 
    return 0;
}