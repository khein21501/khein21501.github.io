#include<iostream>
using namespace std;
class student{
    private:
        int rno;
    public:
        void enroll(){
            cout<<"I have enrolled in C++"<<endl;
        }
        void payTutionFees(int fees){
            cout<<"I have to pay tution fees "<<fees<<endl;
        }

};
class Instructor{

};
class TeachingAssistance: public Student,public Instructor{
    public:
        TeachingAssistance(){
            cout<<"I am a teaching assistant."<<endl;
        }
};
int main(){
    TeachingAssistance ta1;
    ta1.enroll();
    ta1.getSalary();
    ta1.payTutionFees(120000);
    ta1.teach();
    return 0;
}