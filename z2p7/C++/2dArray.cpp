#include<iostream>
using namespace std;
int main(){
    int  row =2;
    int  col =3;
    int number[row][col];
    for (int i = 0; i < row; i++)//out loop for row
     {  
        for (int j = 0; j < col; j++) //inner loop 
        {
            cout<<"Enter number";
            cin>>number[i][j];      //number[0][0] number [0][1]
            cout<<endl;
        }
        
   
        
    }
    cout<<"--------------Elememt---------\n";
    int total=0;
    int count=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<number[i][j]<<"\t";
            total += number[i][j];
            total += number[i][j];
            count++;
        }
        cout<<endl;
        
    }
    float avg =total*0.1/count;
    cout<<"Average : "<<avg;
    cout<<"\n Total number: "<<count<<endl;
        // summ of cols in 2d array
        for (int j = 0; j < col; j++)// col for outter loop
        {
            int sum=0;
             for (int i = 0; i < row; i++) // row for inner loop
             {
                 sum+= number[i][j];
             }
             cout<<"\n Sum for col"<<j+1<<" : "<<sum<<endl;
             
        }
        //calculate max value in 2d array
            int max_num = number[0][0]; // variable for max number assigned with first emlememt
            for (int i = 0; i < row; i++)
            {
                int max_num_in_row = number[i][0];// number [0][0] number [1][0]
                for (int j = 0; j < col; j++)
                {
                    if (max_num<number[i][j])
                    {
                        max_num=number[i][j];
                    }
                    if (max_num_in_row<number)
                    {
                        /* code */
                    }
                    
                    
                }
                
            }
            cout<<"Calculate max value  in 2d array \n";
            cout<<"Max value is : "<<max_num<<endl;
        
    return 0;
}