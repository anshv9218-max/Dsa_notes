/*
recursion->
 When the function calling itself until a specific condition is met

> segmentation fault -> stack overflow
 it is the condition in which functions repeatedly calling itself while waiting in memory
 so due to inavilability of return stack get full .
 
*/

#include<bits/stdc++.h>
using namespace std;

// void print(int n){
//     if(n==0){
//         cout<<0;
//         return;
//     }
//     cout<<n;
//     print(n-1);
// }

int sum(int n){
    if (n==0){
        return 0;
    }
    return sum(n-1)+n;
     
}


int main(){
    // print(6);
    cout<<sum(10);
    return 0;
}
