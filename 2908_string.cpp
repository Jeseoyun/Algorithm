#include <iostream>
using namespace std;
int main(){
	string A, B;
	cin >> A >> B;

	if(A.length()<B.length()){
		for(int i=B.length()-1; i>=0; i--)
			cout << B[i];
		return 0;
	}
	else if(A.length()>B.length()){
		for(int i=A.length()-1; i>=0; i--)
			cout << A[i];
		return 0;
	}
	else{	//A.length()==B.length()
		for(int i=A.length()-1; i>=0; i--){
			if(A[i]<B[i]){
				for(int j=B.length()-1; j>=0; j--)
					cout << B[j];
				return 0;
			}
			else{
				for(int j=A.length()-1; j>=0; j--)
					cout << A[j];
				return 0;
			}
		}
	}
	return 0;
}
