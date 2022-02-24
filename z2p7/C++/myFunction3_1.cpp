#include<iostream>
using namespace std;
void changeValue(int *ip){
    cout<<"Address in function : "<<ip<<endl;
    *ip = *ip +20;
    cout<<"\nValue inside function : "<<*ip<<endl;
}
int main(){
    int num=10;
    cout<<"Before function call : "<<num<<endl;
    changeValue(&num);
    cout<<"After function call : "<<num<<endl;
    return 0;
}