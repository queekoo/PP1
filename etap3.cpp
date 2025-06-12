#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    int k;
    cin>>k;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        if(arr[i]==k){
            cout<<"Found at index:"<<i<<endl;
            break;
        }

    }
    return 0;

}