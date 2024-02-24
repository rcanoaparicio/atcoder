#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
  int N, Q;
  char c, d;
  string S;
  vector< vector<int> > m('z' - 'a' + 1);

  cin >> N >> S >> Q;
  for (int j = 0; j < N; j++) {
    m[S[j] - 'a'].push_back(j);
  }
  for (int i = 0; i < Q; i++) {
    cin >> c >> d;
    if (c == d || m[c - 'a'].size() == 0) continue;
    m[d - 'a'].insert(m[d - 'a'].end(), m[c - 'a'].begin(), m[c - 'a'].end());
    m[c - 'a'].clear();
  }
  for (int i = 0; i < 'z' - 'a' + 1; i++) {
    if (m[i].size() == 0) continue;
    char a = i + 'a';
    for (int j = 0; j < m[i].size(); j++) {
      if (S[m[i][j]] != a) S[m[i][j]] = a;
    }
  }
  cout << S << endl;
}

