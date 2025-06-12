#include<iostream>
using namespace std;
int main(){
    int A[4][4];
    int max_sum=0;
    int r=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j,4;j++){
            max_sum+=A[0][j];
        }
    }
    for(int i=1;i<4;i++){
        int sum=0;
        for(int j=0;j<4;j++) {
            sum+=A[i][j];
        }
        if(sum>max_sum){
            max_sum=sum;
            r=i;
        }

    }
    cout<<"Row"<<r+1<<"has the maximum sum:"<<max_sum<<endl;
    return 0;


}
