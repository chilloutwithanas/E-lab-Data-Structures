#include<iostream> 
using namespace std; 

void groupElements(int arr[], int n) 
{ 
	bool *visited = new bool[n]; 
	for (int i=0; i<n; i++) 
		visited[i] = false; 
  
	for (int i=0; i<n; i++) 
	{ 
      
		if (!visited[i]) 
		{ 
          
			cout << arr[i] << " "; 
			for (int j=i+1; j<n; j++) 
			{ 
				if (arr[i] == arr[j]) 
				{ 
					cout << arr[i] << " "; 
					visited[j] = true; 
				} 
			} 
		} 
	} 
	delete [] visited; 
} 


int main() 
{ 
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n;i++) {
    cin>>arr[i];
  }
	groupElements(arr, n); 
	return 0; 
} 
