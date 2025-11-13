#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    for(double d : arr) answer += d;
    answer = answer / arr.size();
    
    return answer;
}