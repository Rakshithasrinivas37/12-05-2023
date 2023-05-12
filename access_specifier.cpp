#include <iostream>

using namespace std;

class employee
{
    private:
    string name; //can be accessed by member functions belonging to this class
    int id;
    int age;
    
    public:
    void get_data();
    void print_data();
    
};

void employee:: get_data()
{
    name = "Rakshitha";
    id = 320;
    age = 26;
}

void employee:: print_data()
{
    cout << "Employee data:\n" << "Name: " << name << "\nID: " << id << "\nAge: " << age << endl;
}

int main()
{
    employee emp;
    
    emp.get_data();
    emp.print_data();

    return 0;
}
