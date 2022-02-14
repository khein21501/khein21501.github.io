#include<iostream>
using namespace std;
int main(){
    int loneAmt, rate, noMonth;
    cout<<"Enter Lone Amount : ";
    cin>>loneAmt;
    cout<<"Enter Rate : ";
    cin>>rate;
    cout<<"Enter Number of month : ";
    cin>>noMonth;
    int monthlyInterest = loneAmt*(rate*0.01);
    int yourInterest = monthlyInterest * noMonth;
    cout<<"Monthly Interset : "<<monthlyInterest<<endl;
    cout<<"Your Interest is : "<<yourInterest<<endl;
    return 0;
}