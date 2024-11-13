#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
 
  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)

  vector<vector<char>> data(N, vector<char>(N));

  // A.at(i):勝者 o
  // B.at(i):敗者 x

  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      data.at(i).at(j) = '-';

      for(int k = 0; k < M; k++){
	data.at(A.at(k)-1).at(B.at(k)-1) = 'o';
	data.at(B.at(k)-1).at(A.at(k)-1) = 'x';
      }

      cout << data.at(i).at(j);
      
      if(j == N-1){
	cout << endl;
      }
      else{
	cout << " ";
      }
    }
  }
}
