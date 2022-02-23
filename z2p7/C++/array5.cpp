#include<iostream>
using namespace std;
int main(){
    string brands[4]={"Sumsung","iPhone","Vivo","Oppo"};
    string search_name;
    int index =-1;
    cout<<"Enter brand to search :";
    getline(cin,search_name);
    for (int i = 0; i < 4; i++)
    {
        if (search_name == brands[i])
        {
            index =i;
            break;
        }
        
    }
    if (index==-1)
    {
        cout<<"Not Exits";
    }else{
        cout<<index;
    }
    

    return 0;
}