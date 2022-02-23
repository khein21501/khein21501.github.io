#include<iostream>
using namespace std;
int main(){
    //convert seconds to hour minute second
    int mySeconds ;
    cout<<"enter seconds to calculate: ";
    cin>> mySeconds ;
    int hours = mySeconds / 3600; // get hours
    int seconds = mySeconds%3600; // get second to calculate minutes and seconds
    int minutes = seconds / 60; // get minutes 
    seconds%=60; // get seconds
    cout<< mySeconds << "second =" << hours << "Hours :" << minutes << "MInutes : "<< seconds << "seconds";  
    return 0;
}