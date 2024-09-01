#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
int i = 1;
void printName(int times);
void printLinearly(int times, int current = 1);
void printStair(int n);
void parametrisedRecursion(int N,int sum = 0);
int functionalRecursion(int N);
int factorial(int N);
void reverseArray(int l,int r,int *arr);
int main(){
    // printName(5);
    // printLinearly(5);
    // printStair(4);
    // string s;
    // getline(cin, s);
    // string result = 
    // convertTime(s);
    // parametrisedRecursion(3);
    int arr[5] = {1, 2, 3, 4, 5};
    reverseArray(0,4,arr);
    for(int i  = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    // cout << "This result is from functional recursion: " << factorial(5) << endl;
    return 0;
}

void printName(int times){
    if(times == 0) return;
    cout << "Abhishek" << endl;
    printName(times-1);
}

void printLinearly(int times, int current){
    if(current > times) return;
    cout << current << endl;
    printLinearly(times,current + 1);
}

void printStair(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int k = 0; k <= i; k++){
            cout << "#";
        }
        cout << endl;
    }
}

void parametrisedRecursion(int N,int sum){
    if( N < 1 ){
        cout << "The sum from 1 to "<< N << " is " << sum << endl;
        return;
    }
    parametrisedRecursion(N-1,sum+N);
}

int functionalRecursion(int N){
    if(N == 0) return 0;
    return N + functionalRecursion(N-1);
}

int factorial(int N){
    if(N == 0) return 1;
    return N*factorial(N-1);
}

void reverseArray(int l,int r,int *arr){
    if( l >= r) return;
    swap(arr[l],arr[r]);
    reverseArray(l+1,r-1,arr);
}