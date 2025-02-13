#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n;
    cin >> t;
    
    while (t--)
    {
        cin >> n;
        vector<int> vec(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        long long score = 0;
        int maxPrice = 0;
        
        for (int i = n - 1; i >= 0; i--)
        {
            if (vec[i] > maxPrice)
            {
                maxPrice = vec[i];
            }
            else
            {
                score += (maxPrice - vec[i]);
            }
        }
        
        cout << score << '\n';
    }

    return 0;
}
