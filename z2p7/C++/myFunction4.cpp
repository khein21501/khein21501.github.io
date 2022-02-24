#include<iostream>
using namespace std;
    string  cities[3];
    //function to accept city name
    void initializeData(){
        for (int i = 0; i < 3; i++)
        {
            cout<<"Enter city name : ";
            getline(cin,cities[i]);
        }
        
    }
    
void showData(){
    cout<<"Your___________Cities "<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<cities[i]<<endl;
    }
    
}    
int main(){
    initializeData();
    showData();
    return 0;
}