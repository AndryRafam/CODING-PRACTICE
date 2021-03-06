/* 3 SUM problem
 * 
 * Complexity: O(N²) if the array is already sorted
 *             O(N²+NlogN) if the array is not sorted (we must sort the array first)*/
 
// In this example, the array is already sorted (O(N²)) complexity
 
#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	static void three_sum(vector<int> &arr, int x){
		int n = arr.size();
		for(auto i = 0; i < n; i++){
			int l = i+1;
			int r = n-1;
			while(l < r){
				if(arr[i]+arr[l]+arr[r]==x){
					cout << arr[i] << " " << arr[l] << " " << arr[r];
					exit(0);
				}
				else if(arr[i]+arr[l]+arr[r] < x)
					l++;
				else
					r--;
			}
		}
		cout << "NO TRIPLETS";
	}
};

int main(){
	ios_base::sync_with_stdio(0);
	cout.tie(0);
	vector<int> test = {10,20,35,50,78,80};
	int target = 148;
	Solution::three_sum(test,target); // 20 50 78
}
