#include<iostream>
using namespace std;
int main(){
    //declare var a,b
    int a,b;
    // hard code!
  /*  a = 4;
    b= 5;*/
    cout << "Enter First Number";
    cin>>a;
    cout << "Enter Secand Number";
    cin>>b;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = (float)a / (float)b;
    int mob = a % b;

    cout << a << '+' << b << '=' << sum<< endl;
    cout << a << '-' << b << '=' << sub<< endl;
    cout << a << 'x' << b << '=' << mul<< endl;
    cout << a << '/' << b << '=' << div << endl;
    cout << a << '%' << b << '=' << mob << endl;
    
    return 0;
}