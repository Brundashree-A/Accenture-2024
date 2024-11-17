#include<iostream>
using namespace std;

int sfib(int n){
    int res =0;
    if(n==0||n==1){
        return 1;
    }
     if(n>1){
        res = (sfib(n-1)*sfib(n-1)+sfib(n-2)*sfib(n-2))%47;

    }
    return res;

}

int main(){
    int n;
    cout<<"enter the n value: ";
    cin>>n;
    cout<<sfib(n);
}