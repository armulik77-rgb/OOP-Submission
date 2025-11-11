#include <iostream>
#include <cstring>
using namespace std;

class Staff
{
public:
    char name[50];
    char post[50];

    void accept()
    {
        cout << "Enter name and post: ";
        cin >> name >> post;
    }

    void display()
    {
        cout << "HOD: " << name << endl;
    }
};

int main()
{
    Staff s[5];

    for (int i = 0; i < 5; i++)
    {
        s[i].accept();
    }

    cout << "\nList of HODs:\n";
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(s[i].post, "HOD") == 0)
        {
            s[i].display();
        }
    }

    return 0;
}
