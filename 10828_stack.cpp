/*
 * stack.cpp
 * 백준 10828_스택
 *
 *  Created on: 2020. 1. 11.
 *      Author: 제서윤
 */


#include <iostream>
#define MAX 10000
using namespace std;

class Stack{
private:
	int data[MAX]={};
	int current=0;
public:
	Stack();
	~Stack();
	void push(int item);
	int pop();
	int size();
	bool empty();
	int top();
};
int main(){
	int n;
	cin >> n;

	Stack s;
	int loop = 0;
	while(loop != n){
		string command;
		cin >> command;
		if(command == "push"){
			int item;
			cin >> item;
			s.push(item);
		}
		else if(command == "pop"){
			//cout << "pop : ";
			cout << s.pop() << endl;
		}
		else if(command == "size"){
			//cout << "size : ";
			cout << s.size() << endl;

		}
		else if(command == "empty"){
			//cout << "is empty? ";
			cout << s.empty() << endl;
		}
		else if(command == "top"){
			//cout << "top : ";
			cout << s.top() << endl;
		}
		else
			continue;
		loop++;
	}
	return 0;
}

Stack::Stack(){

}
Stack::~Stack(){

}
void Stack::push(int item){
	data[++current] = item;
}
int Stack::pop(){
	if(!current)
		return -1;
	else
		return data[current--];
}
int Stack::size(){
	return current;
}
bool Stack::empty(){
	if(current)
		return false;
	else
		return true;
}
int Stack::top(){
	if(current)
		return data[current];
	else
		return -1;
}
