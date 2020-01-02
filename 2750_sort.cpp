/*
 * selectionSort.cpp
 * 백준 2750_수 정렬하기 (O(n^2)알고리즘_삽입정렬, 버블정렬, 선택정렬)
 *
 *  Created on: 2020. 1. 2.
 *      Author: 제서윤
 */


#include <iostream>
using namespace std;

void selectionSort(int a[], int n){
	for(int i=n-1; i>=0; i--){
		int index=0;
		for(int j=0; j<=i; j++)
			if(a[index]<a[j])
				index = j;
		int temp = a[index];
		a[index] = a[i];
		a[i] = temp;
	}
}

void bubbleSort(int a[], int n){
	for(int i=n-1; i>0; i--){
		bool sorted = true;
		for(int j=0; j<i; j++)
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				sorted = false;
			}
		if(sorted)
			break;
	}

}

void insertionSort(int a[], int n){
	int j;
	for(int i=0; i<n; i++){
		int temp = a[i];
		for(j=i-1; j>=0; j--){
			if(a[j]>temp)
				a[j+1] = a[j];
			else
				break;
		}
		a[j+1] = temp;
	}
}

int main(){
	int n;
	cin >> n;

	int num[n];
	for(int i=0; i<n; i++)
		cin >> num[i];

	selectionSort(num, n);
	//bubbleSort(num, n);
	//insertionSort(num, n);

	for(int i=0; i<n; i++)
		cout << num[i] << endl;

	return 0;
}

