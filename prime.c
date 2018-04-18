#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int sumPrimes(int);
bool isPrime(int);

int main(int argc, string argv[])
{
    if (argc==2){
       // int test=atoi(argv[1]);
       // printf("you are testing %i\n",test);
    sumPrimes(atoi(argv[1]));
    }else{
        return 1;
    }
}

int sumPrimes(int max){

    //create an array in c?
    int primeArray [1000];
    int count=0;
    int res=0;

    for (int i = 2; i <= max; ++i) {

           if (isPrime(i)) {
               primeArray[count]=i;
                count++;
           }
      }

   //sum results of prime array
    for (int k = 0; k < count; k++) {
        printf("array value: %i\n",primeArray[k]);
        res += primeArray[k];
    }
    printf("%i\n",res);
    return res;
}

bool isPrime(int num){

    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
