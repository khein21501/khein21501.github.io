#include<iostream>
using namespace std;
int main(){
    int time;
    cout<<"Ennter Current Time : ";
    cin>>time;
    string result = (time<10)?"Good Morning":((time<20)?"Good day":"good Evening");
    cout<<result<<endl;
    return 0;
}