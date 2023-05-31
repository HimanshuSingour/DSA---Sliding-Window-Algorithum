
#include<bits/stdc++.h>
using namespace std;


// Sliding Window Technique( Variable size) Window

int solve(string &s , int size ,int k){

	int i = 0;
	int j = 0;
   
    map<char , int> mp;

    int mini = -1;

	while(j < size){

		mp[s[j]]++;

		if(mp.size() < k){
           j++;
		}

		else if(mp.size() == k){

			mini = max(mini , j - i + 1); // Taking Longest
			j++;
		}

		else if(mp.size() > k){
			while(mp.size() > k){

				mp[s[i]]--;

				if(mp[s[i]] == 0){

                   mp.erase(s[i]);
				} 

				i++;
			}

			if(mp.size() == k){
				mini = max(mini , j - i + 1);

			}

			j++;
		}
	}

  return mini;
}



int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif

string s = "aaaa";
int k = 3;

int size = s.size();

cout << solve(s , size , k);



}