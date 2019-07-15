
    #include <bits/stdc++.h>
     
    #include <vector>
     
    using namespace std;
     
    int main()
    {
        int tc, kases = 0;
        cin >> tc;
        while(tc--)
        {
            int m, n;
            cin >> m >> n;
            vector <int> ara;
            //load ara
            for(int i=0; i < m; i++)
            {
                int tmp;
                cin >> tmp;
                ara.push_back(tmp);
            }
            //operation
            while(n--)
            {
                char c;
                cin >> c;
                if(c=='S')
                {
                    int t;
                    cin >> t;
                    for(int i=0; i < m; i++)
                    {
                        ara[i] += t;
                    }
                }
                else if(c=='M')
                {
                    int t;
                    cin >> t;
                    for(int i=0; i < m; i++)
                    {
                        ara[i] *= t;
                    }
     
                }
                else if(c=='D')
                {
                    int t;
                    cin >> t;
                    for(int i=0; i < m; i++)
                    {
                        ara[i] /= t;
                    }
                }
                else if(c=='R')
                {
                    for(int i=0; i < m/2; i++)
                    {
                        swap(ara[i],ara[m-i-1]);
                    }
                }
                else if(c=='P')
                {
                    int x, y;
                    cin >> x >> y;
                    swap(ara[x],ara[y]);
                }
            }
            printf("Case %d:\n",++kases);
            for(int i=0; i<m; i++)
            {
                printf("%d",ara[i]);
                if(i+1==m) break;
                else printf(" ");
            }
            printf("\n");
        }
        return 0;
    }
     

