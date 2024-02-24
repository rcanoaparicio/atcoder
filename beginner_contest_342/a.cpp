#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;





int main() {
  string S;
  cin >> S;
  unordered_map<char, int> occ;
  for (auto c : S) {
    occ[c]++;
  }
  for (int i = 0; i < S.size(); i++) {
    if (occ[S[i]] == 1) {
      cout << i + 1 << endl;
      exit(0);
    }
  }
}
