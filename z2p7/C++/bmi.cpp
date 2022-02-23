#include<iostream>
using namespace std;
int main(){
    const int coe=703;
    float weight,height;
    cout<<"Enter Your weight";
    cin>>weight;
    cout<<"enter your height";
    cin>>height;
    float bmi = (weight/(height*height))*coe;
    cout<<"Your Bmi is : "<< bmi<<endl;
    if (bmi<18.5)
    {
        cout<<"under weight";
    }else{
        if (bmi>18.5 && bmi<24.9)
        {
            cout<<"Normal weight";
        }else
        {
            if (bmi>25 && bmi<29.9)
            {
                cout<<"over weight";
            }else{
                cout<<"overity";
            }
            
        }
        
        
    }
    
    return 0;
}