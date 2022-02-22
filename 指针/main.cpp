#include <iostream>
using namespace std;
const int N = 1e6 + 5;
int n, m, num;
int a[N];

int find(int x)
{
    int l=0, r=n;

    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if ( a[mid] >= x ) r = mid;
        else l = mid + 1;
    }

    if ( a[l] == x ) return l;
    else return -1;
}

int main()
{
    cin >> n >> m;

    for ( int i = 0; i < n; i ++ )
    {
        cin >> a[i];
    }

    for ( int i = 0; i < m; i ++ )
    {
        cin >> num;
        int ans = find(num);
        cout << ans << " ";
    }
    return 0;
}