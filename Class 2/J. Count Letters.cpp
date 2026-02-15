#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 9;
char s[N];
int main() {
  cin >> s;
  int len = strlen(s);
  int frequency[26];
 
  for (int i = 0; i < 26; i++) {
    frequency[i] = 0;
  }


  for (int i = 0; i < len; i++) {
    int character_rank = s[i] - 'a'; // rank of 'a' = 0, rank of 'b' = 1, ...
    frequency[character_rank]++;
  }

  for (char ch = 'a'; ch <= 'z'; ch++) {
    int character_rank = ch - 'a';
    if (frequency[character_rank] > 0) {
      cout << ch << " : " << frequency[character_rank] << '\n';
    }
  }
}
