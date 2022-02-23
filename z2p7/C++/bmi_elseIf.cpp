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
            cout<< "Under Weight"<<endl;

        }
        else if (bmi>=18.5 && bmi<=24.9)
        {
            cout<< "Normal Weight"<<endl;
        }
        else if(bmi>=24.9 && bmi<=35.0)
        {
            cout<<"Over weight"<<endl;
        }
        else
        {
            cout<<"Obsity"<<endl;
        }
        
        

        
    
    
    return 0;
}