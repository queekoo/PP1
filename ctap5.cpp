#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int num;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        q.push(num);
    }


    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
