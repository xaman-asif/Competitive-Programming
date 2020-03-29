#include <bits/stdc++.h>
using namespace std;

#define MAX 200

vector <int> adj[MAX];
int visited[MAX];
char part[MAX];

int bfs(int s, int n)
{
    queue <int> q;
    q.push(s);
    visited[s] = 1;
    part[s] = 'W';
    while(!q.empty())
    {
        int u = q.front();  //u=10
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            if(part[u]==part[adj[u][i]])
                return 0;
            if(visited[adj[u][i]]==0)
            {
                int v = adj[u][i];
                visited[v] = 1;
                if(part[u]=='W')
                    part[v] = 'B';
                else
                    part[v] = 'W';
                q.push(v);
            }
        }
    }
    return 1;
}

int main()
{
    int k;
    while(scanf("%d", &k) && k)
    {
        int x, y, e;  scanf("%d", &e);
        for(int i=1; i<=e; i++)
        {
            scanf("%d %d", &x, &y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        (bfs(x,e))?printf("BICOLORABLE.\n"):printf("NOT BICOLORABLE.\n");
        for(int i=0; i<MAX; ++i){
            adj[i].clear();
        }
        memset(visited, 0, sizeof(visited));
        memset(part, 0, sizeof(part));
    }
    return 0;
}
