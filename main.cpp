#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    string boga, moga;
    int n, m, result, count = 0;
    cin >> boga;
    cin >> moga;
    n = boga.size();
    m = moga.size();
    for(int i = n-1, j = m-1; i>=0, j>=0; i--, j--){
        if (boga[i]==moga[i])
        {
            count++;
        }else{
            break;
        }
    }
    result = (n+m)-(2*count);
    cout << result << "\n";
    return 0;
}
