#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	unsigned short n = 0;
	cin >> n;
	unsigned int cost_r[n] = {0}, cost[n] = {0};
	unsigned long temp = 0, ans = 0;
	cin >> cost_r[0];
	cost[0] = (cost_r[0] % 100) +1;
	for(int i = 1; i < n; i++){
		cost_r[i] = (cost_r[i-1] * 6807 + 2831) % 201701;
		cost[i] = (cost_r[i] % 100) +1;
	}
	sort(cost, cost + n);
	for(int i = 0; i < n; i++){
		temp += cost[i];
		ans += temp;
	}
	cout << ans;
	return 0;
}

/*
建议学习的内容：

- gdb的学习，单步调试和断点
- 排序算法

*/