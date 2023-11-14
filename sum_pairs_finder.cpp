#include <iostream>
using namespace std;

//find pair equal to sum

void inp(int ar[], int s) {
	for(int i=0;i<s;i++) {
		ar[i]=i+1;
	}
	cout<<"pairs = ";
}

void ck(int ar[], int s) {
	for(int i=0;i<s;i++) {
		for(int j=0;j<s;j++) {
			if (i>=j) {
				continue;
			}
			else if(ar[i]+ar[j]==s) {
				if(ar[i]>ar[j]) {
					cout<<"{"<<ar[j]<<","<<ar[i]<<"} ";
				}
				else {
					cout<<"{"<<ar[i]<<","<<ar[j]<<"} ";
				}
			}
		}
	}
}

int main() {
	int s;
	int ar[100];
	cout<<"enter sum = ";
	cin>>s;
	cout<<endl;
	inp(ar,s);
	ck(ar,s);
}
