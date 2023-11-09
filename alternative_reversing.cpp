#include <iostream>
using namespace std;
//swapping alternate element

void inp(int ar[], int n) {
	for (int i=0; i<n; i++) {
		cin>>ar[i];
	}
}

void sw(int ar[], int n) {
	int s=0, e=1;
	while(e<n) {
		swap(ar[s],ar[e]);
		s=s+2;
		e=e+2;
	}
}

void out(int ar[], int n) {
	for (int i=0; i<n; i++) {
		cout<<ar[i]<<" ";
	}
}

int main() {
	int n;
	cin>>n;
	int ar[100];
	inp(ar,n);
	sw(ar,n);
	out(ar,n);
}
