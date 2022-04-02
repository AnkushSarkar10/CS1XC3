/**
 * @file course.h
 */

#include "student.h"
#include <stdbool.h>
 
/**
 * @brief The Course struct consists of its name, code, enrolled students, and the total number of students.
 */
typedef struct _course 
{
  char name[100];
  char code[10];
  Student *students;
  int total_students;
} Course;

void enroll_student(Course *course, Student *student);
void print_course(Course *course);
Student *top_student(Course* course);
Student *passing(Course* course, int *total_passing);


