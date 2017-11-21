프로젝트 오일러 1번<br>
10보다 작은 자연수 중에서 3 또는 5의 배수는 3, 5, 6, 9 이고, 이것을 모두 더하면 23입니다.

1000보다 작은 자연수 중에서 3 또는 5의 배수를 모두 더하면 얼마일까요?

간단하게 1부터 999까지의 숫자를 전부 검사하여서 3의 배수이거나 5의 배수이면 더 해주는 방법으로 풀었습니다.<br><br>
Python
```python
sum = 0

for i in range (1, 1000):
	if(i % 3 == 0 or i %5 == 0):
		sum += i
print(sum)
```
C
```
#include <stdio.h>

int main()
{
	int i, sum = 0;
	
	for(i = 0; i < 1000; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	
	printf("%d", sum);
	
	return 0;
}

```