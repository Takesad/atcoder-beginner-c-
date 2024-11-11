#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A;
  cin >> N >> A;

  for(int i = 1; i <= N; i++){
    string op;
    int b;
    cin >> op >> b;

    if(op == "+"){
      cout << i << ":";
      A += b;
      cout << A << endl;
    }

    if(op == "-"){
      cout << i << ":";
      A -= b;
      cout << A << endl;
    }    

    if (op == "*"){
      cout << i << ":";      
      A *= b;
      cout << A << endl;      
    }

    if (op == "/"){
      if (b == 0){
	cout << "error" << endl;
	break;
      }
      else{
	cout << i << ":";	
	A /= b;
	cout << A << endl;
      }
    }
  }
}
