//
//  Handout4.hpp
//  Homework
//
//  Created by Bastien Genova on 03/11/2026.
//

#ifndef Handout4_hpp
#define Handout4_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
class Courses{
private:
    std::string instructor;
    int id;
    int roomNr;
public:
    std::string get_instructor(){
        return instructor;
    }
    int get_id(){
        return id;
    }
    int get_room(){
        return roomNr;
    }
    Courses();
    Courses(int i, std::string ins, int r);
    
    
};

class Student{
    private :
    std::string name;
    int number;
    int count;
    Courses course[10];
    public:
    std::string get_name(){
            return name;
        }
    void set_name(std::string new_name){
        name = new_name;
    }
    int get_number(){
        return number;
    }
    void set_number(int new_number){
        number= new_number;
    }
    Courses* get_course(){
        return course;
    }
    void set_course(Courses new_course[10]){
        for(int i= 0;i<10;i++){
            course[i] = new_course[i];
        }
    }
    Student(std::string name,int number,Courses course[10]);
    Student(std::string name,int number);
    void add_course(Courses c);
    bool attends(int courseId);
    
        
};
void application();

#endif /* Handout4_hpp */
