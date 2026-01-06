#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//정렬을 사용하면 안됨(인덱스 i, j에 대해 i ≠ j이면 arr[i] ≠ arr[j] 입니다.)
vector<int> solution(vector<int> arr) {
	vector<int> answer;
	int minvalu = *min_element(arr.begin(), arr.end());

	auto it = std::find(arr.begin(), arr.end(), minvalu);
	if (it != arr.end())
	{
		arr.erase(it);
	}
	if (arr.size() <= 0)
	{
		arr.push_back(-1);
	}
	answer = arr;
	return answer;
}

vector<int> solution(vector<int> arr) {
	if (arr.size() == 1) {
		return { -1 };
	}
	arr.erase(std::min_element(arr.begin(), arr.end()));
	return arr;
}
vector<int> solution(vector<int> arr) {
	if (arr.size() == 1) {
		arr[0] = -1;
		return arr;
	}

	int min = 0;
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] < arr[min])
			min = i;
	}
	arr.erase(arr.begin() + min);
	return arr;
}