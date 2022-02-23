#include<iostream>
using namespace std;
int main(){
    int nam1, nam2, nam3, maxNum;
    cout<< " enter any three number ";
    cin>>nam1>>nam2>>nam3;
    maxNum = nam1;
    if (nam2>maxNum)
    {
        maxNum=nam2;
    }
    if (nam3>maxNum)
    {
        maxNum = nam3;
    }
    cout<<"the largest of "<<nam1<<","<<nam2<<","<<nam3<<"is "<<maxNum;
    

    
    return 0;
}