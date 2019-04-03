///Number of ways of making money using coins

#include<bits/stdc++.h>
using namespace std;
int findcoinNumber(int coins[],  int numOfCoins,  int money)
{

    int values[money+1];
    memset(values,  0,  sizeof(values));
    values[0]  = 1;
    int  i=0, j = 0;
    for(  i=0;  i<numOfCoins;  ++i)
    {
        for(j=coins[i]; j<=money;  ++j)
        {
            values[j] += values[j-coins[i]];

        }
    }

    return  values[money];


}

int main()
{
    int coins[] = {1,2};
    int money = 6;
    int numOfCoins =2;
    printf("Money %d can be made in %d ways.\n",money,  findcoinNumber(coins,  numOfCoins,  money));

    return  0;
}
