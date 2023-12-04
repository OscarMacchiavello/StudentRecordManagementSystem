#include <Student.hpp>
#include <Course.hpp>

Student::Student(std::string sName, unsigned sCode, unsigned sNumOfCourses, std::vector<Course> sRecord) {
    m_studentName = sName;
    m_studentCode = sCode;
    m_numberOfCourses = sNumOfCourses;
    m_coursesRecord = sRecord;
}

void Student::changeStudentName() {
    std::cout << "\nIngrese el nuevo nombre del alumno: ";
    std::getline(std::cin, m_studentName, '\n');
}

void Student::changeStudentCode() {
    std::cout << "\nIngrese el nuevo codigo del alumno: ";
    std::cin >> m_studentCode;
}

void Student::changeStudentNumberOfCourses() {
    std::cout << "\nIngrese el nuevo numero de cursos a llevar: ";
    std::cin >> m_numberOfCourses;
}

std::string Student::getStudentName() {
    return m_studentName;
}

unsigned Student::getStudentCode() {
    return m_studentCode;
}

unsigned Student::getStudentNumberOfCourses() {
    return m_numberOfCourses;
}

void Student::addCourse() {
    m_numberOfCourses++;
    m_coursesRecord.resize(m_numberOfCourses);

    unsigned newCourseIndex = m_coursesRecord.size() - 1;
    m_coursesRecord[newCourseIndex].changeCourseName();
    m_coursesRecord[newCourseIndex].changeCourseCode();
    m_coursesRecord[newCourseIndex].changeCourseSemester();
    m_coursesRecord[newCourseIndex].changeCourseGrade();
}

void Student::deleteCourse() {
    std::string deletedCourse;
    std::cout << "Indique el codigo o nombre del curso que desea eliminar: ";
    std::getline(std::cin, deletedCourse, '\n');
    
    std::vector<Course>::iterator ptrCourse;
    for(ptrCourse = m_coursesRecord.begin(); ptrCourse < m_coursesRecord.end(); ptrCourse++) {
        if((*ptrCourse).getCourseName() == deletedCourse || (*ptrCourse).getCourseCode() == deletedCourse) {
            m_coursesRecord.erase(ptrCourse);
        }
    }
}

void Student::modifyCourse() {
    std::string modifiedCourse;
    std::cout << "\nIngresa el codigo o nombre del curso que desea eliminar: ";
    std::getline(std::cin, modifiedCourse, '\n');

    std::vector<Course>::iterator ptrCourse; 
    for(ptrCourse = m_coursesRecord.begin(); ptrCourse < m_coursesRecord.end(); ptrCourse++) {
        if((*ptrCourse).getCourseName() == modifiedCourse || (*ptrCourse).getCourseCode() == modifiedCourse) {
            (*ptrCourse).changeCourseName();
            (*ptrCourse).changeCourseCode();
            (*ptrCourse).changeCourseSemester();
            (*ptrCourse).changeCourseGrade();
        }
    }
}

void Student::showStudentCourses() {
    std::vector<Course>::iterator ptrCourse;
    for(ptrCourse = m_coursesRecord.begin(); ptrCourse < m_coursesRecord.end(); ptrCourse++) {
        std::cout << "\nName: " << (*ptrCourse).getCourseName();
        std::cout << "\nCode: " << (*ptrCourse).getCourseCode();
        std::cout << "\nSemester: " << (*ptrCourse).getCourseSemester();
        std::cout << "\nGrade: " << (*ptrCourse).getCourseGrade();
        std::cout << "\n\n";
    }
}