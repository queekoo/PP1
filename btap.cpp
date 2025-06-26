#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> s;
    string str;

    cin >> str;

    for (char ch : str)
        s.push(ch);

    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }

    return 0;
}
