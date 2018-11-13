// CPP program to implement traveling salesman 
// problem using naive approach. 
#include <bits/stdc++.h> 
using namespace std; 
 

// implementation of traveling Salesman Problem 
int travllingSalesmanProblem(int graph[5][5], int s) 
{ 
	// store all vertex apart from source vertex 
	vector<int> vertex; 
	for (int i = 1; i < 5; i++) 
		{	vertex.push_back(i); 
        }
	// store minimum weight Hamiltonian Cycle. 
	int min_path = INT_MAX; 
	do { 

		// store current Path weight(cost) 
		int current_pathweight = 0; 
		
		// compute current path weight 
		int k = s; 
		for (int i = 0; i < vertex.size(); i++) { 
			current_pathweight += graph[k][vertex[i]]; 
			k = vertex[i]; 
		} 
		current_pathweight += graph[k][s]; 

		// update minimum 
		min_path = min(min_path, current_pathweight); 
		
	} while (next_permutation(vertex.begin(), vertex.end())); 

	return min_path; 
} 

// driver program to test above function 
int main() 
{ 
	// matrix representation of graph 
	int graph[5][5] ={ { 0, 100, 300, 125,75 }, 
					{ 100, 0, 50, 75,125 }, 
					{ 300, 50, 0, 100,125 }, 
					{ 125, 75, 100, 0, 50 }, 
		            { 75, 125, 125, 50, 0 }	}; 
		            
	int s = 0; 
	cout << travllingSalesmanProblem(graph, s) << endl; 
	return 0; 
}
