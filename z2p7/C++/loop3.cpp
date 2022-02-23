#include<iostream>
using namespace std;
int main(){
    int start_num,end_num,sum=0,count=0;
    float average;
    cout<<"enter start number";
    cin>>start_num;
    cout<<"enter end_number";
    cin>>end_num;
    for ( int i = start_num; i <= end_num; i++)
    {
        count++;
        sum +=i;
    }
    average = (float) sum/count;
    cout<<"sum of "<<start_num<<"to"<<end_num<<"is"<<sum<<endl;
    cout<<"Total Count is : " <<count<<endl;
    cout<<"Average : "<<average<<endl;
    return 0;
}