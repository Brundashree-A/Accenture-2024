#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findpair(vector<int> &input2 ,int input1)
{
   int maxpro =0;
   int res;
   for(int i=0;i<input1;i++){
    for(int j=i+1;j<input1;j++){
        if(input2[i]==input2[j]){
        res=input2[i],input2[j];

    }
   }
}
 return res;
}
int main(){
   
    int input1;
    cout<<"enter the size: ";
    cin>> input1;
   
    vector<int> input2(input1);
    cout<<"enter the array elements: ";
    for(int i =0;i<input1;i++){
        cin>>input2[i];
    }
    cout<< findpair(input2,input1);
}

