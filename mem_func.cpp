// Defining a member function inside class
/*#include <iostream>

using namespace std;

class student_data
{
    public:
    string name;
    int id;
    int marks;
    
    void print_data()
    {
        cout << "Student name: " << name << "\nStudent ID: " << id << "\nStudent marks: " << marks << endl;
    }
};

int main()
{
    student_data data {"Rakshitha", 320, 557};

    data.print_data();
    return 0;
}*/

// Defining a member function outside class
#include <iostream>

using namespace std;

class student_data
{
    public:
    string name;
    int id;
    int marks;
    
    void print_data();
};

void student_data:: print_data()
{
    cout << "Student name: " << name << "\nStudent ID: " << id << "\nStudent marks: " << marks << endl;
}

int main()
{
    student_data data {"Rakshitha", 320, 557};

    data.print_data();
    return 0;
}
