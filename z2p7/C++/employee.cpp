#include<iostream>
using namespace std;
class Employee{
    private:
        int salary;
        string name;
    public:
        Employee(){

        }
        Employee(int salary,string name){
            this ->salary = salary;
            this ->name  = name;
        }
        void displayInfo(){
            cout<<"\nName :"<<name<<"\tSalary :"<<salary<<endl;
            
        }
        void salaryIncreace(int amount){
            this ->salary += amount;
        }   
};
int main(){
    Employee emp[4];
    int salary;
    string name;
    for (int i = 0; i < 4; i++)
    {
        cout<<"Emter Employee "<<i+1<<"information :"<<endl;
        cout<<"Name :";
        getline(cin,name);
        cout<<"Enter Salary";
        cin>>salary;
        cin.ignore();
        emp[i]=Employee(salary,name);

    }
    cout<<"_________Employee List  Information_________\n";
    for (int  i = 0; i < 4; i++)
    {
        emp[i].displayInfo();
    }
    
    for (int i = 0; i < 4; i++)
    {
        emp[i].salaryIncreace(300000);
    }
    cout<<"\n_______Update Employee List Information________\n";
     for (int  i = 0; i < 4; i++)
    {
        emp[i].displayInfo();
    }
    
    
    
    return 0;
}