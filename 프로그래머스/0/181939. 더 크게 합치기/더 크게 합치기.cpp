#include <string>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    string s1 = "", s2 = "";
    s1 = to_string(a) + to_string(b);
    s2 = to_string(b) + to_string(a);
    s1 = s1 > s2 ? s1 : s2;
    answer = stoi(s1);
    
    return answer;
}