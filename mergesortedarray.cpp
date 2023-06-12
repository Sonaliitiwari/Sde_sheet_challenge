#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int n, int m) {
	vector<int> merged;
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            merged.push_back(arr1[i]);
            i++;
        }
        else{
            merged.push_back(arr2[j]);
            j++;
        }
    }
    while(i < n){
        merged.push_back(arr1[i]);
        i++;
    }
    while(j < m){
        merged.push_back(arr2[j]);
        j++;
    }
	return merged;
}
