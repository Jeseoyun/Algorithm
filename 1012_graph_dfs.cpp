/*
 * organicCabbage.cpp
 * 백준 1012_유기농 배추
 *
 *  Created on: 2019. 12. 28.
 *      Author: 제서윤
 */


#include <iostream>
#define MAX 51
using namespace std;

bool field[MAX][MAX]={};
int count[MAX*MAX]={};

void dfs(int y, int x, int m, int n);

int main(){
	int T;	//testcase 개수
	cin >> T;

	for(int loop=0; loop<T; loop++){
		int m, n, worm;
		cin >> m >> n >> worm;

		int x, y;	//배추의 좌표
		for(int i=0; i<worm; i++){
			cin >> x >> y;
			field[y][x] = true;
		}

		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++){
				if(field[i][j]){
					dfs(i, j, m, n);
					count[loop]++;
				}
			}
	}

	for(int i=0; i<T; i++)
		cout << count[i] << endl;

	return 0;
}

void dfs(int y, int x, int m, int n){
	field[y][x] = false;
	if(y>=1)
		if(field[y-1][x])
			dfs(y-1, x, m, n);
	if(x>=1)
		if(field[y][x-1])
			dfs(y, x-1, m, n);
	if(y<n)
		if(field[y+1][x])
			dfs(y+1, x, m, n);
	if(x<m)
		if(field[y][x+1])
			dfs(y, x+1, m, n);
}
