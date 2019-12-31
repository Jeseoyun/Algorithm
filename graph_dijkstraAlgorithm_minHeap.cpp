//우선순위 큐(최소힙)을 이용한 다익스트라알고리즘
//간선의 개수가 비정상적으로 많아도 안정적으로 처리할 수 있음
//시간복잡도 O(M*logN)

#include <iostream>
#include <vector>
#include <queue>	//힙과 같은 방식으로 작동하여 힙처럼 사용가능 - 우선순위큐

using namespace std;

int number = 6;
int INF = 1000000000;

vector<pair<int, int>> a[7];	//간선정보
int d[7];	//최소 비용

void dijkstra(int start){
	d[start] = 0;
	priority_queue<pair<int, int>> pq;	//힙구조
	//가까운 순서대로 처리하므로 큐를 사용
	pq.push(make_pair(start, 0));

	while(!pq.empty()){
		int current = pq.top().first;	//가장 적은 비용을 가진노드
		//짧은 것이 먼저 오도록 음수화(-) 해줌
		int distance = -pq.top().second;
		pq.pop();
		//최단거리가 아닌 경우 skip
		if(d[current] < distance)
			continue;
		for(int i=0; i<(int)a[current].size(); i++){
			//선택된 노드의 인접 노드
			int next = a[current][i].first;
			int nextDistance = distance + a[current][i].second;

			if(nextDistance < d[next]){
				d[next] = nextDistance;
				pq.push(make_pair(next, -nextDistance));
			}
		}
	}
}

int main(){
	//기본적으로 연결되지 않은 경우 비용은 무한
	for(int i=1; i<=number; i++)
		d[i] = INF;

	a[1].push_back(make_pair(2, 2));
	a[1].push_back(make_pair(3, 5));
	a[1].push_back(make_pair(4, 1));

	a[2].push_back(make_pair(1, 2));
	a[2].push_back(make_pair(3, 3));
	a[2].push_back(make_pair(4, 2));

	a[3].push_back(make_pair(1, 5));
	a[3].push_back(make_pair(2, 3));
	a[3].push_back(make_pair(4, 3));
	a[3].push_back(make_pair(5, 1));
	a[3].push_back(make_pair(6, 5));

	a[4].push_back(make_pair(1, 1));
	a[4].push_back(make_pair(2, 2));
	a[4].push_back(make_pair(3, 3));
	a[4].push_back(make_pair(5, 1));

	a[5].push_back(make_pair(3, 1));
	a[5].push_back(make_pair(4, 1));
	a[5].push_back(make_pair(6, 2));


	a[4].push_back(make_pair(3, 5));
	a[4].push_back(make_pair(5, 2));

	dijkstra(1);

	for(int i=1; i<=number; i++)
		cout << d[i];

}