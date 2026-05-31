#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i= 0; i< n; i++) {
        cin >> arr[i];
    }
    int l =arr[0];
    int sl =-1;
    for(int i =1; i <n; i++) {
        if(arr[i] > l) {
            sl = l;
            l = arr[i];
        }
        else if(arr[i] <l&&arr[i] > sl) {
            sl =arr[i];
        }
    }
    cout <<sl;
}


Sample Input
5
1 5 3 4 2
Your Output
4
