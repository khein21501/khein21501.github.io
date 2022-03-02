#include<iostream>
using namespace std;
class Account
{
private:
    string accHolder;
    string accNumber;
    int Blance;
    
public:
    Account(){
        this->accHolder="Unknown";
        this->accNumber="Unknown Number";
        this->Blance=0;
    }
    Account(string accHolder,string accNumber,int amount){
        this->accHolder=accHolder;
        this->accNumber=accNumber;
        this->Blance=amount;
    }
    void showData(){
        cout<<accHolder<<"\t"<<accNumber<<"\t"<<Blance<<endl;
    }
};



int main(){
    Account account1;
    Account account2("U Ba","00123",2000);
    Account account3=Account("U Aye","00124",5000);
    account1.showData();
    account2.showData();
    account3.showData();
    return 0;
}