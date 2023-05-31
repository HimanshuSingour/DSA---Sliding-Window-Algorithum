#include<bits/stdc++.h>
using namespace std;


// Sliding Window Technique Uisng Dqueue


vector<int> solve(int arr[] , int size , int k){

	int  i = 0;
	int j = 0;

	deque<int> dq;
	vector<int> ans;

	while(j < size){
     
     while(!dq.empty() && arr[j] >= dq.front()){

     	dq.pop_back();

     }

     dq.push_back(arr[j]);

     if(j - i + 1 < k){
     	j++;
     }


     else if(j - i + 1 == k){
          ans.push_back(dq.front());

          i++;
          j++;
     }


	}

	return ans;
}

int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif

int arr[] = {10 , 50 , 20 , 30 , 90 , 110};
int size = sizeof(arr) / sizeof(int);
int k = 3;

vector<int> ans = solve(arr , size , k);

for(auto i : ans){
	cout << i << " "; 
} 


}