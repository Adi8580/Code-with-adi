#include <iostream>
#include <string>
using namespace std;
class teachers
{
private:
    int salary;
public:
    string name;
    int age;
    string subject;
    string classes;

void setSalary(int s) // Setter // and we can use int instead of void // setter is used to set the value of a private variable
    {
        salary = s;
        if(s >= 10000)
        {
            cout << "Salary is too high" << endl;
        }
        else
        {
            cout << "Salary is too low" << endl;
        }
    }
int getSalary() // Getter // getter is used to get the value from private variable
    {
        return salary;
    }
};

int main()
{
    teachers teacher1;
    teacher1.name = "Mr. John";
    teacher1.age = 35;
    teacher1.subject = "Math";
    teacher1.classes = "C2";

    teachers teacher2;
    teacher2.name = "Mrs. Jane";
    teacher2.age = 30;
    teacher2.subject = "English";
    teacher2.classes = "C1";
    teacher2.setSalary(10000);


    cout << teacher1.name << "  \nHe is " << teacher1.age << " years old\nHe teaches " << teacher1.subject << " \nand there class is " << teacher1.classes << "\n"<< endl;
    cout << teacher2.name << "  \nShe is " << teacher2.age << " years old\nShe teaches " << teacher2.subject << " \nand there class is " << teacher2.classes << endl;
    cout << "Her salary is " << teacher2.getSalary() << endl;
    return 0;
};