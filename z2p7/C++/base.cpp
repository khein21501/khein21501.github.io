#include<iostream>
using namespace std;
class Base{
    private:
        int x = 9 ;
    protected:
        int y = 20;
    public:
        int z = 22; 

};
class PublicDrive:public Base{
    public:
    void display(){
    
        cout<<"\n__________Public Access Mode____________\n";
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }
};
class ProtectedDerived protected Base{
    public:
    void display(){
        cout<<"\n_______Protected Access Mode________\n";
        cout<<"y = "<<y<<endl;
        cout<<"z ="<<z<<endl;
    }
};
class PrivatedDerived: private Base{
    public:
    void display(){
        
    }
};
int main(){
    PublicDrive pd1;
    pd1.display();

    return 0;
}