#include<iostream>
using namespace std;
struct student
{
    char name[60];
    int roll;
    float marks;
};
int main() 
{
    student s;
    cout << "Enter information," << "\n";
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nDisplaying Information," << "\n";
    cout << "Name: " << s.name << "\n";
    cout << "Roll No.: " << s.roll << "\n";
    cout << "Marks: " << s.marks << "\n";
    return 0;
}

