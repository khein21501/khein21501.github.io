#include<iostream>
using namespace std;
int main(){
    int num,eachDigit,sum;
    cout<<"Enter a number :";
    cin>>num;
    
    for (int i = 0; i <=sizeof(num); i++)
    
    
    {
        eachDigit=num%10;
        sum = sum + eachDigit;
        num=num/10;
        
        

    }
    cout<<"The Sum of digit is "<<sum;
    
    
   

    return 0;
}