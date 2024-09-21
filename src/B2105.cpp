#include <iostream>

int main(){
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	unsigned short n, m, k;
	std::cin >> n >> m >> k;
	short A[n][m], B[m][k];
	int temp;
	for(int i = 0; i < n; i++){
		for(int j =0; j< m; j++){
			std::cin >> A[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j =0; j< k; j++){
			std::cin >> B[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j=0; j < k; j++){
			//C[i][j]
			temp = 0;
			for(int ii = 0; ii < m;ii++){
				temp += A[i][ii] * B[ii][j];
			}
			std::cout << temp;
			if(j != k-1)
				std::cout << ' ';
		}
		if(i != n-1)
			std::cout << '\n';
	}
	return 0;
}

/*
#### IO优化
```C++
std::cin.tie(0); // 关闭 tie
std::ios::sync_with_stdio(false); // 不和 C 的 IO 混用
```
#### 数组初始化
```C++
array[m][n] = {0}; // 初始化数组
```
*/