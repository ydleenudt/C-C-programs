/*
函数名: getche 
功 能: 输入后立即从控制台取字符，不以回车为结束(带回显) 
用 法: int getche(void); 
*/
#include <stdio.h> 
#include <conio.h> 
int main(void) 
  { 
  char ch; 
  printf("Input a character:"); 
  ch = getche(); 
  printf("\nYou input a '%c'\n", ch); 
  return 0; 
  }
