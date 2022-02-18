#include<iostream>
using namespace std;
int main(){
   int pos_count=0,neg_count=0,zero_count=0,num;
   cout<<"Enter number want you type : ";
   cin>>num;
  
   for (int i = 0; i < num; i++)
   {
       int numTwo;
       cout<<"Enter any number : ";
       cin>>numTwo;
       if (numTwo>0)
       {
           pos_count++;
       }else if (numTwo<0)
       {
           neg_count++;
       }else{
           zero_count++;
       }
       
       
   }
   cout<<"positive number :"<<pos_count<<endl;
   cout<<"Negative number :"<<neg_count<<endl;
   cout<<"Zero Number :"<<zero_count<<endl;
   
   
   
   
   

    return 0;
}