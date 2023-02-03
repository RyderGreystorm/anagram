#include<stdio.h>
#include<string.h>
int main() {
 
int counter1[] = {0, 0, 0, 0};
int counter2[] = {0, 0, 0, 0};
char s1 []  = "dbb cccccaacb cdbababdcdcdab dcdad" ;
char s2 [] = "bbbcc bdddccccad cdbbaaacaccdabdd";
int flag = 0;

  for(int i = 0; i < strlen(s1); i ++){
    if(i == 'a'){
      counter1[0] + 1;
    } else if ( i == 'b'){
      counter1[1] ++;
    } else if (i == 'b'){
      counter1[2] ++;
    } else if (i == 'c'){
      counter1[3] ++;
    } else {
      continue;
    }

  }

 //for s2
  for(int j = 0; j < strlen(s2); j ++){
    if(j == 'a'){
      counter1[0] + 1;
    } else if ( j == 'b'){
      counter1[1] ++;
    } else if (j == 'b'){
      counter1[2] ++;
    } else if (j == 'c'){
      counter1[3] ++;
    } else {
      continue;
    }

  }

  for (int k = 0; k < 4; k++){
    if(counter1[k] != counter2[k] ){
      flag +=1;
  }


}
  if ( flag == 0){
    printf("Anagram");
  }else{
    printf("Not Anagram!");
  }


}
