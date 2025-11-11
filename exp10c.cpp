#include <iostream>
using namespace std;
template <class T>
class Calculator {
    T num1, num2;
public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void add() {
        cout << "Addition: " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Subtraction: " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Multiplication: " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Division: " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }
};

int main() {
    cout << "Calculator using Class Template\n";

    Calculator<int> c1(10, 5);
    c1.add();
    c1.subtract();
    c1.multiply();
    c1.divide();

    cout << endl;

    return 0;
}