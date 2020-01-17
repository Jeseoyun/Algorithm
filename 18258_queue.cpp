/*
 * queue2.cpp
 * 백준 18258번_큐 2
 *
 *  Created on: 2020. 1. 17.
 *      Author: 제서윤
 */


#include <iostream>
#define MAX 2000000
using namespace std;

class Queue{
private:
	char data[MAX] = {};
	int front;
	int rear;
public:
	Queue();
	~Queue();
	void push(char item);
	char pop();
	int size();
	bool empty();
	char getFront();
	char getRear();
};

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	Queue q;
	while(n--){
		string command;
		cin >> command;

		if(command == "push"){
			char item;
			cin >> item;
			q.push(item);
			continue;
		}
		else if(command == "pop"){
			char temp = q.pop();
			if(temp == 'x')
				cout << -1;
			else
			cout << temp;
		}
		else if(command == "size"){
			cout << q.size();
		}
		else if(command == "empty"){
			cout << q.empty();
		}
		else if(command == "front"){
			cout << q.getFront();
		}
		else if(command == "back"){
			cout << q.getRear();
		}
		cout << "\n";
	}
	return 0;
}

Queue::Queue(){
	//cout << "queue 생성" << endl;
	front = 0;
	rear = -1;
}
Queue::~Queue(){

}
void Queue::push(char item){
	//cout << "push : " << item << endl;
	data[++rear] = item;
}
char Queue::pop(){
	//cout << "pop : ";
	if(front>rear)
		return 'x';
	else
		return data[front++];
}
int Queue::size(){
	//cout << "size : ";
	return rear-front+1;
}
bool Queue::empty(){
	//cout << "empty : ";
	if(rear<front)
		return true;
	else
		return false;
}
char Queue::getFront(){
	//cout << "front : ";
	return data[front];
}
char Queue::getRear(){
	//cout << "rear : ";
	return data[rear];
}


