#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
// efficient approach but three traversal
int intersection(int a[], int b[], int n, int m)
{
    // store elements into set sa
    unordered_set<int> sa(a, a + n);
    // store elements into set sb
    unordered_set<int> sb(b, b + m);
    // initialize result as 0
    int res = 0;
    // traverse first set...
    for (auto it = sa.begin(); it != sa.end(); it++)
    {
        // check that element is found in set b,
        if (sb.find(*it) != sb.end())
        {
            res++;
        }
    }
    return res;
}

// most effiecient appraoch
int intersect(int a[], int b[], int n, int m)
{
    unordered_set<int> sa(a, a + n);
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        if (sa.find(b[i]) != sa.end())
        {
            res++;
            sa.erase(b[i]);
        }
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout << intersect(a, b, n, m);    
    cout << intersection(a, b, n, m);    

    return 0;
}