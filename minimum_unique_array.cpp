#include <iostream> 
using namespace std;  
int minSum(int arr[], int n) 
{ 
    int sum = arr[0]; 
  
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) {              
            int j = i; 
            while (j < n && arr[j] <= arr[j - 1]) {           
                arr[j] = arr[j] + 1; 
                j++; 
            } 
        } 
         sum = sum + arr[i]; 
     } 
  
    return sum; 
} 
int main() 
{ 
    int arr[] = { 2, 2, 3, 5, 6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << minSum(arr, n) << endl; 
    return 0; 
} 