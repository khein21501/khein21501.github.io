#include<iostream>
using namespace std;
int main(){
    int itemPrice, itemQuantity;
    cout<<"Enter item price : ";
    cin>>itemPrice;
    cout<<"Enter item quantity : ";
    cin>>itemQuantity;
    int totalAmt = itemPrice*itemQuantity;
    if (totalAmt>=5000)
    {
        int discount = totalAmt*(10*0.01);
        totalAmt -= discount;
        cout<<"Total Expense"<<totalAmt<<endl;
    }else{
    cout<<"Total Expense"<<totalAmt;
    }


     
    return 0;
}