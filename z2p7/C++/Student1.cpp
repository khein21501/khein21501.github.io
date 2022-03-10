#include<iostream>
using namespace std;
class Student{
    private:
        int rno;
        string name;
        string couse;
    public:
        Student(){

        }
        Student(int rno,string name, string couse){
            this->rno = rno;
            this->name=name;
            this->couse=couse;
        }
        void setRno(int rno){
            this ->rno=rno;
        }
        int getRno(){
            return this->rno;
        }
        void setName(){
            this ->name=name;
        }
        string getName(){
            return this->name;
        }
        void setCouse(){
            this ->couse=couse;
        }
        string getCouse(){
            return this ->couse;
        }
        void showInfo(){
            cout<<"\tRoll Number :"<<getRno()<<"\tName :"<<getName()<<"\tCouse :"<<getCouse();
        }

};
int main(){
    Student std[5];
    int rno;
    string name;
    string couse;
    for (int  i = 0; i < 5; i++)
    {
        cout<<"Enter Student "<<i+1<<" Infomation :"<<endl;
        cout<<"Enter Roll Number : ";
        cin>>rno;
        cout<<"Enter Name : ";
        getline(cin,name);
        cout<<"Enter Couse :";
        getline(cin,couse);
        cin.ignore();
        std[i].setRno(rno);
        std[i].setName(name);
        std[i].setCouse(couse);
    }
    cout<<"------Student Information-------\n";
    for (int  i = 0; i < 5; i++)
    {
        std[i].showInfo();
    }
     
    return 0;
}