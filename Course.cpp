#include <iostream>

#include <Course.hpp>

Course::Course(std::string cName, std::string cCode, unsigned cSemester, float cGrade) {
    m_courseName = cName;
    m_courseCode = cCode;
    m_semester = cSemester;
    m_grade = cGrade;
}

void Course::changeCourseName() {
    std::cout << "\nIngrese el nuevo nombre del curso: ";
    std::getline(std::cin, m_courseName, '\n');
}

void Course::changeCourseCode() {
    std::cout << "\nIngrese el nuevo codigo del curso: ";
    std::getline(std::cin, m_courseCode, '\n');
}

void Course::changeCourseSemester() {
    std::cout << "\nIngrese el semestre al que pertenece el curso: ";
    std::cin >> m_semester;
}

void Course::changeCourseGrade() {
    std::cout << "\nIngrese la nueva nota del curso: ";
    std::cin >> m_grade;
}

std::string Course::getCourseName() {
    return m_courseName;
}

std::string Course::getCourseCode() {
    return m_courseCode;
}

unsigned Course::getCourseSemester() {
    return m_semester;
}

float Course::getCourseGrade() {
    return m_grade;
}