#include<iostream>
using namespace std;

int countspecificnumbers(int m ,int n){
    int i ,count=0;
    if(m>n){
        return -1;
    }
    for(int i=m;i<=n;i++){
        bool valid = true;
        int num = i;
        while(num>0){
            int digit = num%10;
        if(digit!=1 && digit!=4 && digit!=9){
            valid = false;
            break;
        }
        num = num /10;
    }
    if(valid = true){
        count ++;
    }
    
    }
    return count ;

}

int main()
{

}
