#include<iostream>
using namespace std;
int main(){
    int len=4;
    int number[]={23,45,54,78};
    cout<<"Original Array"<<endl;
    for (int i = 0; i < len; i++)
    {
        cout<<number[i]<<"\t";
    }
    cout<<"\nReverse Array"<<endl;
    for (int i = len-1; i >=0; i--)
    {
        cout<<number[i]<<"\t";
    }
    cout<<endl;
    int lagest = number[0];
    for (int i = 1; i < len; i++)
    {
        if (lagest<number[i])
        {
            lagest=number[i];
        }
        
    }
    cout<<"largest number of array is : "<<lagest<<endl;
    return 0;
}