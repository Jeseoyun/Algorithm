/*
 * dungchi.cpp
 * 백준 7568_덩치
 *
 *  Created on: 2020. 1. 9.
 *      Author: 제서윤
 */


#include <iostream>
using namespace std;
struct person{
   int weight;
   int height;
};

int main(){
   int n;
   cin >> n;
   person p[n];
   int p_rank[n];
   for(int i=0; i<n; i++){
      cin >> p[i].weight >> p[i].height;
      p_rank[i] = 1;
   }
   for(int i=0; i<n; i++)
      for(int j=0; j<n; j++){
         if(i==j)
            continue;
         if(p[i].weight<p[j].weight)
            if(p[i].height<p[j].height)
               p_rank[i]++;
      }
   for(int i=0; i<n; i++)
      cout << p_rank[i] << " ";
   return 0;
}
