#include <iostream>
#include <vector>
using namespace std;

void average(const vector<int>& v) {
    int sum = 0;
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
        sum += *it;
    }

    if (v.size() == 0) {
        cout << "Average: 0" << endl;
    } else {
        cout << "Average: " << (double)sum / v.size() << endl;
    }
}

int main() {
    int n, num;
    vector<int> numbers;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        numbers.push_back(num);
    }

    average(numbers);

    return 0;
}
