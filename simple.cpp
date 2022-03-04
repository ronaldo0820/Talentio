#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main() {                             
/* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
int t;
cin>>t;
while(t--){
  int n,m;
  cin>>n>>m;
  if(n==m){
    cout<<"YES"<<endl;
  }
  else if(n==2 && m==4){
    cout<<"YES"<<endl;
  }
  else if(n==4 && m==2)
  cout<<"YES"<<endl;

else{
  cout<<"NO"<<endl;
  }
}
return 0;
}
