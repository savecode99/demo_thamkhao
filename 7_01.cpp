#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<int> myStack;
    string command;
    
    while (cin >> command) {
        if (command == "push") {
            int value;
            cin >> value;
            myStack.push(value);
        } else if (command == "pop") {
            if (!myStack.empty()) {
                myStack.pop();
            }
        } else if (command == "show") {
            if (!myStack.empty()) {
                stack<int> tempStack;
                while (!myStack.empty()) {
                    tempStack.push(myStack.top());
                    myStack.pop();
                }
                while (!tempStack.empty()) {
                    cout << tempStack.top() << " ";
                    myStack.push(tempStack.top());
                    tempStack.pop();
                }
                cout << endl;
            } else {
                cout << "empty" << endl;
            }
        }
    }
    
    return 0;
}
