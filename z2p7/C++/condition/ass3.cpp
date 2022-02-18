#include<iostream>
using namespace std;
int main(){
    string uName, uPass;
    string username,password;
    cout<<"Confirm your username : ";
    cin >>username;
    cout<<"Confirm your passward : ";
    cin >>password;
    cout<<"Enter Your usernmae : ";
    cin >> uName;
    cout<<"Enter password";
    cin >> uPass;
    if (uName != username || uPass != password)
    {
        cout<<"password is incorrect";
    }else{
        cout<<"Login success";
    }
    

    

    return 0;
}