#include<iostream>
#include<set>
using namespace std ;
int main(){
    set<int> setnum;
    int n;
    for(int i=0;i<10;i++){
        cin>>n;
        setnum.insert(n);

    };
    cin>>n;
    if(setnum.find(n)!=setnum.end()){
        cout<<"Yes "<<n<<endl;

    }else{
        cout<<"No "<<n<<endl;
    }
    for(set<int>::iterator it=setnum.begin();it!=setnum.end();++it){
        cout<<*it<<" ";
    }

    return 0;
}
