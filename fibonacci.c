#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int fibonacci(int num);

int main(int argc, string argv[])
{
    if (argc ==2){
    fibonacci(atoi(argv[1]));
    }else{
        return 1;
    }
}

int fibonacci(int num){
int prevNumber = 0;
    int currNumber = 1;
    int result = 0;
    while (currNumber <= num) {
        if (currNumber % 2 !=0) {
            result += currNumber;
        }

        currNumber += prevNumber;
        prevNumber = currNumber - prevNumber;
    }
    printf("%i\n",result);
    return result;

}