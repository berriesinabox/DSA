Sample Input
5
Your Output
A
BB
CCC
DDDD
EEEEE


#include<iostream>
using namespace std;

void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char Q=64+i;
            cout << Q;
        }
        cout << endl;
    }
}

int main(){
	int n;
	cin >> n;
	print3(n);
  
}
