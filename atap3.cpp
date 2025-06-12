#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    int sum=0;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        sum+=arr[i];

    }
    cout<<"Sum = "<<sum<<endl;
    return 0;    

}