#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int strContains(string string1,string string2);

int main(int argc,string argv[])
{
    if(argc==3){
        return strContains(argv[1], argv[2]);
    }else{
        printf("Enter file name followed by two strings\n");
        printf("i.e. ./strContains \"string1\" \"string2\"\n");
        return 2;
    }
}
//Should print a result then return an integer code
int strContains(string string1,string string2)
{
        bool isContained=false;
        int counter=0;
    printf("First string: %s\n", string1);
    printf("Second string: %s\n", string2);

    for(int i=0,length1=strlen(string1),length2=strlen(string2);i<length1;i++){
        if(string1[i]==string2[0]){

            for(int j=0; j<length2;j++){
                for(int k=0; k<=length2;k++){
                    if(i+k>=length1){
                        break;
                    }else{
                        if(string2[j]==string1[i+k]||string2[j]==toupper(string1[i+k])){
                            if(j==(length2-1)){
                                counter++;
                                isContained=true;
                        }else{
                             //printf("j counter: %i first string: %c second string: %c\n",i+k,string1[i+k],string2[j]);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    if(isContained){
        string time="times";
        if(counter==1){
            time="time";
        }
        printf("The string exists\n");
        printf("It appears %i %s\n",counter,time);
        return 1;
    }else{
        printf("The string does not exist\n");
        return 0;
    }


}
/*Create the following algorithm function:
Sample tests:
“endangered” “end” true
“endangered” “danger” true
“the dog sleeps in the dog house” “Jack” false
“the dog sleeps in the dog house” “dog” true (hacker multiple)
Hacker level 2: Confirm case
“The dog sleeps in the dog house” “The” single true
“The dog sleeps in the dog house” the” single true
“The dog sleeps in the dog house” “dog” multi true

*/