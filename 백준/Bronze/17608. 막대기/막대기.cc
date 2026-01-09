#include <iostream>
#include <stack>
using namespace std;

int main() {
    int max = 0, n, m, cnt = 0;
    stack<int> s; // 정수(int)들을 저장할 수 있는, s라는 이름의 빈 스택 하나를 만들어라

    cin >> n;
	for (int i = 0; i < n; i++) // n번 반복하는 반복문을 만들어라
    {
		cin >> m; // 정수 하나를 입력 받아 m이라는 이름의 변수에 저장하여라
		s.push(m); // 스택 s의 가장 위에 m을 추가하여라
    }
	while (s.size()) // 스택 s가 비어있지 않은 동안 반복하는 반복문을 만들어라
    {
		if (max < s.top()) // 만약 max가 스택 s의 가장 위에 있는 정수보다 작다면
        {
			max = s.top(); //  max에 스택 s의 가장 위에 있는 정수를 저장하여라
			cnt++; // cnt의 값을 1 증가시켜라
        }
		s.pop(); // 스택 s의 가장 위에 있는 정수를 제거하여라
    }
    cout << cnt; // cnt의 값을 출력하여라
}