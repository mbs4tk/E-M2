# include <stdio.h>

int main() {
float length;
char aString[11];
printf("Enter the length of each side\n");
scanf("%f",&length);
printf("Enter a string of text (10 characters max)\n");
scanf("%s",&aString);
printf("string: %s, area: %f\n",aString,length*length);
return 0;
}

