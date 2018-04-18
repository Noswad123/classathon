#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

long long factorialize(int num);

int main(int argc, string argv[])
{
    if (argc ==2){
    factorialize(atoi(argv[1]));
    }else{
        return 1;
    }
}

long long factorialize(int num){

    int size=num;
    long long answer=num;
  if(answer==0)
   {
        answer=1;
        return answer;
   }else
     {
       answer=1;
        for(int i=1;i<size+1;i++)
        {
          answer=i*answer;

        }
      }

    printf("%lld\n",answer);
    return answer;

}