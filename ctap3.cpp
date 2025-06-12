#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int arr[a];
    int e=0, o=0;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            e++;
        }else{
            o++;
      
        }
    }

    cout<<"Even:"<<e<<endl;
    cout<<"Odd:"<<o<<endl;
    return 0;

}
