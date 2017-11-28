프로젝트 오일러 4번<br>
앞에서부터 읽을 때나 뒤에서부터 읽을 때나 모양이 같은 수를 대칭수(palindrome)라고 부릅니다.

두 자리 수를 곱해 만들 수 있는 대칭수 중 가장 큰 수는 9009 (= 91 × 99) 입니다.

세 자리 수를 곱해 만들 수 있는 가장 큰 대칭수는 얼마입니까?<br><br>



Python
```python
max = 0

def check(num):
	string1 = str(num)
	string2 = string1[::-1]
	if string1 != string2:
		return False

	return True

for i in range(600, 1000):
	for j in range(600, 1000):
		if check(i*j):
			max = i*j
			break

print(max)
```

파이썬으로 푼 방법입니다. 반복문이 600부터 시작하는 이유는 별 이유없이 600정도 보단 크지 않을까 하고 그냥 한 것입니다. 그래도 답은 제대로 나옵니다.<br>
check함수에 i \* j를 넣어준 후 Ture가 리턴되면 max에 i \* j를 넣어줍니다.<br>
check 함수 안에서는 num(i \* j)를 문자열로 string1에 넣어주고 string2에 역으로 넣어 줍니다. 그 후 string1 과 string2가 같으면 True를 리턴해줍니다.

C
```c
#include <stdio.h>

int check(int value);

int main()
{
	int i, j, max = 0;
	
	for(i = 100; i < 1000; i++)
	{
		for(j = 100; j < 1000; j++)
		{
			if(check(i*j) == i*j && max < i*j)
			{
				max = i*j;
			}
		}
	}
	
	printf("%d", max);
		
	return 0;
}

int check(int value)
{
	int num1 = value, num2 = 0;
	
	while(num1)
	{
		num2 *= 10;
		num2 += num1%10;
		num1 /= 10;
	}
	
	return num2;
}
```
C언어도 비슷하게 풀었지만 check 함수 부분이 조금 다릅니다. num2에 10을 곱하고(처음에는 0) 그 후 num1 % 10 즉 num1의 1의 자리를 더 하고 num1을 10으로 나누어 줍니다. 이 과정을 num1이 0이 될 때까지 반복을 함으로서 거꾸로된 수를 만들 수 있습니다. 그래서 이 거꾸로 된 수가 원래 수와 같고, max보다 크면 max를 i \* j로 바꾸어 줍니다.