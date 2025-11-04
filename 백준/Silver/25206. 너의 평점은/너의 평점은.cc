#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    double ts = 0.0;
    double tc = 0.0;

    for(int i = 0; i < 20; i++) {
        getline(cin, s);
        
        stringstream ss(s);
        string ps[3];
        
        ss >> ps[0] >> ps[1] >> ps[2];

        if(ps[2] != "P") {
            double c = stod(ps[1]);

            tc += c;
            
            double gp = 0.0;
            
            if(ps[2] == "A+") gp = 4.5;
            else if(ps[2] == "A0") gp = 4.0;
            else if(ps[2] == "B+") gp = 3.5;
            else if(ps[2] == "B0") gp = 3.0;
            else if(ps[2] == "C+") gp = 2.5;
            else if(ps[2] == "C0") gp = 2.0;
            else if(ps[2] == "D+") gp = 1.5;
            else if(ps[2] == "D0") gp = 1.0;
            else if(ps[2] == "F") gp = 0.0;

            ts += (c * gp);
        }
    }

    if (tc == 0) {
        cout << 0.0;
    } else {
        cout << ts / tc;
    }

    return 0;
}