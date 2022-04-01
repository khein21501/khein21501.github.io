#include<iostream>
using namespace std;
class StudentAss{
    private:
        int rno;
        string name;
        string couse;
    public:
        StudentAss(){
            this -> rno = 0;
            this -> name="Unknown";
            this -> couse="Unknown";
        }
        void setRno(int rno){
            this -> rno = rno;
        }
        int getRno(){
            return this ->rno;
        }
        void setName(string name){
            this -> name = name;
        }
        string getName(){
            return this ->name;
        }
        void setCouse(string couse){
            this -> couse = couse;
        }
        string getCouse(){
            return this ->couse;
        }
        
        
        void displayInfo(){
            cout<<getRno()<<"\t"<<getName()<<"\t"<<getCouse()<<endl;
        }
};
  StudentAss stud[5];
        int rno;
        string name,couse;
        void search(){
            int schRno;
            cout<<"Search Roll Number :" ;
            cin>>schRno;
                for (int i = 0; i < 5; i++)
                {
                    if (schRno==stud[i].getRno())
                    {
                        cout<<stud[i].getRno()<<"\t"<<stud[i].getName()<<"\t"<<stud[i].getCouse();
                    }
                    
                }
                
        }      


int main(){
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter Student "<<i +1 <<"information !"<<endl;
        
        cout<<"Enter Name :";
        getline(cin,name);
        cout<<"Enter Couse :";
        getline(cin,couse);
        stud[i].setRno(i+1);
        stud[i].setName(name);
        stud[i].setCouse(couse);
    }
    cout<<"---Student Information----"<<endl;
    cout<<"RollNumber\tName\t\tCouse"<<endl;
    for (int i = 0; i < 5; i++)
    {
        stud[i].displayInfo();
    }
    search();
       
    
    return 0;
}