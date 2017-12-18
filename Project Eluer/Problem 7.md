프로젝트 오일러 7번
<br><br>
소수를 크기 순으로 나열하면 2, 3, 5, 7, 11, 13, ... 과 같이 됩니다.<br>
이 때 10,001번째의 소수를 구하세요.

숫자를 1씩 증가시켜 주며 소수인지 아닌지 판단하는 함수 Prime에 수를 집어 넣어서 소수 일 때, 카운트를 1씩 증가시키는 방식으로 문제를 풀었습니다. 1은 어차피 소수가 아니기 때문에 2부터 시작하였습니다.<br><br>
수학자들의 증명으로 어떤 수가 소수인지 아닌지 판단하기 위해서 그 수의 루트까지의 수를 나누어서 나누어 떨어지지 않으면 그 수가 소수입니다. 이 방법을 사용함으로서 반복을 굉장히 많이 줄일 수 있습니다.

Python
```python
global count
count = 0

def Prime(i):
	loop=round(i**0.5)
	for a in range(2,loop+1):
		if i % a == 0:
			return False
	return True
	
i = 2

while True:
	if Prime(i):
		count += 1
	if count == 10001:
		break
	i += 1

print(i)
```

C
```c
#include <stdio.h>
#include <math.h>

int prime(int number);

int main()
{
	int i = 2, count = 0;
	 
	while(count < 10001)
	{
		if(prime(i))
		{
			printf("%d\n", i);
			count++;
		}
		i++;	
	}
	
	printf("%d", i-1);
	
	return 0;
}

int prime(int number)
{
	int i, loop = sqrt(number);
	
	for(i = 2; i <= loop; i++)
	{
		if(number % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
```