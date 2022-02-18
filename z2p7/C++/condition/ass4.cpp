#include<iostream>
using namespace std;
int main(){
    int programming, english, math;
    cout<<"Enter Programming marks : ";
    cin>>programming;
    cout<<"Enter English marks : ";
    cin>>english;
    cout<<"Enter Math marks : ";
    cin>>math;
    int totalMark = programming+english+math;
    int averMark = totalMark/3;
    
    if (programming>english && programming>math)
    {
        cout<<"Maxunum is programming"<<endl;
    }else if (english > programming && english > math)
    {
        cout<<"Maxunum is English"<<endl;
    }else{
        cout<<"Maxunum is Math"<<endl;
    }
    
    
    if (programming<english && programming<math)
    {
        cout<<"Minimum is programming"<<endl;
    }else if (english < programming && english < math)
    {
         cout<<"Minimum is english"<<endl;
    }else{
         cout<<"Minimum is math"<<endl;
    }
    
     cout<<"Total Mark :"<<totalMark<<endl;
     cout<<"Average mark :"<<averMark<<endl;
    
    if (programming >= 50 && english >=50 && math >= 50)
    {
        
        cout<<"Pass"<<endl;
        if (programming>=80 || english>=80 || math>=80)
        {
            string dSub;
            if (programming>=80)
            {
                cout<<"Programming is Distinction Subjects"<<endl;
            }
            if (english>=80)
            {
                cout<<"English is Distinction Subjects"<<endl;
            }
            if (math>=80)
            {
               cout<<"Math is Distinction Subjects"<<endl;
            }
            
        }
        

    }else{
        cout<<"Fail"<<endl;
    }
    
    
    

    

    return 0;
}