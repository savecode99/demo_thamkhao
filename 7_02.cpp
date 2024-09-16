#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int Q;
    cin >> Q;
    cin.ignore(); // Lo?i b? ký t? newline t? dòng tru?c dó

    stack<int> myStack;

    for (int i = 0; i < Q; ++i) {
        string query;
        getline(cin, query);

        if (query.substr(0, 4) == "PUSH") {
            int x = stoi(query.substr(5));
            myStack.push(x);
        } else if (query == "PRINT") {
            if (!myStack.empty())
                cout << myStack.top() << endl;
            else
                cout << "NONE" << endl;
        } else if (query == "POP") {
            if (!myStack.empty())
                myStack.pop();
        }
    }

    return 0;
}
