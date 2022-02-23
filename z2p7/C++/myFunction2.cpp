#include<iostream>
#include<iomanip>
#include<cctype>
#include<cmath>
using namespace std;
int main(){
    cout<<"\n_______Function of ccType_________\n";
    cout<< isalpha('9')<<endl;
    cout<< isalpha('A')<<endl;
    cout<< isdigit('0')<<endl;
    cout<< isalpha('A')<<endl;
    cout<<"Lower case of 'A' :"<<(char)tolower('A')<<endl;

    cout<<"\n_________Function of cMAth Library_________\n";
    cout<<"3 power 5 is : "<<pow(3,5)<<endl;
    cout<<"Square root of 36 is: "<<sqrt(36)<<endl;
    cout<<"Value of sin(30) is: "<<sin(30)<<endl;
    cout<<"Value of log(10) is : "<<log(10)<<endl;
    return 0;
}