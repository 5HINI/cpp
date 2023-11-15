#include <iostream>
using namespace std;

//sort all the no. in ascending order

void inp(int ar[], int n) {
	for(int i=0;i<n;i++) {
		cin>>ar[i];
	}
}

void st(int ar[], int n) {
	for(int i=0;i+1<n;i++) {
		if(ar[i]>ar[i+1]) {
			swap(ar[i],ar[i+1]);
			i=-1;
		}
	}
}

void out(int ar[], int n) {
	for(int i=0;i<n;i++) {
		cout<<ar[i]<<" ";
	}
}

int main() {
	int n;
	int ar[100];
	cin>>n;
	inp(ar,n);
	st(ar,n);
	out(ar,n);
}
