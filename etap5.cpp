#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    dq.push_front(a);  
    dq.push_back(b);   
    dq.push_front(c);  

    for (int num : dq) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Pop back: " << dq.back() << endl;
    dq.pop_back();

    cout << "Pop front: " << dq.front() << endl;
    dq.pop_front();

    cout << "Remaining: ";
    for (int num : dq) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
