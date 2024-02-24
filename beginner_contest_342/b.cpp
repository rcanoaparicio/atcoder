#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;





int main() {
  int N, P, Q, A, B;
  unordered_map<int, int> m;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> P;
    m[P] = i;
  }
  cin >> Q;
  for (int i = 0; i < Q; i++) {
    cin >> A >> B;
    cout << (m[A] < m[B] ? A : B) << endl;
  }
}
