#include<iostream>
using namespace std;
class math{
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

     float add(float a, float b) {
        return a + b;

}
    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
};
int main(){
    math m;
    cout<<"Add two numbers: "<<m.add(10,20)<<endl;
    cout<<"Add two floats: "<<m.add(2.5f,4.5f)<<endl;
    cout<<"Add three integers: "<<m.add(1,2,3)<<endl;
    return 0;
}