//
// Created by js on 2023/07/22.
//

#include "use_variable.h"


// Date 클래스의 생성자
Date::Date(int year, int month, int day)
{
    SetDate(year, month, day);
}

// Date 클래스의 멤버 함수
void Date::SetDate(int year, int month, int day)
{
    m_Month = month;
    m_Day = day;
    m_Year = year;
}

int use_variable () {
    int nValue = 5; // 복사 초기화 : copy initialization
    int nValue_direct(5); //직접 초기화(direct initialization)
    int nValue_uniform{}; //복사 초기화 및 직접 초기화는 일부 타입의 변수에 대해서만 작동. 모든 데이터 타입에서 작동하는 단일 초기화 메커니즘을 제공하기 위해 C++ 11은 유니폼 초기화(uniform initialization)라는 새로운 형태의 초기화 메커니즘 추가.
    return 0;
}
