/*
 * LIS.cpp
 * 백준 11053번_가장 긴 증가하는 부분수열
 *  (Longest Increasing Subsequence : LIS)
 *  Created on: 2019. 12. 29.
 *      Author: 제서윤
 */


#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[n];
	for(int i=0; i<n; i++)
		cin >> arr[n];

	int count[n]={};
	count[0] = 1;
	//cout<<count[0] << " ";
	for(int i=1; i<n; i++){
		if(arr[i-1]<arr[i])
			count[i] = count[i-1]+1;
		else
			count[i] = count[i-2]+1;
	//	cout << count[i] <<" ";
	}
	cout << endl;
	cout << count[n-1];
	return 0;
}

