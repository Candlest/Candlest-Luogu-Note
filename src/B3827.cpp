#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Object{
	unsigned short id;
	unsigned int score;
};

bool cmp(Object a, Object b){
	return a.score > b.score;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	unsigned short n, k;
	cin >> n >> k;
	unsigned int temp_score;
	vector<Object> obj(n);
	for(int i = 0; i < n; i++){
		temp_score = 0;
		obj[i].id = i;
		for(int j = 0; j < k; j++){
			cin >> temp_score;
			obj[i].score += temp_score;
		}
	}
	stable_sort(obj.begin(), obj.end(), cmp);
	cout << obj[0].id + 1 << '\n' << obj[1].id + 1;
	return 0;
}

/*
这是一道简单的结构体排序题目，使用STL里面的 `vector` 和 `stable_sort` 。
*/