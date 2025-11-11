#include<iostream>
using namespace std;
class book
{
    string name;
    float price;
    int page;
    public:
    
    void accept()
    {
        cout<<"Enter the name of book:";
        cin>>name;
        cout<<"Enter the price of book:";
        cin>>price;
        cout<<"Enter the pages of book:";
        cin>>page;
    }
    
    void display()
    {
        cout<<"Name of book:"<<name<<endl;
        cout<<"Price of book:"<<price<<endl;
        cout<<"Pages of book:"<<page<<endl;
    }
};
int main(){
book b1,b2;
b1.accept();
b2.accept();
b1.display();
b2.display();
}