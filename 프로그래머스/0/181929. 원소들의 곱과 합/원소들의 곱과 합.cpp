#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
     int a = 1, b = 0;
    
    for(int i = 0; i < num_list.size(); i++) {
        a *= num_list[i];
        b += num_list[i];
    }
    b = b * b;
    
    if(a < b) answer = 1;
    
    return answer;
}