#include<iostream>

using namespace std;

int countdigit(int l, int u, int x){

       int n, count=0;

    for(int i=l; i<=u;i++)

    {

        n=i;

        while(n!=0)

        {

            if(n%10==x)

                count++;

            n=n/10;

        }

    }

    return count;

}

int main(){

   

    int l,u,x;

    cin>>l>>u>>x;

   

    cout<<countdigit(l,u,x);

}