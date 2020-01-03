/*
 * mergeSort.cpp
 * 백준 2751_수 정렬하기(O(nlogn)알고리즘_병합정렬)
 *
 *  Created on: 2020. 1. 3.
 *      Author: 제서윤
 */


#include <iostream>
using namespace std;

void mergeSort(int a[], int first, int last);
void merge(int a[], int first, int last, int mid);

int main(){
	int n;
	cin >> n;

	int num[n];
	for(int i=0; i<n; i++)
		cin >> num[i];

	mergeSort(num, 0, n-1);

	for(int i=0; i<n; i++)
		cout << num[i] << "\n";

	return 0;
}

void mergeSort(int a[], int first, int last){
	if(first<last){
		int mid = (first+last)/2;
		mergeSort(a, first, mid);
		mergeSort(a, mid+1, last);
		merge(a, first, last, mid);
	}
}

void merge(int a[], int first, int last, int mid){
	int i=first, j=mid+1, k=0;
	int sorted[last+1-first];
	while(i<=mid && j<=last){
		if(a[i]<=a[j]){
			sorted[k] = a[i];
			i++;
		}
		else{
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	if(i<=mid){
		for(;i<=mid; i++){
			sorted[k] = a[i];
			k++;
		}
	}
	else if(j<=last){
		for(; j<=last; j++){
			sorted[k] = a[j];
			k++;
		}
	}
	for(int s=first; s<=last; s++){
		a[s] = sorted[s-first];
	}
}
