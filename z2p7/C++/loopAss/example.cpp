#include<iostream>
using namespace std;
int main(){
   int start,end;
   cin>>start;
   cin>>end;
   for (int i = start; i < end; i++)
   {
       if (i%5==0 && i%8==0)
       {
           cout<<"5and 8 :"<<i<<endl;
       }else if (i%5==0)
       {
           cout<<"5 : "<<i<<endl;
       }else if (i%8==0)
       {
           cout<<"8 : "<<i<<endl;
       }else{
           cout<<"Not 8 and 5 : "<<i<<endl;
       }
       
       
       
   }
   
   

    return 0;
}