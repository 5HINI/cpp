#include <iostream>
using namespace std;

int main() {
  int i=1;
  int j;
  int m;
  int k=1;
  int n;
  cin>>n;
  m = n;
  while (i <= 2*n) {
  	j=1;
  	k=1;
  	while (k<=m-1) {
  		cout<<" ";
  		k++;
  	}
  	while (j<=i) {
  		cout<<"*";
  		j++;
  	}
  	cout<<endl;
  	i=i+2;
  	m=m-1;
  }
}
