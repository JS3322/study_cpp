//
// Created by js on 2023/07/22.
//

#ifndef PLC_USE_VARIABLE_H
#define PLC_USE_VARIABLE_H


class use_variable {
private:
    int m_Year;
    int m_Month;
    int m_Day;

public:
    Date(int year, int month, int day);

    void SetDate(int year, int month, int day);

    int GetYear() { return m_Year; }
    int GetMonth() { return m_Month; }
    int GetDat() { return m_Day; }

};


#endif //PLC_USE_VARIABLE_H
