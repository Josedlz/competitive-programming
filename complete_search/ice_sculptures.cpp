#include <iostream>
using namespace std;

int x[20005],i,j,k,a=1<<31,n,t;

int main(){
	cin >> n;
	for(; i < n; ++i)
		cin >> x[i];
	for(i = 1; i * 3 <= n; ++i)
		if(n % i == 0)
			for(j = 0; j < i; ++j){
				for(k = j, t = 0; k < n; k += i)
					t += x[k];
					if(a < t)
						a = t;
			}
	cout << a << endl;
}
