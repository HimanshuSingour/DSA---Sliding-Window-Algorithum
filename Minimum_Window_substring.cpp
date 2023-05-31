#include<bits/stdc++.h>
using namespace std;


// Sliding Window Technique( Variable n) Window 

// Minimum Window Substring ( Hard )

int solve(string s1 , string s2){

	unordered_map<char , int> m;

	for(auto i : s2){
		m[i]++;
	}

	int mapSize = m.size();
    
    int i = 0;
    int j = 0;

    int ans = INT_MAX;

	while(j < s1.size()){

		if(m.find(s1[j]) != m.end()){
			m[s1[j]]--;

			if(m[s1[j]] == 0){
                mapSize--;
			}

		}

        if(mapSize > 0){
        	j++;
        }


        else if(mapSize == 0){
        	while(mapSize == 0){

        		if(m.find(s1[i]) != m.end()){
        			m[s1[i]]++;

        			if(m[s1[i]] == 1){
        				mapSize++;
        			}

        			i++;
        		}
        		
        		else{

                    i++;
        			ans = min(ans , j - i + 1);
        			
        		}


        	}

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

string s1 = "ADOBECODEBANC";
string s2 = "ABC";


  cout << solve(s1 , s2);

}