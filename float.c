#include <stdio.h> //실수값의 계산에서 CPU의 오차 범위


int countObvious(int n){
	int same = 0;
	for (int x=1; x<=n; ++x){
		double y =1.0 / x;
		if(y * x== 1.0)
			++same;
	}
	return same;
}

int main(){
	printf("%d\n",countObvious(100));
}