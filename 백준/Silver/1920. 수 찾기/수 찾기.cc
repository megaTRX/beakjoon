#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int N, M, tmp; // 변수 3개 초기화
    map<int, bool> mp; // 정수(int)를 열쇠(Key)로 하고, 참/거짓(bool)을 값(Value)으로 하는 사전을 만든다
    // map에 데이터를 넣으면 Key(정수)를 기준으로 항상 오름차순 정렬된 상태를 유지
    vector<int> ans; // 필요에 따라 크기가 자유자재로 늘어나는 정수형 배열을 ans라는 이름으로 만들겠다
    // vector는 내부적으로 연속된 메모리 공간을 할당받습니다
    cin >> N; // N에 정수를 입력받음
	while (N--) // N이 0이 될 때까지 반복 (N은 계속 1씩 감소) <N번 반복>
    {
        cin >> tmp; // tmp에 정수를 입력받음
		mp[tmp] = true; // map mp에 Key가 tmp인 데이터를 추가하고, 그 값(Value)을 true로 설정
    }

    cin >> M; // M에 정수를 입력받음
	while (M--) // M이 0이 될 때까지 반복 (M은 계속 1씩 감소) <M번 반복>
    {
		cin >> tmp; // tmp에 정수를 입력받음
        ans.push_back(mp[tmp]); // 만약 map<int, bool> mp라면, 결과값은 true(1) 또는 false(0)가 됩니다
        // ans.push_back()은 배열의 맨 뒤에 새로운 데이터를 추가한다
    }

	for (int i : ans) // ans 배열의 모든 원소를 하나씩 i에 대입하면서 반복 ans에서 꺼내온 원소를 임시로 담을 변수입니다
        // ans 안에 있는 요소들을 하나씩 i에 담아라는 뜻입니다.
		cout << i << '\n'; // i를 출력하고 줄바꿈
}