#include<iostream>
using namespace std;
int len=5;
int salaries[5]={5000,4500,6000,3200,400};
int getMaxsalaries(){
    int max_salaries=salaries[0];
    for (int i = 1; i < len; i++)
    {
        if (max_salaries<salaries[i])
        {
            max_salaries=salaries[i];
        }
        
    }
    return max_salaries;
}
int getTotal(){
int total =0;
for (int i = 0; i < len; i++)
{
    total += salaries[1];

}
    return total;
}
int main(){
    int max_salary=getMaxsalaries();
    cout<<"Maximum salary is : "<<max_salary<<endl;
    int total_salary=getMaxsalaries();
    cout<<"Total salary is : "<<total_salary<<endl;
    return 0;
}