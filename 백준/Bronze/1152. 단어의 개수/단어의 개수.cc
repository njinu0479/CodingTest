#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

    string s;
    string w;
    int c = 0;

    getline(cin, s);

    istringstream sp(s);

    while (sp >> w) {
        c++;
    }

    cout << c;

    return 0;
}