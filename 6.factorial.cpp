#include <iostream>
using namespace std;

class Factorial {
private:
    int number;

public:
    Factorial(int n) {
        number = n;
    }

    int calculate() {
        if (number < 0) {
            return -1;
        }
        if (number == 0 || number == 1) {
            return 1;
        }
        int result = 1;
        for (int i = 2; i <= number; i++) {
            result *= i;
        }
        return result;
    }

    void display() {
        int result = calculate();
        if (result == -1) {
            cout << "Factorial is not defined for negative numbers." << endl;
        } else {
            cout << "Factorial of " << number << " is: " << result << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Factorial fact(n);
    fact.display();

    return 0;
}