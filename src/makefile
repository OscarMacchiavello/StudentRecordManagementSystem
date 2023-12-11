all: compile link

compile:
	g++ -std=c++17 -c Course.cpp Student.cpp main.cpp -I"..\include"

link:
	g++ main.o Course.o Student.o -o StudentRecordSystem -L".\src"