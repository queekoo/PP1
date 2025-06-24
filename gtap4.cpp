#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    for (int i = 1; i <= 20; ++i) {
        v.push_back(i);
    }

    reverse(v.begin(), v.end());

    int evenCount = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] % 2 == 0) {
            evenCount++;
        }
    }
    cout << "Even numbers count: " << evenCount << endl;

    vector<int> temp;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] % 3 != 0) {
            temp.push_back(v[i]);
        }
    }
    v = temp;

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
