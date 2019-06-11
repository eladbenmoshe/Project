#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(int argc, char* argv[]){

FILE *s = fopen("output.txt", "w");
  if (s == NULL)
  {
    printf("Error opening file!\n");
    exit(1);
  }
  const char *text = "PROGRAM OUTPUT";
  fprintf(s, "%s\n", text);
  
  double mass;
  double height;
  double bmi;
  char m = 'M';
  char f = 'F';
  char sex[256];
  char input[256];
  
  printf("Are you male or female (M/F)?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%c", &sex);
  fprintf(s, "%c\n", *sex);
  
  printf("Input your weight in kg: \n");
  fgets(input, 256, stdin);
  sscanf(input, "%lf", &mass);
  fprintf(s, "%lf\n", mass);

  printf("Input your height in meters: \n");
  fgets(input, 256, stdin);
  sscanf(input, "%lf", &height);
  fprintf(s, "%lf\n", height);

  bmi == 0;
  double h2 = height * height; 
  bmi = (mass)/(h2);
  printf("Your BMI is approximately: %lf\n", bmi);
  fprintf(s, "%lf\n", bmi);

if(*sex == m) {
  
  if(bmi < 24.00) {
  
  printf("Your BMI is at or below the 20th percentile for individuals of your sex.\n");
  fprintf(s, "Your BMI is at or below the 20th percentile for individuals of your sex.\n");
  }

 if((24.00 <= bmi) && (bmi < 28.00)) {  
  printf("Your BMI is between the 20th and 50th percentile for individuals of your sex.\n");
  fprintf(s, "Your BMI is between the 20th and 50th percentile for individuals of your sex.\n");
  }
 if((28.00 <= bmi) && (bmi < 33.40))
 {
  
  printf("Your BMI is between the 50th and 80th percentile for individuals of your sex.\n");
  fprintf(s, "Your BMI is between the 50th and 80th percentile for individuals of your sex.\n");
  }

 if(33.40 <= bmi) {
   
   printf("Your BMI is above the 80th percentile for individuals of your sex.\n");
   fprintf(s, "Your BMI is above the 80th percentile for individuals of your sex.\n"); 
  }
    
}

if(*sex == f) {
  
  if(bmi < 22.90) {
  
  printf("Your BMI is at or below the 20th percentile for individuals of your sex.\n");
   fprintf(s, "Your BMI is at or below the 20th percentile for individuals of your sex.\n");
  }
 if((22.90 <= bmi) && (bmi < 28.30)) {  
  printf("Your BMI is between the 20th and 50th percentile for individuals of your sex.\n");
  fprintf(s, "Your BMI is between the 20th and 50th percentile for individuals of your sex.\n");
  }
 if((28.30 <= bmi) && (bmi < 35.30))
 {
  
  printf("Your BMI is between the 50th and 80th percentile for individuals of your sex.\n");
  fprintf(s, "Your BMI is between the 50th and 80th percentile for individuals of your sex.\n");
  }
 if(35.30 <= bmi) {
   
   printf("Your BMI is above the 80th percentile for individuals of your sex.\n");
   fprintf(s, "Your BMI is above the 80th percentile for individuals of your sex.\n");
}

}
 
} 
  /* if(*sex == m) {
  
  if(BMI < 24.00) {
  
  printf("Your BMI is at or below the 20th percentile for individuals of your sex.\n");
  
  } else if(24.00 <= BMI < 28.00) {
  
  printf("Your BMI is between the 20th and 50th percentile for individuals of your sex.\n");
  
  } else if(28.00 <= BMI < 33.40) {
  
  
  
  ((*sex == m && BMI <= 24.0) || (*sex == f && BMI <= 22.9)) {
      printf("Your BMI is at or below the 20th percentile for individuals of your sex.\n");
  }else if((*sex == m && (24.0 < BMI <= 28.0)) || (*sex == f && (22.9 < BMI <= 28.3))){
      printf("Your BMI is between the 20th and 50th percentile for individuals of your sex.\n");
  }else if((*sex == m && (28.0 < BMI <= 33.4)) || (*sex == f && (28.3 < BMI <= 35.3))){
      printf("Your BMI is between the 50th and 80th percentile for individuals of your sex.\n");
}else {
      printf("Your BMI is above the 80th percentile for individuals of your sex.\n");
  }
  */

