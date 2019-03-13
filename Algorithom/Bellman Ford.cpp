#include<bits/stdc++.h>
#define oo 1<<30
#define sizee 50001
using namespace std;

vector < pair<int, int> > V[sizee];

queue <int> QUEUE;

int n,m,dist[ sizee],countt[ sizee ];

//void read();
//void solve();
//int BellmanFord();

void read()
{
    scanf("%d %d", &n, &m);

    int x,y,c;
    for(int i = 1; i <= m; i++)
    {
        scanf("%d %d %d", &x, &y, &c);
        V[ x ].push_back( make_pair( y, c ) );
    }
};
int BellmanFord()
{
       for(int i = 2; i <= n; i++)
       dist[ i ] = oo;
       dist[ 1 ] = 0;
        QUEUE.push( 1 );
    while( !QUEUE.empty() )
    {
        int x = QUEUE.front();
        if( ++countt[ x ] > n - 1 )
            return 0;
        QUEUE.pop();
        if( dist[ x ] != oo )
        {
            for(int i = 0; i < V[ x ].size(); i++)
            {
                int y = V[ x ][ i ].first,
                    c = V[ x ][ i ].second;
                if( dist[ y ] > dist[ x ] + c )
                {
                    dist[ y ] = dist[ x ] + c;
                    QUEUE.push( y );
                }
            }
        }
    }
    return 1;
};
void solve()
{
    if( BellmanFord() )
    {
        for(int i = 2; i <= n; i++)
        {
            printf("%d ", dist[ i ]);
        }
    }
    else
    {
        printf("%s","Ciclu negativ!");
    }
   // fclose( stdout );
};



int main()
{
    read();
    solve();
    return (0);
};



