#include<iostream>
using namespace std;
string itemList[5][3];
void initializeItemData(){

    for (int  i = 0; i < 5; i++)
    {
        if (i==0)
        {
            cout<<"------Enter Item Date ------"<<endl;
        }else{
            cout<<"------Enter Next Item Date ------"<<endl;
        }
        
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
        
    }
    
}

void showData(){
    cout<<"BarCode\tItem\tPrice"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<itemList[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}
void searchItemByCode(string barCode){
    
    for (int i = 0; i < 5; i++)
    {
        if (barCode == itemList[i][0])
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<itemList[i][j]<<"\t";
            }
            
        }
        
        
    }
    
    
}

int main(){
    string barCode;
    initializeItemData();
    showData();
    cout<<"Type Bar Code"<<endl;
    cin>>barCode;
    searchItemByCode(barCode);
    return 0;
}