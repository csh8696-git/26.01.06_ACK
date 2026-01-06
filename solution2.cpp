#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	if (s.length() % 2 != 0)
	{
		answer += s[s.length() / 2];
	}
	else
	{
		answer += s[s.length() / 2 - 1];
		answer += s[s.length() / 2];
	}
	return answer;
}

string solution(string s) {
	return s.length() & 1 ? s.substr(s.length() * 0.5, 1) : s.substr(s.length() * 0.5 - 1, 2);
}
string solution(string s) {
	int len = s.length();
	if (len % 2 == 0) {
		return s.substr(len / 2 - 1, 2);
	}
	else {
		return s.substr(len / 2, 1);
	}
}
string solution(string s) {
	int size = s.size();
	string answer = s.substr((size - 1) / 2, (size - 1) % 2 + 1);
	return answer;
}