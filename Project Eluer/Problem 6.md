프로젝트 오일러 6번<br>
1부터 10까지 자연수를 각각 제곱해 더하면 다음과 같습니다 (제곱의 합).

12 + 22 + ... + 102 = 385
1부터 10을 먼저 더한 다음에 그 결과를 제곱하면 다음과 같습니다 (합의 제곱).

(1 + 2 + ... + 10)2 = 552 = 3025
따라서 1부터 10까지 자연수에 대해 "합의 제곱"과 "제곱의 합" 의 차이는 3025 - 385 = 2640 이 됩니다.

그러면 1부터 100까지 자연수에 대해 "합의 제곱"과 "제곱의 합"의 차이는 얼마입니까?<br><br>

이번 문제도 정말 단순하게 문제가 시키는 그대로 문제를 풀었습니다.<br>
sum1(value_1)은 그냥 1부터 100까지 다 더하고, sum2(value_2)는 제곱을 하여서 더했습니다. 그 후 차를 구한 것 밖에 없습니다.

Python
```python
sum1 = 0
sum2 = 0

for i in range(1,101):
	sum1 += i
	sum2 += i**2

print(sum1, sum2)

print(sum1**2 - sum2)
```

C
```c
#include <stdio.h>
#include <math.h>

int main()
{
	int value_1 = 0, value_2 = 0;
	int i = 0;
	
	for(i = 1; i <= 100; i++)
	{
		value_1 += i;
		value_2 += pow(i, 2);
	}
	
	printf("value_1 = %f, value_2 = %d\n", pow(value_1, 2), value_2);
	printf("%f", pow(value_1, 2) - value_2);
	
	return 0;
}
```