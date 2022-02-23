#include<iostream>
using namespace std;
int main(){
    int dow;
    cout<<"Enter number of week's day (1-7) ";
    cin>>dow;
    switch (dow)
    {
    case 1:
    cout<<"\nSunday";
        break;
        case 2:
    cout<<"\nMon";
        break;
        case 3:
    cout<<"\nThu";
        break;
        case 4:
    cout<<"\nWed";
        break;
    
    default:
    cout<<"wrong number of day";
        break;
    }
    return 0;
}