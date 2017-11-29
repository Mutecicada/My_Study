프로젝트 오일러 5번<br>

1 ~ 10 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 2520입니다.

그러면 1 ~ 20 사이의 어떤 수로도 나누어 떨어지는 가장 작은 수는 얼마입니까?
<br><br>

이번에는 정말 단순하게 풀었습니다. i를 1씩 증가시키면서 2 ~ 20까지 나누어 떨어지는지 전부 검사를 하였습니다. 아직은 다른 알고리즘이 생각나지를 않네요.

Python
```python
def check(num):
	for j in range(1,21):
		if num % j != 0:
			return False

	return True

i = 2
while True:
	if check(i):
		print(i)
		break
	i += 1
```

C
```c
#include <stdio.h>
#include <math.h>

int check(int number);

int main()
{
	int num = 21;
	
	while(1)
	{
		if(check(num))	break;
		num += 1;
	}
	
	printf("%d", num);
	
	return 0;
}

int check(int number)
{
	int i;
	
	for(i = 2; i < 21; i++)
	{
		if(number % i != 0)	return 0;
	}
	
	return 1;
}
```