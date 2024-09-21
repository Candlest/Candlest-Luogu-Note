#include <cstdio>

int main(){
	unsigned int n, ans =0;
	scanf("%d", &n);
	for(int i =1; i<=n/2+1;i++){
		// 一半以下
		if(n%i == 0){
			ans = i;
		}
	}
	printf("%d", ans);
	return 0;
}

/*
#### 分解质因数
最优解[https://www.luogu.com.cn/record/163541460]
a=i, b=n/i，若 a*b=n 则判断可以还原
*/