 #include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int dist[1000], visit[1000];

vector <int> graph[1000];

void bfs(int src)
{
    visit[src] = 1;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        for(int i=0;i<graph[temp].size();i++)
        {
            int node = graph[temp][i];
            if(visit[node] == 0)
            {
                visit[node]=1;
                dist[node]=dist[temp]+1;
                q.push(node);
            }
        }
    }
}

int main()
{

    int n, e;
    printf("How many nodes and edges?\n");
    scanf("%d %d", &n, &e);
    for(int i=0;i<e;i++)
    {
        int from, to;
        scanf("%d %d", &from, &to);
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    printf("Enter source and target\n");
    int src, tar;
    scanf("%d %d", &src, &tar);
    bfs(src);
    printf("%d\n", dist[tar]);
}

