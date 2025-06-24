#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> attar;
    string at;

    for (int i = 0; i < 5; ++i) {
        cout << "Enter name " << (i + 1) << ": ";
        getline(cin, at);
        attar.push(at);
    }

    while (!attar.empty()) {
        cout << "Now serving: " << attar.front() << endl;
        attar.pop();
    }

    cout << "Queue is empty." << endl;

    return 0;
}
