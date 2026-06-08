#include "../Project/stdafx.h"
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

int main()
{
#pragma region 연관 컨테이너
	// 특정한 방식으로 데이터를 저장하고 검색하는 컨테이너입니다.

#pragma region set

	// set<const char*> set;
	// 
	// set.insert("League Of Legend");
	// set.insert("A Dance Of Fire And Ice");
	// set.insert("OverWatch");
	// set.insert("Valorant");
	// 
	// for (const auto & game : set)
	// {
	// 	cout << game << endl;
	// }
	// 
	// cout << "set empty : " << set.empty() << endl;
	// 
	// set.clear();
	// 
	// cout << "set size : " << set.size() << endl;
	// cout << "set max size : " << set.max_size() << endl;

#pragma endregion

#pragma region map

	// map <string, int > npcList;
	// 
	// string npcName;
	// 
	// npcList["Elise"] = 75;
	// npcList["Brown"] = 25;
	// npcList["Jinne"] = 30;
	// npcList["Emma"] = 50;
	// 
	// while (true)
	// {
	// 	cout << "선택할 NPC의 이름을 적어주세요. : ";
	// 	cin >> npcName;
	// 
	// 	if (npcList.count(npcName) > 0)
	// 	{
	// 		cout << npcName << " NPC를 선택하였습니다. 호감도가 변동되었습니다.\n" << endl;
	// 
	// 		for (auto& pair : npcList)
	// 		{
	// 			if (pair.first == npcName)
	// 			{
	// 				pair.second += 10;
	// 			}
	// 			else
	// 			{
	// 				pair.second -= 10;
	// 			}
	// 		}
	// 
	// 		cout << "===최종 호감도 변동 결과===" << endl;
	// 		for (const auto& pair : npcList)
	// 		{
	// 			cout << pair.first << "의 호감도" << pair.second << endl;
	// 		}
	// 	}
	// 	else
	// 	{
	// 		cout << "없는 이름의 NPC입니다." << endl;
	// 	}
	// }

#pragma endregion

#pragma region unordered set

	// unordered_set<const char*> unordered_set;
	// 
	// unordered_set.insert("Doran's Ring");
	// unordered_set.insert("Doran's Blade");
	// unordered_set.insert("Doran's Shield");
	// unordered_set.insert("Frozen Heart");
	// unordered_set.insert("Sterak’s Gage");
	// unordered_set.insert("Randuin’s Omen");
	// unordered_set.insert("Knight’s Vow");
	// unordered_set.insert("Essence Reaver");
	// unordered_set.insert("Liandry’s Torment");
	// 
	// cout << "Load Factor : " << unordered_set.load_factor() << endl;
	// cout << "Bucket Factor : " << unordered_set.bucket_count() << endl;
	// 
	// if (unordered_set.find("Doran's Shield") != unordered_set.end())
	// {
	// 	cout << " the data exists..." << endl;
	// }
	// else
	// {
	// 	cout << "that data does not exits..." << endl;
	// }
	// 
	// unordered_set.erase("Knight's Vow");
	// 
	// for (const char* element : unordered_set)
	// {
	// 	cout << element << endl;
	// }

#pragma endregion

#pragma region unordered map

	//    unordered_map<std::string, int> unordered_map;
	//    
	//    unordered_map["Potion"] = 2;
	//    unordered_map["Elixir"] = 1;
	//    unordered_map["Antidote"] = 2;
	//    unordered_map["Oil"] = 3;
	//    
	//    string name;
	//    
	//    std::cin >> name;
	//    
	//    if (unordered_map.find(name) != unordered_map.end() && unordered_map[name] > 0)
	//    {
	//        unordered_map[name]--;
	//    
	//        cout << name << " use " << endl;
	//    
	//        if (unordered_map[name] <= 0)
	//        {
	//            unordered_map.erase(name);
	//    
	//            cout << name << "All the " << name << " has been used" << endl;
	//        }
	//    }
	//    else
	//    {
	//        cout << "Doesn't Exist." << endl;
	//    }
	//    
	//    for (const auto & element : unordered_map)
	//    {
	//        cout << "Name : " << element.first << " - Quantity : " << element.second << endl;
	//    }

#pragma endregion

#pragma endregion


	return 0;
}