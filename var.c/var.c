#include <stdio.h>
#include <stdarg.h>

//variadic functiions: takes variable numver of args
//OOP, polymorphism
//overloading
//overriding
//int sumME(int x)
//int sumME(int x,int y)

int sum(int count, ...){
    int sum = 0;
    int nextArg = 0;
    va_list args;                           //
    va_start(args, count);                  //initialized pointer args
                                            //takes pointer, last positional arg

    for (int i = 0; i < count; i++){
        nextArg = va_arg(args, int);        //to get out one arg
    
    
    
    
    
    }
    va_end(args);
    return sum;
}


int main(){
    printf("hello world");
    int answer = 42;
    printf("the answer is %d\n", answer);
    float myPI = 3.141592;
    //printf("the answer is %d\n")
}