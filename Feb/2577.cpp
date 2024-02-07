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
    int a, b, c;
    cin >> a >> b >> c;
    int result = a * b * c;
    string answer = to_string(result);
    int alpha[10] = {0,};
    for(int i=0; i<answer.size(); i++)
    {
        alpha[answer[i] - '0']++;
    }
    for(int i=0; i<10; i++)
    {
        cout << alpha[i] << "\n";
    }
}