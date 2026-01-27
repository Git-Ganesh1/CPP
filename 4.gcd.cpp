#include <iostream>
using namespace std;

class GCD {
private:
    int num1, num2;

public:
    // Constructor
    GCD(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Function to calculate GCD using Euclidean algorithm
    int findGCD() {
        while (num2 != 0) {
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        return num1;
    }
};

int main() {
    int a, b;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    GCD gcd(a, b);
    cout << "GCD is: " << gcd.findGCD() << endl;
    
    return 0;
}