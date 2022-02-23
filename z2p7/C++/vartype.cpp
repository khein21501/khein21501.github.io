#include <iostream>
using namespace std;
//globle var a
int a =10;
const float PI = 3.14;
void display(){
    int a=20;
    cout<<"value of a inside display function"<< a;
}

void displayAnother(int a){
    cout<<"\nvalue of a inside another Display  function"<< a;
}


void area(int radious){
    float area = PI * radious * radious;
    cout<<"Aera is "<< area;

}

int main(){
    display();
    cout<<"value of outside function"<<a;
    area(20);
   
}