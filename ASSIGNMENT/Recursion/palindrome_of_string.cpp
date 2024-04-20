// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;


bool solve(string& str,int n,int s,int e){
  if(s>=e){
      return true;
  }
  
  if(str[s]!=str[e]){
      return false;
  }
  
  return solve(str,n,s+1,e-1);
   
   }
int main() {
    string str="aba";
    int n=str.length();
    int s=0;
    int e=n-1;
    cout<<solve(str,n,s,e);
     
    return 0;
}