#include<iostream>
using namespace std;
int main(){
    int num,eachDigit,sum;
    cout<<"Enter a number :";
    cin>>num;
    int num2 = to_string(num).length();
    for (int i = 0; i <=num2; i++)
    
    
    {
        eachDigit=num%10;
        sum = sum + eachDigit;
        num=num/10;
        
        

    }
    cout<<"The Sum of digit is "<<sum;
    
    
   

    return 0;
}