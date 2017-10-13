/* find the length of the subsequence whose elements are in strictly increasing order */
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &vec,int target){
  int n = vec.size();
  int lb = 0,ub = n;

  while(lb != ub){
    int mid = (lb + ub)/2;
    if(vec[mid] <= target)
      lb = mid + 1;
    else
      ub = mid;
  }

  return ub;
}

int main(){
  int n;
  cout << "\n Enter the size of the array:";
  cin >> n;
  int arr[n];
  cout << "\n Enter the array elements:";

  for(int i = 0;i < n;i++){
    cin >> arr[i];
  }

  vector<int> lis;

  lis.push_back(arr[0]);

  for(int i = 1;i < n;i++){
    if(arr[i] == lis.back())
      continue;
    if(arr[i] > lis.back()){
      lis.push_back(arr[i]);
    }
    else{
      int pos = binarySearch(lis,arr[i]);
      lis.erase(lis.begin()+pos);
      lis.insert(lis.begin()+pos,arr[i]);
    }
  }

  // for(int i = 0; i < lis.size();i++)
  //   cout << lis[i] << "\t";
  cout << "Length of longest increasing subsequence:" << lis.size() << endl;
}
