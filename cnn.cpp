#include <iostream>
using namespace std;
int main()
{
 int A[][1000],i,j,m,n,sum;
 cin >> m >> n;
 for( i=0; i<m; i++ )
 { for ( j=0; j<n; j++ )
   cin >> A[i][j];
 } 
 sum = 0;
        for (j = 0; j < n; ++j) 
        {
            for (i = 0; i < m; ++i)
            {
                sum = sum + A[i][j];
            }
 
            cout<<sum<<" ";
            sum = 0;
 
        }
} 




