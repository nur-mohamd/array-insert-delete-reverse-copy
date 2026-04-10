#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int b[m];
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int ans[n + m];

    // copy a[]
    for(int i = 0; i < n; i++)
    {
        ans[i] = a[i];
    }

    // copy b[]
    int i = n;
    for(int j = 0; j < m; j++)
    {
        ans[i] = b[j];
        i++;
    }

    // print result
    for(int i = 0; i < n + m; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}