#include <iostream>
#include <vector>
using namespace std;

//������ִ����������鳤��һ���������֣������������0
int main()
{
	vector<int> v{1,2,3,2,2,3,5,4,2};
	if (v.empty())
		return 0;
	int result = v[0];
	int times = 1;//����
	for (int i = 1; i < v.size(); ++i) {
		if (times == 0) {
			result = v[i];
			times = 1;
		}
		else if (v[i] == result) {
			times++;
		}
		else {
			times--;
		}
	}
	int times = 0;
	for (int i = 0; i < v.size(); ++i) {
		if (result == v[i])
			times++;
	}
	if (times > (v.size() / 2))
		return result;
	return 0;
}