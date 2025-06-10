#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int max1=max(a,b);
    int max2=max(c,d);
    int min1=min(a,b);
    int min2=min(c,d);
    cout<<abs(max1-max2)+abs(min1-min2)<<endl;
    return 0;
    



}