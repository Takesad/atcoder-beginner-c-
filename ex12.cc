#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;

  // S.size()で長さ取得
  // S.at(i)のi=偶数は四則演算
  // S.at(i)のi=奇数は自然数

  int a = 0;
  int b = 0;
  
  for (int i = 0; i < S.size(); i++){
    if (S.at(i) == '+'){
      a++;
    }
    else if (S.at(i) == '-'){
      b++;
    }
  }
  cout << a - b + 1 << endl;  
}
