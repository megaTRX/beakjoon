#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)
#include <iostream>
#define endl '\n'
using namespace std;

int sum[100001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);   cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        sum[i] = sum[i - 1] + num;
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int start, end;
        cin >> start >> end;
        cout << sum[end] - sum[start - 1] << endl;
    }
}