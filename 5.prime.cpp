#include <iostream>
using namespace std;

class PrimeChecker {
private:
    int number;

public:
    PrimeChecker(int num) {
        number = num;
    }

    bool isPrime() {
        if (number < 2) {
            return false;
        }
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }

    void displayResult() {
        if (isPrime()) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    PrimeChecker checker(n);
    checker.displayResult();

    return 0;
}