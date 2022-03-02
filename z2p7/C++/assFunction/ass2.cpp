#include<iostream>
using namespace std;

//calulate afterDiscount price
    int price,discountPer,afterDiscount;
int calculate_discount(int price,int  discountPer){
    
    int perValue = price*(discountPer*0.01);
     return afterDiscount = price-perValue;
      
      
    
}


int main(){
   cout<<"Enter Price :";
    cin>>price;
   cout<<"Enter Percentage : ";
   cin>>discountPer;
   cout<<calculate_discount(price,discountPer);
    
    return 0;
}