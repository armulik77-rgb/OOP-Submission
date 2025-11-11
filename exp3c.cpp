#include <iostream>
using namespace std;

class Student
{
public:
    class Marks
    {
    private:
        int roll;
        float per;

    public:
        void accept()
        {
            cout << "Enter the roll number of student: ";
            cin >> roll;
            cout << "Enter the percentage of student: ";
            cin >> per;
        }

        void display()
        {
            cout << "Roll number: " << roll << endl;
            cout << "Percentage: " << per << endl;
        }
    };
};

int main()
{
    Student::Marks m1;
    m1.accept();
    m1.display();

    return 0;
}
