#include <iostream>

using namespace std;

int main() {
  string o = "o";
  string repeat;
  int n;
  cin >> n;

  if(n>=1){
    for (int i = 0; i < n; i++){
      repeat += o;
    }
    cout <<endl<<"W" + repeat + "w!" <<endl;
    return 0;
  }
  else{
      //// invalid number
  }
}