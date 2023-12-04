#pragma once

class Course
{
    private:
        std::string m_courseName;
        std::string m_courseCode;
        unsigned m_semester;
        float m_grade;

    public:
        Course(std::string = "NoInfo", std::string = "NoInfo", unsigned = 0, float = -1);
        void changeCourseName();
        void changeCourseCode();
        void changeCourseSemester();
        void changeCourseGrade();
        std::string getCourseName();
        std::string getCourseCode();
        unsigned getCourseSemester();
        float getCourseGrade();

};