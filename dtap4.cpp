#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    vector<char> zh;
    bool correct = true;

    for (char ch : s) {
        if (ch == '(') {
            zh.push_back(ch);       // push
        } else if (ch == ')') {
            if (zh.empty()) {
                correct = false;
                break;
            }
            zh.pop_back();          // pop
        }
    }

    if (correct && zh.empty()) {
        cout << "Correct" << endl;
    } else {
        cout << "Incorrect" << endl;
    }

    return 0;
}
