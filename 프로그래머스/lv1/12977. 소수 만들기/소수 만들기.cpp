#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int len = nums.size();
    int answer = len * (len - 1) * (len - 2) / 6;
    

    for (int i = 0; i < len - 2; i++)
    {
        for (int j = i + 1; j < len - 1; j++)
        {
            for (int k = j + 1; k < len; k++)
            {
                for (int l = 2; l < nums[i] + nums[j] + nums[k]; l++)
                {
                    if ((nums[i] + nums[j] + nums[k]) % l == 0)
                    {            
                        answer--;
                        break;
                    }
                }
            }
        }
    }
    
    return answer;
}