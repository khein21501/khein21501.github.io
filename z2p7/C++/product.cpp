#include<iostream>
using namespace std;
class product
{
private:
    
    string Name;
    float Price;
    void showData(){

    }
public:
    product(){
        barCode="000";
        Name ="Unknown";
        Price=0.0;
    }
    product(string barCode,string Name,float Price ){
        this -> barCode= barCode;
        this->  Name=Name;
        this->  Price=Price;
    }
    string barCode;
};



int main(){
    product product1;
    string name;
    
    return 0;
}