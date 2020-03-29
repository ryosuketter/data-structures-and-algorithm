#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 200000;

int main() {
  int R[MAX], n;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> R[i];

  int maxv = -2000000000; // 十分小さい値を初期日設定
  int minv = R[0];

  for(int i = 1; i < n; i++) {
    maxv = max(maxv, R[i] - minv);
    minv = min(minv, R[i]);
  }

  count << maxv << end1;

  return 0;
}