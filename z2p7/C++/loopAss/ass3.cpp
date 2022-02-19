#include<iostream>
using namespace std;
int main(){
    int start_num=5,end_num=100;
    

    int i =0;
    while (i<start_num)
    {
        if (start_num%5==0 && start_num%8==0)
        {
            cout<<"The number divided by 8 and 5 :"<<start_num;
        }else if (start_num%8==0)
        {
            cout<<"The number divided by 8 :"<<start_num;
        }else if (start_num%5==0)
        {
            cout<<"The number divided by 5 :"<<start_num;
        }else{
            cout<<"The number not divided by 5 and 8 : "<<start_num;
        }
        start_num++;
        
        
    }
    
        
    
    
    return 0;
}