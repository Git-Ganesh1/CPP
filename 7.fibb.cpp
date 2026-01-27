#include <iostream>
using namespace std;

class Fibonacci {
private:
    int count;

public:
    Fibonacci(int n) {
        count = n;
    }

    void generateSeries() {
        if (count <= 0) {
            cout << "Please enter a positive number." << endl;
            return;
        }

        long long first = 0, second = 1;
        cout << "Fibonacci Series: ";

        for (int i = 0; i < count; i++) {
            cout << first << " ";
            long long next = first + second;
            first = second;
            second = next;
        }
        cout << endl;
    }

    void displayNthTerm(int n) {
        if (n <= 0) {
            cout << "Position must be positive." << endl;
            return;
        }

        long long first = 0, second = 1;
        for (int i = 1; i < n; i++) {
            long long next = first + second;
            first = second;
            second = next;
        }
        cout << "The " << n << "th Fibonacci term is: " << first << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    Fibonacci fib(n);
    fib.generateSeries();
    fib.displayNthTerm(5);

    return 0;
}