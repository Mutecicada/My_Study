프로젝트 오일러 8번
<br><br>
다음은 연속된 1000자리 숫자입니다 (읽기 좋게 50자리씩 잘라놓음).

73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450

여기서 붉게 표시된 71112의 경우 7, 1, 1, 1, 2 각 숫자를 모두 곱하면 14가 됩니다.

이런 식으로 맨 처음 (7 × 3 × 1 × 6 × 7 = 882) 부터 맨 끝 (6 × 3 × 4 × 5 × 0 = 0) 까지 5자리 숫자들의 곱을 구할 수 있습니다.
이렇게 구할 수 있는 5자리 숫자의 곱 중에서 가장 큰 값은 얼마입니까?



**Python**
우선 저 숫자들을 다 받아서 하나의 문자열로 붙혀서 저장을 하였습니다.
그리고 i를 1씩 증가시키면서 i + 5까지의 곱을 구해서 max보다 큰 것을 찾아주는 방법으로 풀었습니다.
```python
#파일 불러오기
with open("8.data.txt") as file_object:
    lines = file_object.readlines()

#라인단위 리스트를 하나의 문자열로 합치기
string=''
for line in lines:
    string=string+line.rstrip()
print(string)

max = 0
for i in range(0, len(string) - 4):
	product = 1
	
	for j in range(i, i+5):
		product = product * int(string[j])
	
	if product > max:
		max = product

print(max)
```


**C**

노가다로 전부 배열에 넣어도 문제를 풀 수 있지만 그러면 보기가 지저분해 질 것 같고 파일 입출력도 다시 해보는 김해서 메모장에 데이터를 저장한 후 문제를 풀었습니다.<br>
strcat함수를 이용하여서 풀었습니다. 최대값을 구하는 과정은 python 코드와 다를 것이 없습니다.
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE *ifp;
	char arr[1001], str[51];
	int i, j, max = 0;
	int value = 1;
	 
	ifp = fopen("8.data.txt","r");
	
	if(ifp == NULL)
	{
		printf("파일을 열지 못했습니다..");
		return 1;
	}
	
	while(feof(ifp) == 0)
	{
		fscanf(ifp, "%s", str);
		strcat(arr, str);									 
	}
	
	
	for(i = 0; i < 1000; i++)
	{
		value = 1;
		for(j = 0; j < 5; j++)
		{
			value = value * (arr[i+j]-48);
		}
		
		if(value > max)
		{
			max = value;
		}
	}
	
	printf("%d", max);
	
	
	return 0;
}
```

