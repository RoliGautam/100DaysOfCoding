#include <bits/stdc++.h>
using namespace std;
int UnionOfTwoArr(int a[], int n, int b[], int m)
{
    // create an unordered set and store the element of array a
    unordered_set<int> s(a, a + n);
    // traverset the second array and insert the elements of second array into set
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    // this loop will print the union array
    for (auto x : s)
    {
        cout << x << " ";
    }
    cout << endl;
    // as unordered set take only unique values, so size will be the count of union element
    return s.size();
}
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int b[m];
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout << UnionOfTwoArr(a, n, b, m);
    return 0;
}