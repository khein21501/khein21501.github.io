#include<iostream>
using namespace std;
class emp
{
private:
    int id;
    string name;
    string position;
    int salary;
public:
    emp(){

    };
    emp(int id,string name,string postion,int salary){
        this ->id = id;
        this ->name = name;
        this ->postion = postion;
        this -> salary = salary;
    }
    void getId(int id){
        this ->id = id;
    }
    int setId(){
        return this->id = id;
    }
    void getName(string name){
        this -> name = name;
    }
    string setName(){
        return this ->name=name;
    }
    void getPos(){
        this -> position = position;
    }
    string setPos(){
        return this -> position = position;
    }
    void setSal(){
        this-> salary = salary;
    }
    int getSal(){
        return this->salary =salary;
    }
    void displayInfo(){
        cout<<getId()<<"\t"<<getName()<<"\t"<<getPos()<<"\t"<<getSal(); 
    }
};



int main(){
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    return 0;
}