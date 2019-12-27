/*
 * dfsbfs.cpp
 * 백준 1260_DFS와 BFS
 *
 *  Created on: 2019. 12. 26.
 *      Author: 제서윤
 */


#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void dfs(vector<vector<int>> &adjList, vector<bool> &visited, int v){
	visited[v] = true;
	//cout << "dfs visit " << v << endl;
	cout << v << " ";
	for(int i=0; i<(int)adjList[v].size(); i++){
		int w = adjList[v][i];
		if(!visited[w])
			dfs(adjList, visited, w);
	}
}

void bfs(vector<vector<int>> &adjList, vector<bool> &visited, int v){
	visited[0] = true;
	visited[v] = true;
	//cout << "bfs visit " << v << endl;
	queue<int> q;
	q.push(v);
	while(!q.empty()){
		int temp = q.front();
		cout << temp <<" ";
		q.pop();
		for(int i=0; i<(int)adjList[temp].size(); i++){
			int w = adjList[temp][i];
			if(!visited[w]){
				visited[w] = true;
				//cout << "bfs visit " << w << endl;
				q.push(w);
			}
		}
	}
}

int main(){
	int n, m, v;	//정점수, 간선수, 시작하는 정점번호
	cin >> n >> m >> v;

	vector<vector<int>> adjList(n+1);
	vector<bool> visited(n+1);

	for(int i=0; i<m; i++){
		int v1, v2;
		cin >> v1 >> v2;
		adjList[v1].push_back(v2);
		adjList[v2].push_back(v1);
	}

	for(int i=0; i<n; i++){
		visited[i] = false;
		sort(adjList[i].begin(), adjList[i].end());
	}

	dfs(adjList, visited, v);
	cout << endl;

	for(int i=0; i<=n; i++)
		visited[i] = false;

	bfs(adjList, visited, v);

	return 0;
}
