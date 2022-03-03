#include<iostream>
using namespace std;
class ProductNew
{
private:
    string name;
    float price;
    int barCode;
public:
    ProductNew(){

    }
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return this->name;
    }
    void setPrice(float price){
        this->price=price;
    }
    float getPrice(){
        return this->price;
    }
    void setBarCode(int code){
        if (code>=1000 && code<=9999)
        {
            this->barCode=code;
        }else{
            cout<<"Invalid Code"<<code<<endl;
        }
        
    }
    int getBarCode(){
        return this->barCode;
    }

};


int main(){
    string productName;
    float productPrice;
    int productCode;

    ProductNew productNew1,productNew2;
    productNew1.setName("JDonut");
    cout<<productNew1.getName()<<endl;
    productNew1.setPrice(950);
    cout<<productNew1.getPrice()<<endl;
    productNew1.setBarCode(1001);
    cout<<productNew1.getBarCode()<<endl;
    productNew2.setName(productName);
    productNew2.setPrice(productPrice);
    productNew2.setBarCode(productCode);
    cout<<productNew2.getName()<<"\t"<<productNew2.getPrice()<<"\t"<<productNew2.getBarCode()<<endl;
    
    ProductNew products[3];
    for (int i = 0; i < 3; i++)
    {
    cout<<"Enter Product Name for product2 :";
    getline(cin,productName);
    cout<<"Enter product price for product2 :";
    cin>>productPrice;
    cout<<"Enter product Code for product3 :";
    cin>>productCode;
        products[i].setName(productName);
        products[i].setPrice(productPrice);
        products[i].setBarCode(productCode);
    }
    cout<<"\nProducts Information"<<endl;
    cout<<"No\t Name\tPrice\tBarCode\n";
    for (int i = 0; i < 3; i++)
    {
        cout<<i+1<<"\t"<<products[i].getName()<<"\t"<<products[i].getPrice()<<"\t"<<products[i].getBarCode()<<endl;
    }
    
    

    return 0;
    
}