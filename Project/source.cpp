#include "stdafx.h"
#include <stack>
#include <queue>

int main()
{
#pragma region 컨테이너 어댑터
	// 기존 컨테이너의 인터페이스를 제한하여 만든 기능이
	// 제한되거나 변경된 컨테이너입니다.

#pragma region stack container
	
	// stack<int> s;
	// 
	// s.push(10);
	// s.push(20);
	// s.push(30);
	// s.push(40);
	// s.push(50);
	// s.push(60);
	// 
	// while (!s.empty())
	// {
	// 	cout << s.top() << endl;
	// 	s.pop();
	// }

#pragma endregion

#pragma region queue container

	// queue<int> q;
	// 
	// q.push(10);
	// q.push(20);
	// q.push(30);
	// q.push(40);
	// q.push(50);
	// 
	// const int & oq = q.size();
	// 
	// for (int i = 0; i < oq; i++)
	// {
	// 	cout << q.front() << endl;
	// 	q.pop();
	// }

#pragma endregion



#pragma endregion



	return 0;
}