#include<bits/stdc++.h>
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
 	cin.tie(NULL);

 	int l, r, d;cin >> l >> r >> d;

 	if(r > 50 && l < r && r >d)
 		cout << "S\n";
 	else
 		cout << "N\n";

 	return 0;
}		