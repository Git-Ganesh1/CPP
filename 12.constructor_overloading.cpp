#include<iostream>
using namespace std;
class student{
    public:
    int rollnumber;
    float marks;
    public:
    //default constructor
    student(){
        rollnumber =0;
        marks = 0;
    }
    //constructor with one parameter
    student(int r){
        rollnumber = r;
        marks = 0;
    }
    //constructor with two parameters
    student(int r, float m){
        rollnumber = r;
        marks = m;
    }
    void display(){
        cout<<"Roll Number: "<<rollnumber<<", Marks: "<<marks<<endl;
    }
};
int main(){
    student s1;
    student s2(101);
    student s3(102, 85.5f);

    s1.display();
    s2.display();
    s3.display();
    return 0;
}