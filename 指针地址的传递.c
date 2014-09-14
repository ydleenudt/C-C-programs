//在主函数中输入两个数给变量，把变量地址作为实参，传递给对应形参

int myadd(int *a, int *b)
{
  int sum;
  sum=*a+*b;
  return sum;
}

main()
{
  int x, y, z;
  printf("Enter x, y: ");
  scanf("%d %d", &x, &y);
  z=myadd(&x, &y);
  printf("%d + %d = %d\n", x, y, z);
}
