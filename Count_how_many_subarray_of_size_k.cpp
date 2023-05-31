#include<bits/stdc++.h>
using namespace std;


// Sliding Window Technique Implementations

int solve(int arr[] , int size , int k){

 // we point both i and j at the starting or 0 index of the array
 int i = 0;
 int j = 0;

int count = 0;


 
 // now we can ittrate j to the till array ends
 while(j < size){
    
 
    // Now creating window of size k (j - i + 1) means j[index] - i[index] + 1 gives you 
    // window and j++;
 	if(j - i + 1 < k){
 		j++;
 	}
    
    // Here at any pont this j - i + 1 become equal to k,
    // here we have to calculate some things
   else if(j - i + 1 == k){
        
        
         count++;
         i++;
 	     j++;
 	}

	// j++

 	
 }

 return count;


}


int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("inputf.in" , "r" , stdin); 
	freopen("outputf.in" , "w" , stdout);
   	#endif

int arr[] = {100 , 200 , 300 , 400};
int size = sizeof(arr) / sizeof(int);
int k = 5;

cout << solve(arr , size , k) << endl; 


}