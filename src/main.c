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
  strcpy(st1.nm, "������ ���� ��������");
  st1.age = 18;
  st1.course = 2;
  printf("%s,\t%d ����,\t%d ���", st1.nm, st1.course, st1.age);
  printf("\n");
  strcpy(st1.nm, "������ ���� ��������");
  st1.age = 19;
  st1.course = 3;
  printf("%s,\t%d ����,\t%d ���", st1.nm, st1.course, st1.age);
*/
  student st[20];
/*
  strcpy(st[1].nm, "������ ���� ��������");
  st[1].age = 18;
  st[1].course = 2;
  strcpy(st[2].nm, "������ ���� ��������");
  st[2].age = 19;
  st[2].course = 3;
  strcpy(st[3].nm, "������� ��������� ��������");
  st[3].age = 19;
  st[3].course = 3;
  for(int i=1;i<=3;i++)
  printf("%-50s%d ����\t%d ���,\n", st[i].nm, st[i].course, st[i].age);
*/
  if(student_counter<20) st[student_counter] = addStudent("������ ���� ��������", 2, 18);
  if(student_counter<20) st[student_counter] = addStudent("������ ���� ��������", 1, 17);
  if(student_counter<20) st[student_counter] = addStudent("������� ��������� ��������", 4, 22);
  if(student_counter<20) st[student_counter] = addStudent("����� ���� ���������", 3, 22);
  if(student_counter<20) st[student_counter] = addStudent("�������� ����� ����������", 5, 24);
  if(student_counter<20) st[student_counter] = addStudent("������ ������ ��������", 1, 18);
  if(student_counter<20) st[student_counter] = addStudent("�������� ������� ����������", 2, 18);
  if(student_counter<20) st[student_counter] = addStudent("������ ������ ���������", 5, 23);
  for(int i=0; i<student_counter; i++)
  printf("%-30s%d ����\t%d ���\n", st[i].nm, st[i].course, st[i].age);

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
