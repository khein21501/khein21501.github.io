#include<iostream>
using namespace std;
class Animals{
    protected :
        string name;
        int leg;
    public:
        void setName(string name){
            this name->name;
        }
        void setLeg(int leg){
            this leg->leg;
        }
        // string getName(){
            return this name->name;
        }
        int getLeg(){
            return this leg->leg;
        }
        void eat(){
            cout<<"\nI can eat"<<endl;

        }
        void sleep(){
            cout<<"\nI can sleep"<<endl;
        }
};

class Birds:public Animals{

};

class Elephant:public Animals{

};



int main(){
    Birds b1;
    b1.
    return 0;
}