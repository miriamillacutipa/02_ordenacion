#include <iostream>
using namespace std;

void QuickSort(int A[], int n);
void Reduce (int A[], int inic, int fin);

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
	
	QuickSort(A, n);
	cout << "Arreglo ordenado: " << endl;
	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}
}

void QuickSort(int A[], int n) {
	Reduce(A, 0, n-1);
}

void Reduce (int A[], int inic, int fin) {
	int izq, der, pos, cen, aux;
	izq=inic;
	der=fin;
	pos=izq;
	cen=1;
	
	while(cen==1) {
		cen=0;
		while (A[pos] <= A[der] && pos != der) {
			der= der-1;
		}
		if(pos!=der) {
			aux = A[pos];
			A[pos] = A[der];
			A[der] = aux;
			pos =der;
			
			while (A[pos]>= A[izq] && pos != izq) {
				izq= izq +1;
			}
			
			if(pos != izq) {
				aux = A[pos];
				A[pos] = A[izq];
				A[izq] = aux;
				pos = izq;
				cen=1;
			}
		}
		if(pos-1 >inic) {
			Reduce(A, inic, pos -1);	
		}
		if (pos+1 < fin) {
			Reduce(A, pos+1, fin);
		}
	}
}


