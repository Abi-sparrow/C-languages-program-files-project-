/*#include <stdio.h>  //aaaabbbccc o/p as a2b3c4
#include <string.h>
int main()
{
    char str[100];
    int i, count = 1, n;
    printf("Enter a string: ");
    scanf("%s", str);
    n = strlen(str);
    for (i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }
    return 0;
}*/

/*#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee c[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter Employee %d details:\n", i + 1);

        printf("ID: ");
        scanf("%d", &c[i].id);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Salary: ");
        scanf("%f", &c[i].salary);
    }

    printf("\n--- Employee Details ---\n");

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("ID     : %d\n", c[i].id);
        printf("Name   : %s\n", c[i].name);
        printf("Salary : %.2f\n", c[i].salary);
    }

    return 0;
}
*/

/*#include <stdio.h>
#include <string.h>        //X=10

int value(char c)
{
    switch(c)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main()
{
    char s[20];
    int i, total = 0;

    printf("Enter Roman number: ");
    scanf("%s", s);

    for(i = 0; i < strlen(s); i++)
    {
        if(value(s[i]) < value(s[i + 1]))
            total -= value(s[i]);
        else
            total += value(s[i]);
    }

    printf("Integer: %d", total);

    return 0;
}*/

/*#include <stdio.h>

int main() {                   //o/p as 11
    int n = 344,sum=0,r;
    while(n > 0){
        r = n%10;
        sum+=r;
        n /= 10;
    }
    printf("sum of natural: %d",sum);
}*/
//armstrong num
/*#include <stdio.h>

int main() {
    int n = 153,temp,sum=0,r;
    temp = n;
    while(n > 0){
        r = n%10;
        sum += r*r*r;
        n /= 10;
    }
    if (temp == sum){
        printf("%d Armstrong number",sum);
    }
    else{
        printf("%d it is not a Armstrong",sum);
    }
}*/

//palindrome
/*#include <stdio.h>

int main() {
    int n = 121,temp,rev=0,r,t=1;
    temp = n;
    while(n > 0){
        r = n%10;
        rev += rev * 10 + r;
        n /= 10;
    }
    if (rev == temp){
        printf("%d Palindrome number",rev);
    }
    else{
        printf("%d it is not a Palindrome number",rev);
    }
}*/

//prime
/*#include <stdio.h>

int main() {
    int n = 50, i, j, count;

    for (j = 1; j <= n; j++) {
        count = 0;

        for (i = 1; i <= j; i++) {
            if (j % i == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d prime\n", j);
        }
    }

    return 0;
}*/
/*#include<stdio.h>         //jar
int main() {
    int jar = 10,A=0,B=0,C=0;
    for(int i=1; i <= jar; i++){
        if(i % 3 == 1){
            A++;
        }
        else if(i % 3 == 0){
            B++;
        }
        else{
            C++;
        }
    }
    printf("A student got: %d\n",A);
    printf("B student got: %d\n",B);
    printf("C student got: %d\n",C);
}*/
//factorial
/*#include <stdio.h>
int main() {
    int n=5,i,fact=1;
    for(i=1;i<=5;i++){
        fact*=i;
    }
    printf("factorial=%d",fact);
}*/
//

//perfect number
/*#include <stdio.h>

int main() {
    int n=6,sum=0,i;
    for(int i=1; i < n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("%d is perfect number",n);
    }
    else{
        printf("%d is not a perfect number",n);
    }

}*/

//ant rail
/*#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5] = {1,-1,1,-1,1},i,c=0;
    int n = sizeof(arr) / sizeof(int);
    for(i=0;i<n;i++){
        if(arr[i] == -1){
            c++;
        }
    }
    printf("total reach:%d",c);
}*/

#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    printf("size: %d\n",n);
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
}

































































