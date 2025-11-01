#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s, rs;
    cin >> s;

    rs = s;
    reverse(rs.begin(), rs.end());

    if(rs == s) cout << 1;
    else cout << 0;

    return 0;
}