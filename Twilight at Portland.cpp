#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int arr[n+1][n+1];

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j] + arr[i][j + 1] + arr[i + 1][j] + arr[i + 1][j + 1] < 2)
            {
                cout<<"U"<<endl;
            }
            else
            {
                cout<<"S"<<endl;
            }
        }
        cout<<endl;
    }
}
