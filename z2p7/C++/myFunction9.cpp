#include<iostream>
using namespace std;
void display(char ch= '*',int no = 3){
    for (int i = 0; i < no; i++)
    {
        cout<<ch<<'\t';
        
    }
    cout<<endl;

}
int addNumbers(int a,int b=7,int c=29){
    return (a+b+c);
}
int main(){
    int num;
    cin>>num;
    cout<<"Call function with one argument: "<<addNumbers(num)<<endl;
    cout<<"Call function with 2 argument: "<<addNumbers(num,1)<<endl;
    cout<<"Call Function with argyments:"<<addNumbers(1,2,3)<<endl;
    cout<<"Call function without argument "<<endl;
    display();
    cout<<"Call function with one arrgument :"<<endl;
    display('$');
    cout<<"Call function with both arrgument :"<<endl;
    display('&',10);
    return 0;

}