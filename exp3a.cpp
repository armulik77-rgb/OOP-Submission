#include<iostream>
using namespace std;
class book
{
    string title;
    string name;
    float price;
    public:
    
    void accept(){
        cout<<"Enter the title of book:";
        cin>>title;
        cout<<"Enter the name of book:";
        cin>>name;
        cout<<"Enter the price of book";
        cin>>price;
    }
    void display()
    {
        cout<<"Title of book:"<<title<<endl;
        cout<<"Name of book:"<<name<<endl;
        cout<<"Price of book:"<<price<<endl;
    }
};
int main()
{
    book b1;
    book *p;
    p = &b1;
    p->accept();
    p->display();
}