#include<iostream>
using namespace std;
string itemList[5][3];
void initializeItemData(){

    for (int  i = 0; i < 5; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            if (j==0)
            {
                cout<<"Enter Bar Code :";
                cin>>itemList[i][j];
            }else if (j==1)
            {
                cout<<"Enter Item Name :";
                cin>>itemList[i][j];
            }else{
                cout<<"Enter Price :";
                cin>>itemList[i][j];
            }
            
            
        }
        cout<<endl;
    }
    
}

int main(){
    initializeItemData();
    return 0;
}