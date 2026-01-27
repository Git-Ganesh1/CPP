#include <iostream>
using namespace std;

class Message {
private:
    string content;

public:
    // Constructor
    Message(string msg = "Default Message") {
        content = msg;
        cout << "Constructor called: Object created with message: " << content << endl;
    }

    // Destructor
    ~Message() {
        cout << "Destructor called: Object destroyed. Message was: " << content << endl;
    }
};

int main() {
    Message msg1("Hello World");
    Message msg2;
    return 0;
}