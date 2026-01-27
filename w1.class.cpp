#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollnumber;
    string name;
    float marks;
 
    public:
    //constucter
    student(){
        rollnumber =0;
        name = " ";
        marks = 0.0;
    }
      //parameterised constructor
    student(int r, string n, float m){
        rollnumber = r;
        name = n;
        marks = m;
    }
    //function to input details
    void input() {
        cout << "Enter roll number: ";
        cin >> rollnumber;
        cin.ignore(); // to ignore the newline character after integer input
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
    }
    //function to display details
    void display() {
        cout << "Roll Number: " << rollnumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
    //destructor
    ~Student(){
        cout << "student object with roll number " << rollnumber << " destroyed." << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    //dynamic allocation of student objects
    Student* students = new Student[n];
    //input details for each student
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        students[i].input();
    }
    //display details for each student
    cout << "\nroll number\tname\tmarks" << endl;
    for (int i = 0; i < n; i++) {
        students[i].display();
    }
//release allocated memory
    delete[] students;
    return 0;
}