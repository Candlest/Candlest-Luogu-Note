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
# 最优解
from https://www.luogu.com.cn/record/163541460

a=i, b=n/i

若a*b=n则输出b <- 判断可以还原
*/