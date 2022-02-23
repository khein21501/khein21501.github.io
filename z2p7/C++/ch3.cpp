#include<iostream>
using namespace std;
int main(){
    int num;
    cout<< "Enter a number ";
    cin>>num;
    if (num >= 0 && num <9)
    {
      cout<< "You entered one digit"<<endl;
    }
    if(num%2){
        cout<<"You entered an odd number"<<endl;
    }else{
        cout<<"You entered an Even number"<<endl;
        
    }
   

    
    return 0;
}