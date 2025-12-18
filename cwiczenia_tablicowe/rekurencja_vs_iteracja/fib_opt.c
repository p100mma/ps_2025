#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//wersja naiwna + call stack wizualizacja
int F(int n,int depth){
for (int d=0; d<depth; d++) printf(" ");
printf("call F(%d)\n",n);
if (n<=1) return n;
return F(n-1, depth+1) + F(n-2, depth+1);
}

//wersja iteracyjna
int Fi(int n){
int prev2=0;
if (n==0) return prev2;
int prev1=1;
if (n==1) return prev1;
int new;
for (int i=2; i<=n; i++)
	{
	new= prev1 + prev2;
	prev2= prev1;
	prev1=new;
	}
return new;
}

//memoizacja + call stack wizualizacja
int Fm(int n, int* cache, int depth){
for (int d=0; d<depth; d++) printf(" ");
printf("call Fm(%d,cache)\n",n);
if (cache[n]!=-1) return cache[n];
if (n<=1)
{
  cache[n]= n; 
  return cache[n];
}

cache[n] = Fm(n-1,cache, depth+1) + Fm(n-2, cache, depth+1);
return cache[n]; 
}



int main(int argc, char* argv[]){
  //USAGE: ./fib_opt.exe [tryb] [n] (Windows + kompilacja z Codeblocks)
  //       ./fib_opt [tryb] [n] (Linux -- kompilacja: gcc fib_opt.c -o fib_opt)
  //[tryb] = F, Fi lub Fm
  //[n] = 0, 1,2, 3 ...

	if (strcmp(argv[1],"F")==0)
		printf("%d \n", F(atoi(argv[2]),1 ));
	if (strcmp(argv[1],"Fi")==0)
		printf("%d \n", Fi(atoi(argv[2])));
	if (strcmp(argv[1], "Fm")==0){
	 int n=atoi(argv[2]);
	int *cache= malloc(sizeof(int)*(n+1)); //dynamic array for cache , alokacja na "n+1" int-ow
	for (int i=0; i< n+1;i++ )
		cache[i]=-1; //nasza (moja?) funkcja oczekuje, ze oznaczamy puste m-ca jako -1
	printf("%d \n", Fm( n, cache, 1));	
	free(cache);
	}
	return 0;
}
