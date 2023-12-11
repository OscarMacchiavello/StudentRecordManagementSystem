#include <iostream>

#include <Course.hpp>

Course::Course(std::string cName, std::string cCode, unsigned cSemester, float cGrade) {
    m_courseName = cName;
    m_courseCode = cCode;
    m_semester = cSemester;
    m_grade = cGrade;
}

void Course::changeCourseName() {
    std::cout << "\nEnter the new name of the course: ";
    std::getline(std::cin, m_courseName, '\n');
}

void Course::changeCourseCode() {
    std::cout << "\nEnter the new code of the course: ";
    std::getline(std::cin, m_courseCode, '\n');
}

void Course::changeCourseSemester() {
    std::cout << "\nEnter the semester to which the course belongs: ";
    std::cin >> m_semester;
}

void Course::changeCourseGrade() {
    std::cout << "\nEnter the new grade of the course: ";
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