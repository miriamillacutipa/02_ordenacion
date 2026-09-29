#include <iostream>
using namespace std;

void ShellSort(int A[], int n);

int main() {
	int n;
	cout << "METODO RAPIDO" << endl << endl; 
	cout << "Ingrese el numero de elementos: ";
	cin >> n; 
	
	int A[n];
	cout <<"Ingrese los elementos: " << endl;
	for(int i=0; i<n; i++) {
		cin >> A[i];
	}
	
	ShellSort(A, n);
	cout << "Arreglo ordenado: " << endl;
	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}
}

void ShellSort(int A[], int n) {
	int k, i, j, aux;
	k = n+ 1;
	while (k > 1) {
		k= int(k/2);
		
		for(i=k; i<n; i++) {
			aux = A[i];
			j= i;
			
			while(j-k >= 0 && A[j-k] > aux) {
				A[j] = A[j-k];
				j = j-k;
			}
			A[j] = aux;
		}
	}
}
