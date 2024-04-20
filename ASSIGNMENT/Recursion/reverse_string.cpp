// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;


void solve(string& str,int n,int s,int e){
  if(s>=e){
      return;
  }
  
  swap(str[s],str[e]);
  
  solve(str,n,s+1,e-1);
   
   
}

int main() {
    string str="absefg";
    int n=str.length();
    int s=0;
    int e=n-1;
       solve(str,n,s,e);
       for(int i=0;i<n;i++){
           cout<<str[i]<<" ";
       }
    return 0;
}