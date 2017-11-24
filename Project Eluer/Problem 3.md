프로젝트 오일러 3번<br><br>
어떤 수를 소수의 곱으로만 나타내는 것을 소인수분해라 하고, 이 소수들을 그 수의 소인수라고 합니다.<br>
예를 들면 13195의 소인수는 5, 7, 13, 29 입니다.

600851475143의 소인수 중에서 가장 큰 수를 구하세요.
<br><br>
먼저 600851475143가 2로 나누어떨어지지 않을 때 까지, 2로 나누어 주어서 숫자를 작게 만들어 주고 600851475143의 인수 중에서 2의 제곱을 전부 지워줍니다.<br>
이제 i를 3부터 2씩 증가시키면서 num(value)과 나누어 떨어지지 않을 때까지 나누어 줍니다. 그러나 i가 num보다 커지면 break 시켜 줍니다.

Python
```python
num = 600851475143

while num % 2 == 0:
	num = num / 2

for i in range(3, num, 2):
	while num % i == 0:
		num = num / i
	if i > num:
		break
		
print(i)
```
C
```c
#include <stdio.h>
#include <math.h>

int main()
{
	long long int value = 600851475143;
	int i;
	
	while(value % 2 == 0)
	{
		value /= 2;
	}
	
	for(i = 3; i < value; i += 2)
	{
		while(value % i == 0)	value /= i;
	}
	
	printf("value = %d, %d", value, i);
	
	return 0;
}
```