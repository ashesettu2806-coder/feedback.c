#include<stdio.h>
int main()
{
FILE*fp;
char ch;
fp=fopen("data.txt","w");
fprintf(fp,"C is a popular programming language, It is used to develop software and applications, C is a simple and powerful language, It helps us to improve logical thinking, C programming is the foundation of many other programming languages.");
fclose(fp);
fp=fopen("data.txt", "r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
fp=fopen("data.txt", "a");
fprintf(fp,"Our C programming staff teaches us very well, They explain concepts in a simple way, They are very helpful and supportive, They encourage us to improve our coding skills, We are happy to learn C programming from them.");
fclose(fp);
return 0;
}