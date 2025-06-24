#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
 
using namespace std;
 
int main() {
    vector<int> num;
    srand(time(0));
 
    for (int i = 0; i < 10; i++) {
        int randnum = rand() % 100 + 1;
        num.push_back(randnum);
    }
 
    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << " ";
    }
    cout << endl;
 
    sort(num.begin(), num.end());
 
    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << " ";
    }
    cout << endl;
 
    vector<int>::iterator min_value = min_element(num.begin(), num.end());
    vector<int>::iterator max_value = max_element(num.begin(), num.end());
 
 
    cout << "MIN: " << *min_value << endl;
    cout << "MAX: " << *max_value << endl;
 
   vector<int>::iterator n = unique(num.begin(), num.end());
   num.erase(n, num.end());
 
    for (int i = 0; i < num.size(); i++) {
        cout << num[i] << " ";
    }
    cout << endl;
 
    return 0;
}
 