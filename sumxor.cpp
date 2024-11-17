// sum XOR
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

int sxor(vector<int> &input2,int input1){
    int sum=0;
    int x=0;
    for(int i=0;i<input1;i++){
        if(i%2==0){
            x=x^input2[i];
        }
        else{
            sum= sum+input2[i];
        }
    }
    return sum-x;
}

int main(){
     
    vector<int> input2={10,5,6,3,7,2};
    int input1 = input2.size();
    cout<<sxor(input2,input1);

}