#include<iostream>
using namespace std;
class Account{
    public:
        string accountHolder;
        string accountNumber;
        int    accountBalance;
        void createAccount(string accountHolder,string accountNumber){
            accountHolder = accountHolder;
            accountNumber = accountNumber;
            accountBalance= 1000;
        }
        void deposit (int depositAmmount){
            accountBalance = accountBalance + depositAmmount;
        }
        bool withdraw(int withdrawAmmount){
            if (withdrawAmmount >accountBalance)
            {
                return false;
            }else{
                return true;
            }
            
        }
        void showData(){
            cout<<"________Current Info__________"<<endl;
            cout<<"Account Holder Name :"<<accountHolder<<endl;
            cout<<"Account Number :"<<accountNumber<<endl;
            cout<<"Account Balance :"<<accountBalance<<endl;
        }
};
int main(){
    Account account1;
    account1.showData();
    return 0;
}