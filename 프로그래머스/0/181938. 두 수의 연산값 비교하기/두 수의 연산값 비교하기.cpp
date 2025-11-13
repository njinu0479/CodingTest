#include <string>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string s = to_string(a) + to_string(b);
    answer = stoi(s) > 2 * a * b ? stoi(s) : 2 * a * b;
    
    return answer;
}