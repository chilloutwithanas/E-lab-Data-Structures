//Author Pulkit Singh

#include <iostream>
using namespace std; 

void findClosest(int A[], int B[], int C[], int p, int q, int r) 
{ 
	int diff = 100;
	int res_i =0, res_j = 0, res_k = 0;
	int i=0,j=0,k=0; 
	while (i < p && j < q && k < r) 
	{ 
		int minimum = min(A[i], min(B[j], C[k])); 
		int maximum = max(A[i], max(B[j], C[k])); 
		if (maxiAmum-minimum < diff) 
		{ 
			res_i = i, res_j = j, res_k = k; 
			diff = maximum - minimum; 
		} 
		if (diff == 0) break; 
		if (A[i] == minimum) i++; 
		else if (B[j] == minimum) j++; 
		else k++; 
	} 
	cout << A[res_i] << " " << B[res_j] << " " << C[res_k]; 
} 

int main() 
{ 
  int A[10],B[10],C[10],p,q,r;
  cin>>p;
  for(int i=0;i<p;i++){
    cin>>A[i];
  }
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>B[i];
  }
  cin>>r;
  for(int i=0;i<r;i++){
    cin>>C[i];
  }
	findClosest(A, B, C, p, q, r); 
	return 0; 
} 
