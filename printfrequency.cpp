#include <iostream>
#include <algorithm>
using namespace std;
int Printfrequency(string input1 , int input2,string input3)
{
  
  
  int count = 0;
  for (int i = 1; i < input2; i++)
  {
    if (input1[i] == input3[0])
      count++;
 
  }

  return count;
}

int main()
{
  string str = "helloworld";
  int n= str.length();
  string input3 = "l";
  cout<<Printfrequency(str,n,input3);
  return 0;
}