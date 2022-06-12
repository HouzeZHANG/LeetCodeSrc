#include<stdio.h>
#include<stdlib.h>

int *two_sum(int *array, int len, int target, int *returnArray);

int *two_sum(int *array, int len, int target, int *returnArray){
    if(array == NULL){
        return NULL;
    }
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(array[i] + array[j] == target){
                returnArray = malloc(sizeof(int)*2);
                returnArray[0] = i;
                returnArray[1] = j;
                return returnArray;
            }
        }
    }
    return returnArray;
}

void char_to_int(char *char_array[], int length, int *return_array);

void char_to_int(char *char_array[], int length, int *return_array){
    return_array = malloc(sizeof(int)*length);
    for (int i=0;i<length;i++){
        *(return_array+i) = (int)atof(*(char_array+i));
    }
}

int main(int argc, char *argv[]){
    if(argc <= 2){
        printf("input number is vide\n");
        return 1;
    }
    int *arr;
    char_to_int(argv+2, argc-2, arr);
    int len = argc-2;
    int *ret;
    ret = two_sum(arr, len, 9, ret);
    for(int i=0;i<2;i++){
        printf("%d\n", *(ret+i));
    }
    return 0;
}