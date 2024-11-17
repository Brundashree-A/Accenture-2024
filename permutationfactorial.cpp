#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int fact(int n){
    for(int i= n-1;i>1;i--){
        n= n*i;
    }
    return n;
}
int permutation(char *s){
    int count[26]={0},len;
    len=strlen(s);
    for(int i=0;i<len;i++){
        count[s[i]- 'a']++;
    }
    int res=fact(len);
    for(int i=0;i<26;i++){
        if(count[i]>1)
        res=res/fact(count[i]);
    }
    return res;


}
int main(){
    int res;
    char s[100];
    cin>>s;
    res=permutation(s);
    cout<<res;
}