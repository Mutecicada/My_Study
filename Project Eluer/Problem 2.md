프로젝트 오일러 2번

피보나치 수열의 각 항은 바로 앞의 항 두 개를 더한 것이 됩니다. 1과 2로 시작하는 경우 이 수열은 아래와 같습니다.

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...<br>
짝수이면서 4백만 이하인 모든 항을 더하면 얼마가 됩니까?
<br><br>
피보나치 수를 쭉 구하면서 짝수이면 전부 더해 주었습니다.<br>
피보나치 수를 만드는 방법은 앞에 두 수를 더한 후, 더 할 두 수를 각각 자신의 다음 피보나치 수로 만들어서 해결하였습니다.




Python
```python
sum = 0
a = 1
b = 1
i = 0

while i<4000000:
	i = a+b
	if i % 2 == 0:
		sum += i
	b = a
	a = i
	print(i)

print("sum =",sum)
```
C
```c
#include <stdio.h>

int main()
{
	int i, value = 0;
	int f1 = 1, f2 = 0, f3 = 0;
	

	while(f3 <= 4000000)
	{
		f3 = f1 + f2;
		if(f3 %2 == 0) value += f3;
		f2 = f1;
		f1 = f3;
	}
	
	printf("%d", value);
	
	return 0;
}

```