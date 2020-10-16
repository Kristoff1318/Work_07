#include <stdio.h>
#include <string.h>

double avg(int *arr, int len) {
    int i;
    double sum = 0;
    for(i = 0; i < len; i++) {
        sum += *(arr + i);
    }
    return sum / len;
}

void copy(int *arr1, int *arr2, int len) {
    int i;
    for(i = 0; i < len; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
}

int str_len(char *str) {
    int len = 0;
    char c = *str;
    while(c) {
        c = *(str + len);
        len++;
    }
    return len - 1;
}

int main() {
    //Average value
    int arr1[6] = {1,2,3,4,5,6};

    int len = sizeof(arr1) / sizeof(arr1[0]);
    printf("arr1 avg: %lf\n", avg(arr1,len));


    //Copying
    int arr2[6] = {7,8,9,10,11,12};
    printf("\n------BEFORE COPY------\narr1: ");
    int j;
    for(j = 0; j < len; j++) printf("%d ", arr1[j]);

    printf("\narr2: ");
    for(j = 0; j < len; j++) printf("%d ", arr2[j]);

    copy(arr1, arr2, len);

    printf("\n\n------AFTER COPY------\narr1: ");
    for(j = 0; j < len; j++) printf("%d ", arr1[j]);

    printf("\narr2: ");
    for(j = 0; j < len; j++) printf("%d ", arr2[j]);


    //Counting letters
    char str[] = "declaration";
    printf("\n\nThere are %d letters in \"declaration\"", str_len(str));


    //strcpy
    char str1[] = "The first string";
    char str2[] = "The second string";

    printf("\n\n------BEFORE strcpy------\n");
    printf("%s\n%s\n", str1, str2);

    strcpy(str2, str1);

    printf("\n------AFTER strcpy------\n");
    printf("%s\n%s\n", str1, str2);


    //strcat
    char str3[50] = "The cat ";
    char str4[] = "in the hat";

    printf("\n\n------BEFORE strcat------\n");
    printf("%s\n%s\n", str3, str4);

    strcat(str3, str4);

    printf("\n------AFTER strcat------\n");
    printf("%s\n%s\n", str3, str4);


    //strcmp
    char str5[] = "abcd";
    char str6[] = "abce";

    printf("\n\n------strcmp(str1, str2)------\n");
    printf("%s\n%s\n%d\n", str5, str6, strcmp(str5, str6));


    //strchr
    char str7[] = "offroad";
    printf("\n\n------strchr(str7, \'a\')------\n");
    printf("str7: %s", str7);
    printf("\n%p\n(points to \'a\')", strchr(str7, 'a'));

}
