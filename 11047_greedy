/*
 * coin.cpp
 * 백준 11047번_동전 0
 *
 *  Created on: 2019. 12. 23.
 *      Author: 제서윤
 */

#include <iostream>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;

	int coin[n];  //입력받는 동전 금액
	for(int i=0; i<n; i++)
		 cin >> coin[i];

	int count = 0;

	int index = n-1;
	while(k!=0 && index >= 0){
		if(k >= coin[index]){
			//cout << "k : " << k << ", coin[" << index << "] : " << coin[index] << endl;
			k = k-coin[index];
			count++;
			//cout << "count : " << count << endl;
		}
		else
			index--;
	}
	cout << count;
	return 0;
}
