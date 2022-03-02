#include<iostream>
using namespace std;
class Account2
{
private:
    string accHolder;
    string accNumber;
    int Balance;
public:
    Account2(){
        this->accHolder="Unknown Holder";
        this->accNumber="Unknown Number";
        this->Balance=0;
    }
    void showData(){
        cout<<accHolder<<"\t"<<accNumber<<"\t"<<Balance<<endl;
    }
};

int main(){
    Account2 account1,account2;
    account1.showData();
    return 0;
}