#include<iostream>
using namespace std;
class Friut
{
    public:
        string Name;
        int price;
        void setData(string na,int price){
            Name = na;
            this ->price = price;
        }
        void showData(){
            cout<<"\nName"<<Name<<"\t";
            cout<<"\nPrice"<<price<<endl;
        }

};
int main(){
    Friut fruit1,fruit2;
    fruit1.setData("Mango",700);
    fruit1.showData();
    fruit2.Name = "banana"; 
    fruit2.price= 1000;
    fruit2.showData();
    return 0;
}