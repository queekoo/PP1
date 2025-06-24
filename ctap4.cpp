#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    map<string, int> soz;
    vector<string> v;
    string t;

    stringstream ss(s);
    while (ss >> t) {
        v.push_back(t);
    }

    for (vector<string>::iterator it = v.begin(); it != v.end(); ++it) {
        soz[*it]++;
    }

    for (map<string, int>::iterator it = soz.begin(); it != soz.end(); ++it) {
        pair<string, int> p = *it;
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
