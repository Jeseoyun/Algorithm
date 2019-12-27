/*
 * virus.cpp
 * 백준 2060번_바이러스
 *
 *  Created on: 2019. 12. 27.
 *      Author: 제서윤
 */


#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<vector<int>> &computer, vector<bool> &visited, int v, int& count);

int main(){
	int n, m;
	cin >> n >> m;

	vector<vector<int>> computer(n+1);
	vector<bool> visited(n+1);

	for(int i=0; i<m; i++){
		int v1, v2;
		cin >> v1 >> v2;
		computer[v1].push_back(v2);
		computer[v2].push_back(v1);
	}

	for(int i=0; i<=n; i++)
		visited[i] = false;

	int count = 0;
	dfs(computer, visited, 1, count);
	cout << count-1;	//시작노드 제외
}

void dfs(vector<vector<int>> &computer, vector<bool> &visited, int v, int &count){
	visited[0] = true;
	visited[v] = true;
	count++;
	//cout << "count : " << count << endl;
	//cout << "방문노드 : " << v << endl;
	for(int i=0; i<(int)computer[v].size(); i++){
		int w = computer[v][i];
		if(!visited[w])
			dfs(computer, visited, w, count);
	}
}
