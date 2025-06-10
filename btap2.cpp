#include<iostream>
#include<string>
using namespace std;
int main(){
    string soz;
    cin>>soz;
    cout<<soz.size()<<endl;
    cout<<soz[0]<<endl;
    cout<<soz[soz.size()-1]<<endl;

    return 0;
}