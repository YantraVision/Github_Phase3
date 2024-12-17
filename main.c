//main created by Hariharan.S
#include<stdio.h>

int add(int input_1,int input_2); //Function to add two numbers
int subtraction(int input_1,int input_2); //Function to subtraction of two number
int multiplication(int input_1,int input_2); //Function to Multiply
int main(){
int input_1=30;
int input_2=2;
int result=0;
result=add(input_1,input_2);
printf("Addition of two inputs=%d",&result);
result=subtraction(input_1,input_2);
printf("Subtraction of two inputs=%d",&result);
result=multiplication(input_1,input_2);
printf("Multiplication of two inputs=%d",&result);
return 0;
}

int add(int input_1,int input_2){
int result=0;
result=input_1+input_2;
return result;
}

int subtraction(int input_1,int input_2){
int result=0;
result=input_1-input_2;
return result;
}

int multiplication(int input_1,int input_2){
int result=0;
result=input1*input2;
return result;
}

   
