#include<iostream>
using namespace std;
int main(){
<<<<<<< HEAD
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
=======
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
>>>>>>> ad8650ea546d491206f9a8ddd2b53842f3addcd7
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