#include<iostream>
using namespace std;
int main(){
    int firstNum,secondNum;
    bool result;
    cout<<"enter first number :";
    cin>> firstNum;
    cout<<"enter second number :";
    cin>> secondNum;
    result =(firstNum == secondNum );
    cout<< firstNum <<" == "<< secondNum<<" is "<< result <<endl;

    result =(firstNum != secondNum );
    cout<< firstNum <<" != "<< secondNum<<" is "<< result <<endl;

    result =(firstNum < secondNum );
    cout<< firstNum << " < "<< secondNum<<" is "<< result <<endl;

    result =(firstNum > secondNum );
    cout<< firstNum <<" > "<< secondNum<<" is "<< result <<endl;
    return 0;
    
}