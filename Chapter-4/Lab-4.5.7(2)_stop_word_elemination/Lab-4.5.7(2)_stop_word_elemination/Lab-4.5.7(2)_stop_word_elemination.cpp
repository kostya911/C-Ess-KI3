#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
string toUppper(string str)
{
	str[0]-=32;
	return str;
}
void erase(string &sentence, string str)
{
	bool isReplaced;
	string upStr = toUppper(str);
	do{
		isReplaced = false;
		if(sentence.find(str)!=string::npos)
		{
			sentence.replace(sentence.find(str),str.length()+1,"");
			isReplaced = true;
		}
		else if(sentence.find(upStr)!=string::npos)
		{
			sentence.replace(sentence.find(upStr),upStr.length()+1,"");
			isReplaced = true;
		}
	}while(isReplaced);

}
int main()
{
	std::string stop_words ;
	std::getline(std::cin, stop_words);
	std::string sentence ;
	std::getline(std::cin, sentence);

	string sw;
	int check = 0;
	do
	{
		check = stop_words.find(",");
		sw = stop_words.substr(0,stop_words.find(","));
		erase(sentence,sw);
		stop_words = stop_words.substr(stop_words.find(",")+1);//dont need the word we have used/+1 to not capture comma
	}while(check != string::npos);

	cout << sentence<<endl;

	system("pause");
	return 0;
}