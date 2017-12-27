/* A m*n matrix is given. If an element is 0 then put 0 in corresponding row and column. */
#include <iostream>
using namespace std;

int main() {
  int m,n;
  cout << "\nEnter the dimension of the matrix:";
  cin >> m >> n;
  int arr[m][n];
  cout << "\nEnter the matrix elements:";
  for(int i = 0; i < m;i++){
    for(int j = 0;j < n;j++){
      cin >> arr[i][j];
    }
  }

  int row_pos,col_pos;
  bool status = false;

  for(int i = 0; i < m;i++){
    for(int j = 0; j < n;j++){
      if(arr[i][j] == 0){
        row_pos = i;
        col_pos = j;
        status = true;
      }
      if(status)
        break;
    }
    if(status)
      break;
  }

  for(int i = 0,j = 0; i < n,j < m;i++,j++){
    arr[row_pos][i] = 0;
    arr[j][col_pos] = 0;
  }

  cout << "\nCurrent matrix:" << endl;

  for(int i = 0; i < m;i++){
    for(int j = 0;j < n;j++){
      cout << arr[i][j] << "\t";
    }
    cout << "\n";
  }

  return 0;
}
