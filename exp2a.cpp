#include <iostream>
using namespace std;

class City
{
public:
    string name;
    int population;

    void accept()
    {
        cout << "Enter the name of city: ";
        cin >> name;
        cout << "Enter the population of city: ";
        cin >> population;
    }

    void display()
    {
        cout << "City: " << name << ", Population: " << population << endl;
    }
};

int main()
{
    City cities[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter details of city " << i + 1 << ":\n";
        cities[i].accept();
    }

    int maxIndex = 0;
    for (int i = 1; i < 5; i++)
    {
        if (cities[i].population > cities[maxIndex].population)
        {
            maxIndex = i;
        }
    }

    cout << "\nCity with the highest population is: "
         << cities[maxIndex].name
         << " (" << cities[maxIndex].population << " people)" << endl;

    return 0;
}
