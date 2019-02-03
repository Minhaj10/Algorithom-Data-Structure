#include <bits/stdc++.h>
using namespace std;


void printLCS( char *s1, char *s2, int m, int n )
{
    int L[m+1][n+1];


    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;
            else if (s1[i-1] == s2[j-1])
                L[i][j] = L[i-1][j-1] + 1;
            else
                L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }


    int index = L[m][n];

    char LCS[index+1];
    LCS[index] = '\0';


    int i = m, j = n;
    while (i > 0 && j > 0)
    {

        if (s1[i-1] == s2[j-1])
        {
            LCS[index-1] = s1[i-1];
            i--;
            j--;
            index--;
        }

        else if (L[i-1][j] > L[i][j-1])
            i--;
        else
            j--;
    }


    cout << "LCS of " << s1 << " and " << s2 << " is "<<endl << LCS<<endl;
}


int main()
{
    char s1[10000];
    char s2[10000] ;
    cin>>s1>>s2;
    printLCS(s1, s2, strlen(s1), strlen(s2));
    return 0;
}
