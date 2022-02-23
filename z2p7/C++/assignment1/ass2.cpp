#include<iostream>
using namespace std;
int main(){
        int productPrice ,disValue ;
        cout<<"Enter product price : ";
        cin>>productPrice;
        cout<<"Enter Discount Value : ";
        cin>>disValue;
        int discount = productPrice*(disValue*0.01);
        int afterDiscount = productPrice - discount;
        cout<<"After discount price = "<< afterDiscount;
        

    return 0;
}