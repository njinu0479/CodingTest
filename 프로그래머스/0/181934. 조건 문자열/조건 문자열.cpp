#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    int answer = 0;
    if(n == m && eq == "=") answer = 1;
    else if(n > m && eq == "!" && ineq == ">") answer = 1;
    else if(n < m && eq == "!" && ineq == "<") answer = 1;
    else if(n < m && ineq == "<") answer = 1;
    else if(n > m && ineq == ">") answer = 1;
    
    return answer;
}