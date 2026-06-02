#pragma once
class Character
{
private:
	shared_ptr<Character> character = make_shared<Character>();

public:
	Character();

	void RecruitTeammate(const shared_ptr<Character> clone);

	~Character();
};

