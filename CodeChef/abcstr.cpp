#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
	string cad;
	lli tam, a,b,c, res;
	map< pair<lli,lli> , lli> M;

	cin >> cad;
	res = a = b = c = 0;
	tam = cad.length();
	M[make_pair(0,0)]++;
	for (lli i = 0; i < tam; ++i) {
		a += ( cad[i] == 'A' );
		b += ( cad[i] == 'B' );
		c += ( cad[i] == 'C' );

		res += M[make_pair(a - b, c - b)];
		M[make_pair(a - b, c - b)]++;
	}
	cout << res << "\n";
	return 0;
}
