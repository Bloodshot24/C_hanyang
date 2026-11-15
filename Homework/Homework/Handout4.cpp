//
//  Handout4.cpp
//  Homework
//
//  Created by Bastien Genova on 03/11/2026.
//

#include "Handout4.hpp"
Student::Student(std::string n,int num,Courses c[10]){
    name = n;
    number= num;
    for(int i = 0; i < 10; i++){
        course[i] = c[i];
    }
    count=0;
}
Student::Student(std::string n,int num){
    name=n;
    number=num;
  
}
void Student::add_course(Courses c) {
    if (count < 10) course[count++] = c;
}
bool Student::attends(int courseId) {
    for (int i = 0; i < count; i++){
        if (course[i].get_id() == courseId) return true;
    }
    return false;
}
Courses::Courses(){
    id=0;
    roomNr=0;
    instructor="";
}

Courses::Courses(int i,std::string instruc,int room){
    id = i;
    instructor = instruc;
    roomNr=room;
}


void query(std::vector<Student>& students, int courseId) {
    std::cout << "Etudiants of course " << courseId << " :\n";
    for (size_t i = 0; i < students.size(); i++)
        if (students[i].attends(courseId))
            std::cout << "  " << students[i].get_name()
                      << " (" << students[i].get_number() << ")\n";
}




std::vector<Student> application(){
    Courses math(101, "Dr Martin", 12);
     Courses info(102, "Dr Lee", 5);
  
     std::vector<Student> students;
     students.push_back(Student("Alice", 1));
     students.push_back(Student("Bob", 2));
     students.push_back(Student("Chloe", 3));
  
     students[0].add_course(math);
     students[0].add_course(info);
     students[1].add_course(math);
     students[2].add_course(info);
    return students;
}

void Homework4(){
    std::vector<Student> students = application();
    query(students,101);
}
