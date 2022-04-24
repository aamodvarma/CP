#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;


int n = 4;

vector<int> k;
void funct(){
  if (int(k.size()) == n){
    for(int j =0; j<int(k.size());j++){
    cout << k[j];
    }
    cout << "\n";
  }else{
  for(int i = 0; i < n; i++){
    if (not(count(k.begin(), k.end(), (i+1)))){
      k.push_back(i+1);
      funct();
      k.pop_back();
      }
    else{
      continue;
      }
    }
  }
}
int main(){
  funct();

}

