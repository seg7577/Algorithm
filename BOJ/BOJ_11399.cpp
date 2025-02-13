/*
문제 : 인하은행에는 atm이 한 대 밖에 없다. 지금 이 atm 앞에 n명의 사람들이 줄을 서 있다. 사람은 1번부터 n번까지 번호가 매겨져 있으며, i번 사람이 돈을 인출하는데 걸리는 시간은 P(i)분이다.
    사람들이 줄을 서는 순서에 따라서, 돈을 인출하는데 필요한 시간의 합이 달라지게 된다. 예를 들어, 총 5명이 있고, P1 = 3, P2 = 1, P3 = 4, P5 = 2인 경우를 생각해보자. [1, 2, 3, 4, 5] 순서로 줄을 선다면, 1번 사람은 3분 만에 돈을 뽑을 수 있다. 2번 사람은 1번 사람이 돈을 뽑을 때까지 기다려야 하기 때문에, 3+1 = 4분이 걸리게 된다. 3번 사람은 1번, 2번 사람이 돈을 뽑을 때까지 기다려야 하기 때문에, 총 3 + 1 + 4 = 8분이 필요하게 된다. 4번 사람은 3 + 1 + 4 + 3 = 11분, 5번 사람은 3 + 1 + 4 + 3 + 2 = 13분이 걸리게 된다. 이 경우에 각 사림이 돈을 인춝하는데 필요한 시간의 합은 3 +.  +.  + 11 + 13= 39분이 된다.
    줄을 [2, 5, 1, 4, 3] 순서로 줄을 서면, 2번 사람은 1분만에, 5번 사람은 1+2 =. 분, 1번 사람은 1+2+3 = 6분, 4번 사람은 1+2+3+3=9분, 3번 사람은 1+2+3+3+4=13분이 걸리게 된다. 각 사람이 돈을 인출하는데 필요한 시간의 합은 1+3+6+9+13=32분이다. 이 방법보다 더 필요한 시간의 합을 최소로 만들 수는 없다.
    줄을 서 있는 사람의 수 n과 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어졌을 때, 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 구하는 프로그램을 작성하시오.
-----------------------------------------------------------------------------------------------------------------------------------------------------------------
 입력 : 첫째 줄에 사람의 수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄에는 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어진다. (1 ≤ Pi ≤ 1,000)
 출력 : 첫째 줄에 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 출력한다.
-----------------------------------------------------------------------------------------------------------------------------------------------------------------
 풀이 : 입력 받은 방문객들의 시간을 오름차순으로 정렬한다. 이후 해당 배열의 인덱스에 개인의 소요시간에서 본인의 순서까지의 총 소요 시간을 기록한다.
*/

#include <iostream>
#include <algorithm>
#define MAX 1000

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, answer = 0;
    cin >> n;
    
    int arr[MAX];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);
    
    for (int i = 0; i < n; i++)
    {
        answer += arr[i];
        arr[i] = answer;
    }
    
    answer = 0;
    
    for (int i = 0; i < n; i++)
        answer += arr[i];
    
    cout << answer << '\n';
    
    return 0;
}
