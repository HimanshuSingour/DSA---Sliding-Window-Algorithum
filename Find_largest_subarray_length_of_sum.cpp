#include<bits/stdc++.h>
using namespace std;


// Sliding Window Technique( Variable size) Window

int solve(int arr[] , int size, int k){


	 int i = 0;
	 int j = 0;

	 int sum = 0;

	 int mini = INT_MIN;

     
     // Traversing J to the end of the array
	 while(j < size){
        
        //Initisal sum
	 	sum = sum + arr[j];
         

	 	if(sum < k){

	 		j++;
	 	}
        
        // if window size hits we need to calculate 
	 	else if(sum == k){

	 		mini = max(mini , j - i + 1); // finding the max length 
	 		j++;

	 	}
       
        // if greater than the sum
	 	else if(sum > k){
	 		while(sum > k){

	 			// removing elemnt from front of the array
	 			sum = sum - arr[i];
	 			// and increment i
	 			i++;

	 		}
            
            // again check for validations
	 		if(sum == k){
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

int arr[] = {10 , 5 , 2 , 7 , 1 , 9};
int k = 15;

int size = sizeof(arr) / sizeof(int);

cout << solve(arr , size , k);



}