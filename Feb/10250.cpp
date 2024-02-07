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

    int t, h, w, n;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> h >> w >> n;
        string floor = to_string(n%h);
        string ho = to_string(n/h+1);
        if(ho.size() < 2) ho = "0"+ho;
        cout << floor << ho << "\n";
    }
}