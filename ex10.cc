#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B;
  cin >> A >> B;

  int i, j = 0;

  cout << "A:";

  // Aの点数
  while (i < A){
    cout << "]";
    i++;
  }

  cout << endl;

  cout << "B:";
  
  // Bの点数
  while (j < B){
    cout << "]";
    j++;
  }

  cout << endl;
}
