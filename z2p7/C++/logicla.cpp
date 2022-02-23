#include<iostream>
using namespace std;
int main(){
    bool result;
    int a = 5;
    int b = 6;
    result = (a<1) || (b>2);
    cout<< "result is :"<< result<<endl;
    cout<< "noot result is :"<<!result<<endl;

    return 0;
}