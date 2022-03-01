#include<iostream>
using namespace std;
int min(int n1,int n2,int n3){
    int m_val=n1;
    if (m_val<n2)
    {
        m_val=n2;
    }
    if (m_val<n3)
    {
        m_val=n3;
    }
    return m_val;
}

int main(){
    int num1,num2,num3;
    cout<<"Enter three number :"<<endl;
    cin>>num1>>num2>>num3;
    cout<<"Min Number of"<<num1<<"and"<<num2<<"and"<<num3<<"is"<<min(num1,num2,num3)<<endl;


    return 0;
}