#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdbool.h>
bool sohoanhao(int n){
	int sum=0;
	int i;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		return true;
	}
	return false;
}

int main(){
	int i;
	long long n;
	scanf("%lld",&n);
	if(n<9000){
	for(i=1;i<n;i++){
		if(sohoanhao(i)){
			printf("%d  ",i);
		}
		else 
		continue;
	}}
	if(n>=9000){
	for(i=1;i<9000;i++){
		if(sohoanhao(i)){
			printf("%d  ",i);
		}
		else 
		continue;
	}}
	return 0;
}

