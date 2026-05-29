#include<iostream>
using namespace std;

void print(int n){
    while(n>0){
        int last_digit=n%10;
        n=n/10;
        cout << last_digit <<" ";
        cout << endl;
    }
    //cout << endl;

}

int main(){
	int n;
	cin >> n;
	print(n);
  
}

