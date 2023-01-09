#include <string>
#include <cmath>
#include <iostream>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int score[4];
    int j = 0;
    for (int i = 0; i < dartResult.size(); i++)
    {
        if (dartResult[i] == '1' && dartResult[i+1] == '0')
        {
            j += 1;
            i += 1;
            score[j] = 10;
        }
        else if (dartResult[i] > 47 && dartResult[i] < 58)
        {
            j += 1;
            score[j] = int(dartResult[i]) - 48;
        }
        else if (dartResult[i] == 'D')
            score[j] = score[j]*score[j];
        else if (dartResult[i] == 'T')
            score[j] = score[j]*score[j]*score[j];
        else if (dartResult[i] == '*')
        {
            score[j] *= 2;
            score[j-1] *= 2;
        }
        else if (dartResult[i] == '#')
        {
            score[j] *= -1;
        }
        
    }
    cout << score[1] << endl;
    cout << score[2] << endl;
    cout << score[3] << endl;
    answer = score[1] + score[2] + score[3];
    return answer;
}