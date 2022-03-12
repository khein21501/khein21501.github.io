#include<iostream>
using namespace std;
class StudentAss{
    private:
        int rno;
        string name;
        string couse;
    public:
        StudentAss(){

        }
        StudentAss(int rno,string name,string couse){
            this ->rno= rno;
            this ->name= name;
            this ->couse= couse;
        }
        
        
        void displayInfo(){
            cout<<"\nName :"<<rno<<"\tName :"<<name<<"\tCouse :"<<couse<<endl;
        }
        

};
int main(){
    StudentAss stud[5][3];
    int rno;
    string name;
    string couse;
    for (int i = 0; i < 5; i++)
    {
        cout<<"-------Student Information"<<i+1<<endl;
       for (int j = 0; j < 3; j++)
       {
        
        cout<<"Enter Roll No :";
        cin>>rno;
        cout<<"Enter Name :";
        getline(cin,name);
        cin.ignore();
        cout<<"Enter Couse :";
        getline(cin,couse);
        cin.ignore();
        stud[i][j]=StudentAss(rno,name,couse);
       }
       

    }

    cout<<"-----Student Information------\n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            stud[i][j].displayInfo();
       
        }
        
    }
    
    
    return 0;
}