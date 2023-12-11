#include <string>

#include <Student.hpp>
#include <Course.hpp>

Student::Student(std::string sName, unsigned sCode, unsigned sNumOfCourses, std::vector<Course> sRecord) {
    m_studentName = sName;
    m_studentCode = sCode;
    m_numberOfCourses = sNumOfCourses;
    m_coursesRecord = sRecord;
}

void Student::changeStudentName() {
    std::cout << "\nEnter the new name of the student: ";
    std::getline(std::cin, m_studentName, '\n');
}

void Student::changeStudentCode() {
    std::cout << "\nEnter the new code of the student: ";
    std::cin >> m_studentCode;
}

void Student::changeStudentNumberOfCourses() {
    std::cout << "\nEnter the new number of courses to take: ";
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
    std::cout << "\nEnter the code or course name that you want to delete: ";
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
    std::cout << "\nEnter the code or course name that you want to modify: ";
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

void Student::storeStudentInfo() {
    std::string outputFile = std::to_string(m_studentCode) + ".txt";

    m_storageStudentInfo.open(outputFile.c_str());

    m_storageStudentInfo << "--------------------\n";
    m_storageStudentInfo << m_studentName << "\n";
    m_storageStudentInfo << m_studentCode << "\n";

    std::vector<Course>::iterator ptrCourse;
    for(ptrCourse = m_coursesRecord.begin(); ptrCourse < m_coursesRecord.end(); ptrCourse++) {
        m_storageStudentInfo << "\n";
        m_storageStudentInfo << (*ptrCourse).getCourseName() << "\n";
        m_storageStudentInfo << (*ptrCourse).getCourseCode() << "\n";
        m_storageStudentInfo << (*ptrCourse).getCourseSemester() << "\n";
        m_storageStudentInfo << (*ptrCourse).getCourseGrade() << "\n";
        m_storageStudentInfo << "\n";
    }

    m_storageStudentInfo.close();
}