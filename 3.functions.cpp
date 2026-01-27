#include <iostream>
using namespace std;

// Function declaration
int add(int a, int b);
void greet(string name);

// Main function
int main() {
    cout << "Sum: " << add(5, 3) << endl;
    greet("Alice");
    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}