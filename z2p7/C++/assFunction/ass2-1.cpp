#include<iostream>
using namespace std;
int loneAmount,innterestRate,interest;
int calculateInterest(int loneAmount, int interestRate){
    return interest = loneAmount*(interestRate*0.01);
}
int main(){
    int numberOfmonth,totalInterset;
    cout<<"Enter lone amount";
    cin>>loneAmount;
    cout<<"Enter interest rate";
    cin>>innterestRate;
    cout<<"Number of month";
    cin>>numberOfmonth;
    cout<<"Monthly innterset is : "<<calculateInterest(loneAmount,innterestRate)<<endl;
    totalInterset = calculateInterest(loneAmount,innterestRate)*numberOfmonth;
    cout<<"Total interest is :"<<totalInterset;
    return 0;
}