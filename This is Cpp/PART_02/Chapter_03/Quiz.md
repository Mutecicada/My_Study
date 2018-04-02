**1. 클래스 접근 제어 지시자 중에서 privat이 의미하는 것은 무엇인지 답하세요.**  
답 : private는 외부로 부터의 모든 접근을 허용하지 않아서 오직 클래스 안에서만 private에 접근할 수 있고, 접근 제어 지시자를 지정하지 않으면 기본으로 priavete로 지정된다.

**2. 클래스 인스턴스가 생성될 때 자동으로 호출되는 함수는 무엇이며, 함수 원형의 가장 큰 외형상 특징은 무엇인지 답하세요.**  
답 : 생성자  
함수의 이름이 클래스의 이름과 동일하다.

**3. 다음 코드에서 'm_nData(nParam)이 속한 부분을 무엇이라 부르는지 답하세요.**
```C++
CTest(int nParam)
    : m_nData(nParam)
    {

    }
```
초기화 목록

**4. 다음 코드에서 잘못된 점을 찾아 수정하세요.**  
Before
```C++
class CRefTest
{
    public:
    CRefTest(int &rParam)
    {
        m_nData = rParam;
    }

    int GetData(void) { return m_nData; }

    private:
        int &m_nData;
};
```

After
```C++
class CRefTest
{
    public:
    CRefTest(int &rParam) : m_nData(rParam) {}

    int GetData(void) { return m_nData; }

    private:
        int &m_nData;
};
```

**5. 메서드 함수 내부에서 실제 클래스 인스턴스의 주소를 가리키는 포인터의는 무엇일까요?**  
답 : this

**6. 상수형 메서드에서 할 수 없는 일은 무엇인지 답하세요**  
답 : 상수형 메서드는 데이터를 읽을 수는 있지만 쓸 수는 없다.

**7. 정적 멤버에서 이것을 사용할 수 없다. 이것은?**  
답 : this 포인터를 사용할 수 없다.