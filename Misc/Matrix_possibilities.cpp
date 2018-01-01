#include <iostream>
#include <cstdlib>
using namespace std;


int matrixParenthisize(int num)
{
    int store[1000];
    store[1] = 1;
    store[2] = 1;
    for(int i=3;i<=num;i++)
    {
        int x = 0;
        for(int k = 1;k<i;k++)
        {
            x = x + store[k]*store[i-k];
        }
        store[i] = x;
    }
    return store[num];
}

int main()
{
    cout << "\n Enter the number of matrices:";
    int n;
    cin >> n;
    cout <<"Number of ways:" << matrixParenthisize(n) << endl;
}
