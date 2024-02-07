#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <deque>
#include <list>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int alpha[26]={0,};
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a')
        {
            alpha[s[i] - 'a']++;
        }
        else
        {
            alpha[s[i] - 'A']++;
        }
    }
    int max = 0;
    int maxIndex = 0;
    bool flag = false;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] > max)
        {
            max = alpha[i];
            maxIndex = i;
            flag = false;
        }
        else if(alpha[i] == max)
        {
            flag = true;
        }
    }
    if(flag == true)
        cout << "?";
    else
        cout << (char)(maxIndex + 'A');
}