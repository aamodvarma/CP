#include <bits/stdc++.h>

using namespace std;


vector<int> k;


int n = 4;

void fun(int i){

  if(i == n){
    for(int j = 0; j < int(k.size()); j++){
      cout << k[j];
    }
    cout << "\n";
  }

  else{

    k.push_back(i);
    fun(i+1);

    k.pop_back();
    fun(i+1);



  }


}

int main(){


  fun(1);

}


