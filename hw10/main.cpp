#include "Pattern.h"
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>


using namespace std;
int main()
{

	std::ifstream in("training text.txt");
	std::string buffer;

	int length = 3;
	int n = 0;

	while (in.good()) {

		std::string word;
		in >> word;

		for (int i = 0; i < word.length(); ++i) {
			char c = word[i];
			if (c == '"' || c == '=' || c == '[' || c == '_') {
				word.erase(i);
				--i;
			}
		}
		buffer += word + " ";
	}
	in.close();
	
	std::unordered_map<std::string, int> counts;
	

	for (int i = 0; i < buffer.length() - length; ++i) {
		
		std::string s;
		
		s = buffer.substr(i, length);
		
		if (counts.find(s) == counts.end()) {
			counts[s] = 1;
		}
		else {
			counts[s] += 1;
		}
	}
	double total = 0.0;
	std::unordered_map<std::string, std::vector<Pattern*>> lut;
	for (auto elem : counts) {
		const std::string& s = elem.first;
		int num = elem.second;

		std::string prefix = s.substr(0, length-1);
		
		if (lut.find(prefix) == lut.end()) {
			lut[prefix] = std::vector<Pattern*>();
			}
		
		lut[prefix].push_back(new Pattern(s, num));
		total += num;
		
	}
	double prob = 0.0;
	double totalCounts = 0.0;

	for (auto elem : lut) {
		const std::string& prefix = elem.first;
		std::vector<Pattern*> vect = elem.second;

		for (auto count : vect) {
			std::string vString = count->getString();
			
			totalCounts +=
		}
		

		for (Pattern : std::vector<Pattern>()) {

		}
	}
}

