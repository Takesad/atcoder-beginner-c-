#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector <int> vec(N);
  int sum = 0;

  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
    sum += vec.at(i);
  }

  int mean = sum / N;

  for(int j = 0; j < N; j++){
    if(vec.at(j) >= mean){
      cout << vec.at(j) - mean << endl;
    }

    if(vec.at(j) < mean){
      cout << mean - vec.at(j) << endl;
    }
  }
}
