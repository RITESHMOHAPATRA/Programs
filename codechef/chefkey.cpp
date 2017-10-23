#include <iostream>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,c;
		cin >> n >> m >> c;
		vector<int> vec;
		for(int i = 1;i <= c;i++){
			if(c % i == 0){
				vec.push_back(i);
			}
		}
		int count = 0;
		for(int i:vec){
			if(i <= n and c/i <= m){
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}