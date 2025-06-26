#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    string word;
    cin >> word;

    deque<char> dq;

  
    for (char ch : word) {
        dq.push_back(ch);
    }

    bool pali = true;


    while (dq.size() > 1) {
        if (dq.front() != dq.back()) {
            pali= false;
            break;
        }
        dq.pop_front();
        dq.pop_back();
    }

    if (pali)
        cout << "It is a palindrome." << endl;
    else
        cout << "It is not a palindrome." << endl;

    return 0;
}
