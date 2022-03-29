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

    }
    emp(int id,string name, string position,int salary){
        this ->id = id ;
        this ->name = name;
        this ->position = position;
        this ->salary = salary;
    }
    void setId(int id){
        this ->id = id;
    }
    int getId(){
        return this->id = id;
    }
    void setName(string name){
        this -> name = name;
    }
    string getName(){
        return this ->name=name;
    }
    void setPos(string position){
        this->position = position;
    }
    string getPos(){
        return this -> position = position;
    }
    void setSalary(int salary){
        this-> salary = salary;
    }
    int getSalary(){
        return this->salary =salary;
    }
    void displayInfo(){
        cout<<getId()<<"\t"<<getName()<<"\t"<<getPos()<<"\t"<<getSalary()<<endl; 
    }
};



int main(){
    emp empA[0];
    int id,salary;
    string name,position;
    
    int i = 0;
    while (true){
        
        cout<<"Enter Emoloyee"<<i +1<<"information"<<endl;
        cout<<"Enter Id Number : ";
        cin>>id;
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter Position :";
        cin>>position;
        cout<<"Enter Salary";
        cin>>salary;
        empA[i].setId(id);
        empA[i].setName(name);
        empA[i].setPos(position);
        empA[i].setSalary(salary);
        if (empA[i].setId(id)== "end" || empA[i].setName(name)=="end" || empA[i].setPos(position)=="end"||empA[i].setSalary(salary)=="end")
        {
            break;
        }
        
    }
    
    cout<<"------Emplyoee Information------"<<endl;
    for (int  i = 0; i < 5; i++)
    {
        empA[i].displayInfo();
    }
    
    

    
    return 0;
}