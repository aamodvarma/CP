#include <bits/stdc++.h>
using namespace std;
int n = 4;
void fun(string k){
  if(int(k.length()) == n){
    cout << k << endl; 
  }
  else{
    fun(k+'0');
    fun(k+'1');
  }
}
int main(){
  fun("");
}


