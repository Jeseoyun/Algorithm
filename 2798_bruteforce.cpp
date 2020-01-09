/*
 * blackjack.cpp
 * 백준 2798_블랙잭
 *
 *  Created on: 2020. 1. 8.
 *      Author: 제서윤
 */


#include <iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	int cards[n];
	for(int i=0; i<n; i++)
		cin >> cards[i];

	int maxi = 0;
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			for(int k=j+1; k<n; k++)
				if(cards[i]+cards[j]+cards[k] > m)
					continue;
				else{
					if(maxi < cards[i]+cards[j]+cards[k])
						maxi = cards[i]+cards[j]+cards[k];
				}
	cout << maxi;
	return 0;
}
