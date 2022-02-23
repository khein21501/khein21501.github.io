#include<iostream>
using namespace std;
int main(){
    int start_num,end_num;
    cout<<"Enter start Number :";
    cin >>start_num;
    cout<<"Enter end number :";
    cin>>end_num;
    cout<<"Divided by 5 and 8 :"<<endl;

    for (int i = start_num; i <= end_num; i++)
    {
        if (i%5==0 && i%8==0)
        {
             cout<<i<<endl;
        }
        
       
    }
    cout<<"Divided by 5 : "<<endl;
    for (int i = start_num; i <= end_num; i++)
    {
        if (i%5==0)
        {
            cout<<i<<endl;
        }
        
    }
    cout<<"Divided by 8 : "<<endl;
    for (int i = start_num; i <= end_num; i++)
    {
        if (i%8==0)
        {
            cout<<i<<endl;
        }
        
    }
    cout<<"Not Divided by 8 and 5 :"<<endl;
    for (int i = start_num; i <= end_num; i++)
    {
        if (i%8 != 0 && i%5 != 0 )
        {
            cout<<i<<endl;
        }
        
    }
    
    
    

    
    
        
        
        
    
    

    
        
    
    
    return 0;
}