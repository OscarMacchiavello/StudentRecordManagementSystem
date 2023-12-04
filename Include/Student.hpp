#pragma once

#include <iostream>
#include <vector>

#include <Course.hpp>

class Student
{
    private:
        std::string m_studentName;
        unsigned m_studentCode;
        unsigned m_numberOfCourses;
        std::vector<Course> m_coursesRecord;

    public:
        Student(std::string = "NoInfo", unsigned = 0, unsigned = 0, std::vector<Course> = {});  
        void changeStudentName();
        void changeStudentCode();
        void changeStudentNumberOfCourses();
        std::string getStudentName();
        unsigned getStudentCode();
        unsigned getStudentNumberOfCourses();
        void addCourse();
        void deleteCourse();
        void modifyCourse();
        void showStudentCourses();
        
};