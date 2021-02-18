#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int T[200001];
char Z[200001];
stack<int> stos;

/*
9
+ 4
+ 7
+ 1
+ 2
-
* 3
-
* 2
-

*/

int cofn(int p, int ile){
    cout << "COFAM Z " << p << " o " << ile << endl;
	for (int i=1;i<=ile;i++) {
		if (Z[p-i]=='+') {
			stos.pop();
		}	else if (Z[p-i]=='-') {
			stos.push(T[p-i]);
		}	else if (Z[p-i]=='*') {
			cofn(p-i,T[p-i]);
		}
	}
	if (stos.size()==0) {
		return -1;
	}	else{
		return stos.top();
	}
}

int main() {
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	
	int n,x;
	char zn;
	
	cin>>n;
	
	for (int i=1,poz=1;i<=n;i++,poz++) {
		cin>>zn;
        Z[i]=zn;
		if (zn=='+') {
			cin>>x;
			stos.push(x);
			cout<<stos.top()<<endl;
		}	else if (zn=='-') {
			if (stos.size()!=0) {
				T[i]=stos.top();
				stos.pop();
			}
			if (stos.size()==0) {
				cout<<-1<<endl;
			}	else{
				cout<<stos.top()<<endl;
			}
		}	else if (zn=='*') {
			cin>>x;
			T[i]=x;
			cout<<cofn(i,x)<<endl;
			
		}
	}
	
}
