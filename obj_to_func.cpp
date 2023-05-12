#include <iostream>

using namespace std;

class std_data
{
    public:
    string name;
    int id;
    int age;
};

void input_data(std_data *ptr)
{
    ptr->name = "Neerav";
    ptr->id = 74;
    ptr->age = 16;
}

void display_data(std_data *ptr)
{
    cout << "Name: " << ptr->name << endl;
    cout << "id: " << ptr->id << endl;
    cout << "Age: " << ptr->age << endl;
}

int main()
{
    std_data data;
    
    input_data(&data);
    display_data(&data);

    return 0;
}
