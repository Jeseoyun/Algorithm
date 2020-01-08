/*
 * blackjack.cpp
 * 백준 2798_블랙잭
 *
 *  Created on: 2020. 1. 8.
 *      Author: 제서윤
 */


#include <iostream>
using namespace std;

int findMax(int a[], int n);

int main(){
	int n, m;
	cin >> n >> m;

	int cards[n];
	for(int i=0; i<n; i++)
		cin >> cards[i];

	int sum[n] = {};
	int sum_index = 0;
	for(int i=0; i<n; i++)
		for(int j=i; j<n; j++)
			for(int k=j; k<n; k++)
				if(cards[i]+cards[j]+cards[k]>m){
					cout << "m 초과! - " << cards[i]+cards[j]+cards[k] << endl;
					break;
				}
				else{
					sum[sum_index] = cards[i]+cards[j]+cards[k];
					cout << "sum[" << sum_index << "] : " <<   cards[i]+cards[j]+cards[k] << endl;
					sum_index++;
				}
	cout << findMax(sum, sum_index+1);
	return 0;
}

int findMax(int a[], int n){
	int maxi = a[0];
	for(int i=1; i<n; i++)
		if(a[i-1]<a[i])
			maxi = a[i];
	return maxi;
}
