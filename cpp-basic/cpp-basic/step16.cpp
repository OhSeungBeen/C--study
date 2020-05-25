//vector
//map
//iterator
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(void) {
	std::vector<int> vData;
	vData.push_back(10);
	vData.push_back(5);
	vData.push_back(30);
	vData.push_back(0);

	size_t len = vData.size();//postive value

	std::vector<int>::iterator iter;
	

	/*for (auto iter = vData.begin(); iter != vData.end(); ++iter)
	{
		*iter
	}*/

	auto i = "10.1f";


	struct stInfo
	{
		int height;
		int weight;
		int color;
	};
	std::vector<stInfo> vData1;
	stInfo _stinfo;
	_stinfo.color = 10;
	_stinfo.height = 180;
	_stinfo.weight = 70;
	vData1.push_back(_stinfo);

	//map
	//key, data
	std::map<string, string> person;
	string key = "key1";
	string desc = "data1";
	//key¿Í data½Ö »ğÀÔ
	person.insert(make_pair(key, desc));

	key = "key2";
	desc = "data2";
	person.insert(make_pair(key, desc));

	key = "key3";
	desc = "data3";
	person.insert(make_pair(key, desc));

	//key ÀÌ¿ëÇØ¼­ °ª²¨³»±â
	person.at("key1");
	person["key1"];

	return 0;
}