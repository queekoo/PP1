#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> line;
    string name;

    for (int i = 0; i < 3; i++) {
        cin >> name;
        line.push(name);
    }

    while (!line.empty()) {
        cout << "Serving: " << line.front() << endl;
        line.pop();
    }

    return 0;
}
