#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int num;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        s.push(num);
    }
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
