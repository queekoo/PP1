//Есть два целых чмсла a и b .Ecли a меньше или равно b ,
//то вывести разницу b и а , а если условия не выпоняются ,то вывести 
//сумму двух чисел 
 
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (a<=b){
        cout<<b-a<<endl;

    }else{
        cout<<a+b<<endl;

    }
    return 0;

}