#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    int count=0;
    int temp=num;
    while(temp>0){
        //int digit=temp%10;
        temp=temp/10;
        count++;
    }
    int temp1=num;
    int sum=0;
    while(temp1>0){
        int digit=temp1%10;
        sum += pow(digit,count);
        temp1=temp1/10;
    }
    return sum == num;
}
