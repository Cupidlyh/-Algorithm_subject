#include <iostream>
#include<algorithm>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
#define ll long long
int n = 1e9 + 7;
ll fac[200005];

int main()
{
    int T;
    scanf("%d",&T);
    fac[0] = 1;
    for(int i = 1; i < 200005; i++)
        fac[i] = fac[i - 1] * i % n;
    while(T--)
    {
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1,&x2,&y1,&y2);

    }
    return 0;
}
