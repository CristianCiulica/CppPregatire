#include<iostream>
using namespace std;
int n,i,j,z,M[100][100];
int s1,s2,s3,s4;
int main() {
    cin >>n>>z;
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            cin>>M[i][j];
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (i<j && i+j<=n-2) {
                s1+=M[i][j];
            }
            if (i<j && i+j>=n) {
                s2+=M[i][j];
            }
            if (i>j && i+j>=n) {
                s3+=M[i][j];
            }
            if (i>j && i+j<=n-2) {
                s4+=M[i][j];
            }
        }
    }
    if (z==1)
        cout<<s1;
    else if (z==2)
        cout<<s2;
    else if (z==3)
        cout<<s3;
    else if (z==4)
        cout<<s4;

    return 0;
}