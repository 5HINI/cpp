#include <iostream>
using namespace std;
//check and find unique element in array

void in(int ar[], int n) {
	for(int i=0;i<n;i++) {
		cin>>ar[i];
	}
}

void ck(int ar[],int n) {
	bool x;
	for (int a=0;a<n;a++) {
		x=1;
		for(int b=0;b<n;b++) {
			if (b==a) {
				continue;
			}
			if (ar[a]==ar[b]) {
				x=0;
			}
			if (b==n-1) {
				if(x) {
					cout<<ar[a]<<" ";
				}
			}
		}
	}
}
			

int main() {
	int n;
	cin>>n;
	int ar[100];
	in(ar,n);
	ck(ar,n);
}
