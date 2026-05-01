#include <iostream>
using namespace std;
int n,m,M[101][101],s,i,j;

int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            cin>>M[i][j];
    for (i=1;i<=n;i++) {
        s=0;
        for (j=1;j<=m;j++)
            s+=M[i][j];
        cout<<s<<' ';
    }

    return 0;
}
