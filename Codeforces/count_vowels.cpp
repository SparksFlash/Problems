#include <bits/stdc++.h>
using namespace std;

const int N = 205;
char s[N];
int len;

bool is_vowel(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
        return true;
    else
        return false;
}

int count_Vowels(int i)
{
    if (i > len - 1)
    {
        return 0;
    }

    int count = (int)is_vowel(s[i]);
    count += count_Vowels(i + 1);
    // cout << count << '\n;
    return count;
}

int main()
{
    cin.get(s, N);
    len = strlen(s);
    cout << count_Vowels(0) << '\n';
}
