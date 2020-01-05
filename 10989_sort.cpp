/*
 * countingSort.cpp
 * 백준 10989번_수 정렬하기3(counting sort)_error_메모리초과
 *
 *  Created on: 2020. 1. 5.
 *      Author: 제서윤
 */


#include <iostream>
using namespace std;

void countingSort(int a[], int n){
	int maxi = 0;
	for(int i=0; i<n; i++)
		if(a[i]>maxi)
			maxi = a[i];

	int count[maxi] = {};
	for(int i=0; i<n; i++)
		count[a[i]-1]++;

	for(int j=0; j<maxi; j++)
		count[j] = count[j] + count[j-1];

	int sorted[maxi] = {};
	for(int i=n-1; i>=0; i--){
		sorted[count[a[i]-1]-1] = a[i];
		count[a[i]-1]--;
	}
	for(int j=0; j<n; j++)
		a[j] = sorted[j];
}

int main(){
	int n;
	cin >> n;

	int num[n];

	for(int i=0; i<n; i++)
		cin >> num[i];

	int count[n]={};
	for(int i=0; i<n; i++)
		count[num[i]-1]++;

	for(int i=0; i<n; i++){
		if(count[i] != 0)
			for(int j=0; j<count[i]; j++)
				cout << i+1 << "\n";
	}

	return 0;
}
