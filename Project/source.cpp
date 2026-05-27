#include "stdafx.h"
#include "Item.h"
#include "Polaroid.h"
#include "Antidote.h"

int main()
{
#pragma region 추상화
	// 복잡한 시스템이나 객체의 내부에 있는 세부 사항을
	// 숨기고, 필요한 부분만 외부에서 사용할 수 있도록
	// 단순화시키는 작업입니다.

	Item* inventory[5] = {nullptr, };

	inventory[0] = new Polaroid;
	inventory[1] = new Antidote;

	int choice = 0;
	cout << "사용할 아이템 번호를 선택하세요. (0~4) : ";
	cin >> choice;

	cout << endl;

	if (choice < 0 || choice >= 5)
	{
		cout << "없는 인벤토리 입니다." << endl;
	}
	else
	{
		if (inventory[choice] != nullptr)
		{
			cout << choice << "번 -> " << choice << "번째 -> ";
			inventory[choice]->Use();
		}
		else
		{
			cout << choice << "번 -> 아이템이 존재하지 않습니다." << endl;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (inventory[i] != nullptr)
		{
			delete inventory[i];
			inventory[i] = nullptr;
		}
	}

	// 추상 클래스는 정의되어 있지 않은 함수가 있으므로,
	// 객체를 생성할 수 없습니다.
#pragma endregion


	
	return 0;
}