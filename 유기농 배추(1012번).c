
# 유기농 배추(1012번)
#include<stdio.h>
int beachu[51][51] = { 0 };
int row, colum, num;

void dfs(x, y)
{
    beachu[x][y] = 2;
    if(x - 1 != -1 && beachu[x - 1][y] == 1)
        dfs(x - 1, y);
    if(y - 1 != -1 && beachu[x][y - 1] == 1)
        dfs(x, y - 1);
    if(x + 1 != row && beachu[x + 1][y] == 1)
        dfs(x + 1, y);
    if(y + 1 != colum && beachu[x][y + 1] == 1)
        dfs(x, y + 1);
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    int i, j, k;
    int x, y;
    int warm[100] = { 0 };
    
    for(i = 1; i <= n; i++)
    {
        scanf("%d%d%d", &row, &colum, &num);
        for(j = 1; j <= num; j++)
        {
            scanf("%d%d", &x, &y);
            beachu[x][y] = 1;
        }
        
        for(j = 0; j < row; j++)
        {
            for(k = 0; k < colum; k++)
            {
                if(beachu[j][k] == 1)
                {
                    dfs(j, k);
                    warm[i]++;
                }
            }
        }
    }
    
    for(i = 1; i <= n; i++)
        printf("%d\n", warm[i]);
    return 0;
}
