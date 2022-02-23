#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number : ";
    cin>>num;
    if (num%5==0 || num%3==0)
    {
       if (num%5==0)
       {
          cout<<num<<"is divisible by 5"<<endl;
       }else{
           cout<<num<<"is divisible bu 3"<<endl;
       }
       
    }else{
        cout<<num<<"is not divisible by 5 or 3";
    }
    
    return 0;
}