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
  unsigned int a[10] = {0x33333333, 0x44444444, 0x55555555, 0x66666666, 0x77777777, \
                        0x88888888, 0x99999999, 0xAAAAAAAA, 0xBBBBBBBB, 0xCCCCCCCC};

  printf("Element addresses a\n");
    for(int i=0; i<10;i++)
    {
      printf("%08X ",(unsigned int) &a[i]);
    }
    printf("\nValue a\n");
    for(int i=0; i<10;i++)
    {
      printf("%08X ",a[i]);
    }
  printf("\n--------------------------------------------\n");
    unsigned int *p0_a, *p5_a;
    p0_a = &a[0];
    p5_a = &a[5];
    printf("Value *p0_a is %08X\tp0_a is %08X\n", *p0_a, (unsigned int) p0_a);
    printf("Value *p5_a is %08X\tp5_a is %08X\n", *p5_a, (unsigned int) p5_a);
  printf("\n--------------------------------------------\n");
    p0_a++; p5_a++;
    printf("p0_a++; p5_a++;\n");
    printf("Value *p0_a is %08X\tp0_a is %08X\n", *p0_a, (unsigned int) p0_a);
    printf("Value *p5_a is %08X\tp5_a is %08X\n", *p5_a, (unsigned int) p5_a);
  printf("\n--------------------------------------------\n");
    p0_a--; p5_a--;
    printf("p0_a--; p5_a--;\n");
    printf("Value *p0_a is %08X\tp0_a is %08X\n", *p0_a, (unsigned int) p0_a);
    printf("Value *p5_a is %08X\tp5_a is %08X\n", *p5_a, (unsigned int) p5_a);
  printf("\n--------------------------------------------\n");
    p0_a+=4; p5_a+=2;
     printf("p0_a+=4; p5_a+=2;\n");
     printf("Value *p0_a is %08X\tp0_a is %08X\n", *p0_a, (unsigned int) p0_a);
     printf("Value *p5_a is %08X\tp5_a is %08X\n", *p5_a, (unsigned int) p5_a);
  printf("\n--------------------------------------------\n");
    p0_a-=4; p5_a-=2;
    printf("p0_a-=4; p5_a-=2;\n");
    printf("Value *p0_a is %08X\tp0_a is %08X\n", *p0_a, (unsigned int) p0_a);
    printf("Value *p5_a is %08X\tp5_a is %08X\n", *p5_a, (unsigned int) p5_a);
  printf("\n--------------------------------------------\n");
  unsigned int n=p5_a-p0_a;
  printf("Value n is %u\n",n);
  printf("\n--------------------------------------------\n");
  /*
  n=*++p5_a;// сначала инкремент адреса потом его забираем и присваиваем в n
  printf("n is %08X\n", n);
  printf("Value *p5_a is %08X\tp5_a is %08X\n", *p5_a, (unsigned int) p5_a);
  */
  /*
  n=++*p5_a;// забираем значение, а потом его увеличиваем +1 и присваиваем n
  printf("n is %08X\n", n);
  printf("Value *p5_a is %08X\tp5_a is %08X\n", *p5_a, (unsigned int) p5_a);
  */
  /*
  n=*p5_a++;// сначала забрать значение и присваиваем в n потом увеличить адрес
  printf("n is %08X\n", n);
  printf("Value *p5_a is %08X\tp5_a is %08X\n", *p5_a, (unsigned int) p5_a);
  */
  /*
  n=(*p5_a)++;// сначала забрали значние по адресу  и присвоили в n , потом увеличили начение по адрессу указателя
  printf("n is %08X\n", n);
  printf("Value *p5_a is %08X\tp5_a is %08X\n", *p5_a, (unsigned int) p5_a);
  */
  unsigned int b[4] = {0x00112233, 0x44556677, 0x8899AABB, 0xCCDDEEFF};
    printf("Element addresses b\n");
    for(int i=0; i<4;i++)
    {
      printf("%08X ",(unsigned int) &b[i]);
    }
    printf("\nValue b\n");
    for(int i=0; i<4;i++)
    {
      printf("%08X ",b[i]);
    }
  printf("\n--------------------------------------------\n");
    unsigned int *p0_b = &b[0], *p2_b = &b[2];
    printf("Value *p0_b is %08X\tp0_a is %08X\n", *p0_b, (unsigned int) p0_b);
    printf("Value *p2_b is %08X\tp5_a is %08X\n", *p2_b, (unsigned int) p2_b);
  printf("\n--------------------------------------------\n");
    printf("Value p0_b[0] is %08X\n", p0_b[0]);
    printf("Value p0_b[1] is %08X\n", p0_b[1]);
    printf("Value p2_b[0] is %08X\n", p2_b[0]);
    printf("Value p2_b[1] is %08X\n", p2_b[1]);
    printf("Value p2_b[2] is %08X\n", p2_b[2]);// вышли за границу

    printf("Value p2_b[-1] is %08X\n", p2_b[-1]);
    printf("Value p0_b[-1] is %08X\n", p0_b[-1]); //вышли за границу
  printf("\n--------------------------------------------\n");
    printf("Value *b is %08X\n", *b);
    printf("Value *(b+2) is %08X\n", *(b+2));
    printf("Value (unsigned int)(unsigned char*)b is %08X\n", (unsigned int)(unsigned char*)b);
    printf("Value *(unsigned char*)b is %02X\n", *(unsigned char*)b);
    printf("Value *(unsigned char*)b is %02X\n", *(unsigned char*)(b+1));
    printf("Value *(unsigned char*)b is %02X\n", *(unsigned char*)(b+2));

    printf("Value *(((unsigned char*)b)+1) is %02X\n", *(((unsigned char*)b)+1));
    printf("Value *(((unsigned char*)b)+2) is %02X\n", *(((unsigned char*)b)+2));
    printf("Value *(((unsigned char*)b)+3) is %02X\n", *(((unsigned char*)b)+3));

  printf("\n--------------------------------------------\n");
    printf("bytes of b\n");
    printf("0x%08X\n", (unsigned int)&b[0]);
    for(int i=0; i<16; i++)
    {
      printf("%02X ", (unsigned int)(((unsigned char*)b)+i)&0x000000FF);
    }
    printf("\n");
    for(int i=0; i<16; i++)
    {
      printf("%02X ", *(((unsigned char*)b)+i));
    }
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
