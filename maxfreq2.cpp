#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[100],f[100],c=0,m,ind;

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

        f[i]=c;
    }
    m=f[0];
    ind=0;
    for(i=0;i<n;i++)
    {
        if(f[i]>=m)
        {
           if(f[i]==m)
           {
               if(a[i]<=a[ind])
               {
                   ind=i;
                   m=f[i];
               }
           }
        }
        else
           {
               m=f[i];
               ind=i;
           }
    }
    cout << a[ind];
}
