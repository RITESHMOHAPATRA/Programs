//To find longest region of 1's in a 2D matrix
//Subhasarthak Samantaray
//IIIT BBSR

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;
#define maxm 100
int arr[maxm][maxm];

int matrix_search(int i,int j,int rows,int columns)
{
   int count=0;
   //checking the boundary conditions
   if(i < 0 || j < 0 || i >= rows || j >= columns || arr[i][j] ==0)
        return 0;
        
   arr[i][j] = 0;
   
   for(int k=-1;k<=1;k++)
   {
        for(int l=-1;l<=1;l++)
        {
            if(k==0 && l==0)
                continue;
            count += matrix_search(i+k,j+l,rows,columns);
        }
   }
   
    return (1+count);
}

int main()
{
    cout << "\n Enter the number of rows & columns of the matrix:";
    int rows,columns;
    cin >> rows >> columns;
    cout << "\n Enter the array elements:";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin >> arr[i][j];
        }
    }
    
    //Look for the first 1 in the matrix;
    int res=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(arr[i][j] == 1)
            {
                int check = matrix_search(i,j,rows,columns);
                res = max(res,check);
            }
        }
    }  
    
    cout << "Result=" << res << endl;
    return 0;  
} 
