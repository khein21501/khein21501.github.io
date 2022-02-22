#include<iostream>
using namespace std;
int main(){
    int start_num=5,end_num=100;
    cout<<"Enter Start Number : ";
    cin>>start_num;
    cout<<"Enter End Number : ";
    cin>>end_num;
    int i = start_num;
    for (int i = start_num; i < end_num; i++)
    {
        if (i%5==0 && i%8==0)
        {
            cout<<"Divided by 5 and 8 : "<<i<<endl;
        }else if (i%5==0)
        {
            cout<<"DIvided by 5 :"<<i<<endl;
        }
        
        
    }
    

   
    
        
    
    
    return 0;
}