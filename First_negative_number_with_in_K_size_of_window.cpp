#include<bits/stdc++.h>
using namespace std;


// Sliding Window Technique Uisng Dqueue 

// 

void solve(int arr[] , int size , int k){

	int i = 0;
	int j = 0;

	deque<int> q;

	while(j < size){

      // Calculations
      if(arr[j] < 0){

     	q.push_back(arr[j]);

     }
      
     // Calculations
     if(j - i + 1 == k){
         
        if(!q.empty()) cout << q.front() << " ";
        else cout << "0" << " ";

        if(arr[i] == q.front()) q.pop_front();

        i++;

        }
        
        j++;
	}
}

int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif

int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
int size = sizeof(arr) / sizeof(int);
int k = 3;

solve(arr , size , k);



}