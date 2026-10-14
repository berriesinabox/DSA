#include <bits/stdc++.h>
using namespace std;

int countevenodd(int n,vector<int> arr){
    int od=0,eve=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            eve++;
        }
        else{
            od++;
        }
    }
    int compute=od - eve;
    return compute;
}

int main() {
	int n;
	cin >> n;
	
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	    cin >> arr[i];
	}
	int res = countevenodd(n,arr);
	cout << res;

}
