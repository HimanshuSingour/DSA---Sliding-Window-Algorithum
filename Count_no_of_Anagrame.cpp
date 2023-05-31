#include<bits/stdc++.h>
using namespace std;


// Sliding Window Technique 

int solve(string s1 , string s2 , int size){

	int i = 0;
	int j = 0;

	int k = s2.size();

	map<char , int> maps;

    for(auto i : s2){
		maps[i]++;
	}


	int ans = 0;

	int count = maps.size(); 
	
	while(j < size){

		//calculations
		if(maps.find(s1[j]) != maps.end()){
			maps[s1[j]]--;
			if(maps[s1[j]] == 0) count--;
		}
	
		if(j - i + 1 == k){

			// ans
			if(count == 0){
				ans++;
				
			}
            
            //calculations
		if(maps.find(s1[j]) != maps.end()){
			maps[s1[j]]++;
			if(maps[s1[j]] == 1) count++;
		}
 
 
			i++; 
		}

		j++;

	}

	return ans;
}

int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif

string s1 = "ababab";
string s2 = "ab";

int size = s1.size();


cout << solve(s1 , s2 , size);




}