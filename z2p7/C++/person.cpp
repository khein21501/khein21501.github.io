#include<iostream>
using namespace std;
class Person{
    protected:
        string name;
        string nrcno;
    public:
        void initData(string name,string nrcno){
            this ->name=name;
            this ->nrcno=nrcno;
        }
        void showData(){
            cout<<"\nName : "<<name<<endl;
            cout<<"NRC: "<<nrcno<<endl;
        }
};
class Student: public Person{
    private:
        int rno;
    public:
        Student(int rno,string name,string nrcno){
            this -> rno = rno;
            initData(name.nrcno);
        }
        void showData(){
            Person::showData();
            cout<<"Roll Number : "<<rno<<endl;
        }
        void attend(){
            cout<<"\n Hello I am attendinng z2p Level 4"<<endl;
        }
};
class Programmer:public Person{
    private:
        string skillSet;
    public:
        void setSkillset(string skillSet){
            this -> skillSet= skills;
        }
        void viewSkillset(){
            cout<<"Hello, I am a programmer and my skill is :"<<skillSet<<endl;

        }
};
int main(){
    Student student1;
    student1.initData("Mg Mg","12/magata(N)123456");
    student1.showData();    
    Student student2(1,"Aye Aye","10/balabala(N)123456");
    student2.showData();
    student2.attend();
    Programmer programmer1;
    programmer1.initData("John","3D-12345");
    programmer1.showData();
    programmer1.setSkillset("C++");
    programmer1.viewSkillset();
    
    return 0;
}