#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n;
  cout << "\n Enter the number of elements:";
  cin >> n;
  int arr[n];
  cout << "\n Enter the array elements:";
  for(int i=0;i<n;i++)
    cin >> arr[i];
  int sum = arr[0],largest_sum = arr[0];
  for(int i = 1;i<n;i++){
    sum = max(arr[i],sum + arr[i]);
    largest_sum = max(largest_sum,sum);
  }

  cout << "\n Largest possible sum:" <<largest_sum << endl;
  return 0;
}
