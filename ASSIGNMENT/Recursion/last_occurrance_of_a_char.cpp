// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;


int solve(string& str,char ch,int n,int& index,int i){
    if(i==n){
        return index;
    }
    
    if(str[i]==ch){
        index=i;
    }
    
    return solve(str,ch,n,index,i+1);
}

int main() {
   string str="absefg";
   char ch='d';
    int n=str.length();
    int index=-1;
    int i=0;

   cout<<solve(str,ch,n,index,i);
    return 0;
}