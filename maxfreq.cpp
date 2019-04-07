#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[100],b[100],j,c=0,n;
    vector<pair<int,int> > v;
    cin >> n;
    for(i=0;i<n;i++)
        cin >> a[i];

    for(i=0;i<n;i++)
    {   c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
               c++;
        }
        b[i]=c;
    }
    for(i=0;i<n;i++)
        v.push_back(make_pair(b[i],a[i]));

    sort(v.begin(),v.end());

    cout << v[n-1].second;

}

