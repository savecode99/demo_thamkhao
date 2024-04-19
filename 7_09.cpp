#include <iostream>
#include <string>
#include <set>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool isValidExpression(const string& expr) {
    int balance = 0;
    for (char c : expr) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        }
        if (balance < 0) {
            return false; // Bi?u th?c không h?p l? n?u có d?u ')' tru?c d?u '('
        }
    }
    return (balance == 0); // Bi?u th?c h?p l? n?u balance = 0
}

void generateExpressions(set<string>& expressions, string current_expr, int idx) {
    if (idx == current_expr.length()) {
        if (isValidExpression(current_expr)) {
            expressions.insert(current_expr);
        }
        return;
    }

    if (current_expr[idx] == '(') {
        // Th? lo?i b? c?p d?u ngo?c ? v? trí idx
        string without_parentheses = current_expr.substr(0, idx) + current_expr.substr(idx + 1);
        generateExpressions(expressions, without_parentheses, idx);
    } else if (current_expr[idx] == ')') {
        // Th? lo?i b? c?p d?u ngo?c ? v? trí idx
        string without_parentheses = current_expr.substr(0, idx) + current_expr.substr(idx + 1);
        generateExpressions(expressions, without_parentheses, idx);
    }

    generateExpressions(expressions, current_expr, idx + 1);
}

int main() {
    string input;
    cin >> input;

    set<string> expressions;
    generateExpressions(expressions, input, 0);

    for (const string& expr : expressions) {
        if(expr != input )cout << expr << endl;
    }

    return 0;
}
