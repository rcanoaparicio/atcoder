#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


bool is_square(const int n) {
  if (n == 1) return true;
  for (int i = 1; i <= n; i++) {
    if (i * i == n) {
      return true;
    }
  }
  cout << n << " not square" << endl;
  return false;
}


int main() {
  int N, a, res = 0;
  vector<int> A;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> a;
    if (a == 0) res += N - 1;
    else A.push_back(a);
  }

  const unsigned int a_size = A.size();
  for (int i = 0; i < a_size - 1; i++) {
    for (int j = i + 1; j < a_size; j++) {
      auto l = min(A[i], A[j]);
      auto r = max(A[i], A[j]);
      if (r % l != 0) continue;
      auto rem = r / l;
      if (is_square(rem)) res++;
    }
  }
  cout << res << endl;
}
