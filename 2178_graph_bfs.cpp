/*
 * miro.cpp
 * 백준 2178_미로 탐색
 *
 *  Created on: 2019. 12. 30.
 *      Author: 제서윤
 */


#include <iostream>
#include <queue>
#include <utility>
#define MAX 101
using namespace std;

void bfs(char miro[][MAX], bool visited[][MAX], int n, int m, int length[][MAX]);

const int move_a[4] = {-1, 1, 0, 0};
const int move_b[4] = {0, 0, -1, 1};

int main(){
	int n, m;
	cin >> n >> m;

	char miro[n][MAX];
	bool visited[n][MAX];
	int length[n][MAX];

	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++){
			cin >> miro[i][j];
			visited[i][j] = false;
			length[i][j] = 0;
		}

	bfs(miro, visited, n, m, length);
	cout << length[n-1][m-1];
	return 0;
}

void bfs(char miro[][MAX], bool visited[][MAX], int n, int m, int length[][MAX]){
	visited[0][0] = true;
	length[0][0]++;
	queue<pair<int, int>> q;
	pair<int, int> p = {0, 0};
	q.push(p);
	while(!q.empty()){
		pair<int, int> temp = q.front();
		q.pop();
		for(int k=0; k<4; k++){
			int a = temp.first + move_a[k];
			int b = temp.second + move_b[k];
			if(a>=0 && b>=0 && a<n && b<m && !visited[a][b] && miro[a][b]=='1'){
				p = {a, b};
				q.push(p);
				visited[a][b] = true;
				length[a][b] = length[temp.first][temp.second] + 1;
				//cout << "length[" << a << "][" << b << "] : " << length[a][b] << endl;
				if(p.first==n-1 && p.second==m-1){
					break;
				}
			}
		}
	}
}
