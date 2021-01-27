#include "main.h"
#include "ariph.h"
#include "utils.h"
//----------------------------------------------
/*
struct student
{
  char nm[60];
  unsigned char age;
  unsigned char course;
};
*/
typedef struct
{
  char nm[60];
  unsigned char age;
  unsigned char course;
} student;
//----------------------------------------------
unsigned char student_counter=0;
//----------------------------------------------
student addStudent (char ch[], unsigned int cr, unsigned int ag);
//----------------------------------------------
typedef unsigned int my_int32;
//----------------------------------------------
float res;
char str1[30] = {};
float yf, zf;
//----------------------------------------------
int main()
{
  /*
  student st1;
  strcpy(st1.nm, "Иванов Иван Иванович");
  st1.age = 18;
  st1.course = 2;
  printf("%s,\t%d курс,\t%d лет", st1.nm, st1.course, st1.age);
  printf("\n");
  strcpy(st1.nm, "Петров Петр Петрович");
  st1.age = 19;
  st1.course = 3;
  printf("%s,\t%d курс,\t%d лет", st1.nm, st1.course, st1.age);
*/
  student st[20];
/*
  strcpy(st[1].nm, "Иванов Иван Иванович");
  st[1].age = 18;
  st[1].course = 2;
  strcpy(st[2].nm, "Петров Петр Петрович");
  st[2].age = 19;
  st[2].course = 3;
  strcpy(st[3].nm, "Сидоров Александр Петрович");
  st[3].age = 19;
  st[3].course = 3;
  for(int i=1;i<=3;i++)
  printf("%-50s%d курс\t%d лет,\n", st[i].nm, st[i].course, st[i].age);
*/
  if(student_counter<20) st[student_counter] = addStudent("Иванов Иван Иванович", 2, 18);
  if(student_counter<20) st[student_counter] = addStudent("Петров Петр Иванович", 1, 17);
  if(student_counter<20) st[student_counter] = addStudent("Сидоров Александр Петрович", 4, 22);
  if(student_counter<20) st[student_counter] = addStudent("Попов Иван Сергеевич", 3, 22);
  if(student_counter<20) st[student_counter] = addStudent("Васильев Федор Николаевич", 5, 24);
  if(student_counter<20) st[student_counter] = addStudent("Саблин Виктор Петрович", 1, 18);
  if(student_counter<20) st[student_counter] = addStudent("Веселкин Алексей Алексеевич", 2, 18);
  if(student_counter<20) st[student_counter] = addStudent("Трухин Сергей Сергеевич", 5, 23);
  for(int i=0; i<student_counter; i++)
  printf("%-30s%d курс\t%d лет\n", st[i].nm, st[i].course, st[i].age);

  return 0; //Return an integer from a function
}
//--------------------------------------------------------
student addStudent (char ch[], unsigned int cr, unsigned int ag)
{
  student res_st;
  strcpy(res_st.nm, ch);
  res_st.course = cr;
  res_st.age = ag;
  student_counter++;
  return res_st;
}
//--------------------------------------------------------
