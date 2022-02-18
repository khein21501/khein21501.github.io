#include<iostream>
using namespace std;
int main(){
    int num,eachDigit;
    cout<<"Enter a number :";
    cin>>num;
    

    for (int i = 0; i<=to_string(num).length(); i++)
    {
        eachDigit=num%10;
        num=num/10;
    
    }
    cout<<"sum is :"<<eachDigit;
    
   

    return 0;
}