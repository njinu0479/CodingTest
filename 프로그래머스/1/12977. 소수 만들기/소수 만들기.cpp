#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int t = nums.size();

    for(int i = 0; i < t - 2; i++) {
        for(int j = i + 1; j < t - 1; j++) {
            for(int k = j + 1; k < t; k++) {
                int num = nums[i] + nums[j] + nums[k];
                bool prime = 1;
                
                for(int l = 2; l < num; l++) {
                    if(num % l == 0) prime = 0;
                }
                
                if(prime) answer++;
            }
        }
    }

    return answer;
}