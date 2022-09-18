/*
#include<stdio.h>

int hello();

int main(){


  hello();
    int age =22;
    int *ptr= &age;
    int _age= *ptr;

    printf("%p \t%p\t%p\n", age, *ptr, _age);
    printf("%p \t%p\t%p\n", age, *ptr, _age);
    printf("%p \t%p\t%p\n", *(&age), *ptr, _age);


 float price =100.00;
 float *ptr = &price;
 float **pptr= &ptr;
 
    return 0;
}

int hello(){
  printf("Hello!");
  return 0;
}


/*
#include<stdio.h>
int main(){

  char c= 'Q';
  char *char_pointer= &c;
  printf("%c %c\n", c, *char_pointer);

  c='Z';
  printf("%c %c\n", c, *char_pointer);

  *char_pointer ='Y';
  printf("%c %c\n",c, *char_pointer);

  return 0;
}
*/