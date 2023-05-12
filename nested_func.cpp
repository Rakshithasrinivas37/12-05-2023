#include <iostream>

using namespace std;

class data
{
    int num1;
    int num2;
    
    public:
    void get_data();
    int add();
    int sub();
};

int data:: add()
{
    int sum = num1 + num2;
    return sum;
}

int data:: sub()
{
    int diff = num1 - num2;
    return diff;
}

void data:: get_data()
{
    cout << "Enter value for num1 and num2: ";
    cin >> num1 >> num2;
    cout << "Sum = " << add() << endl;
    cout << "Diff = " << sub() << endl;
}
int main()
{
    data d;
    
    d.get_data();

    return 0;
}
