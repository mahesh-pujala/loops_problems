#include<stdio.h>
int main(){

// 1.print nums from 1 to 10

    /*int i;
    for(i=1;i<=10;i++){
        printf("%d\n",i);
    }*/

    /*int i=1;
    while(i<=10){
        printf("%d\n",i);
        ++i;
    }*/

// 2.print nums from 10 to 1

    /*int i;
    for(i=10;i!=0;i--){
        printf("%d\n",i);
    }*/

    /*int i=10;
    while(i!=0){
        printf("%d\n",i);
        i--;
    }*/

// 3.print nums from 1 to N
    /*int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }*/

    /*int i=1,n;
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        ++i;
    }*/

// 4.print even nums from 1 to 10
    /*int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }*/

    /*int i=1,n;
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            printf("%d\n",i);
        }
        i++;
    }*/

// 5.print even nums upto n
    /*int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }*/

    /*int i=1,n;
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            printf("%d\n",i);
        }
        i++;
    }*/

// 6.print odd nums upto N

    /*int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }*/

    /*int i=1,n;
    scanf("%d",&n);
    while(i<=n){
        if(i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }*/

// 7.print even nums from N to 1
    /*int i,n;
    scanf("%d",&n);
    for(i=n;i!=0;i--){
        if(i%2==0){
            printf("%d\n",i);
        }
    }*/

    // /*int n;
    // // int i=n;
    // scanf("%d",&n);
    // int i=n;
    // while(i!=0){
    //     if(i%2==0){
    //         printf("%d\n",i);
    //     }
    //     i--;
    // }*/

// 8.print multiples of 5 upto N

    /*int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%5==0){
            printf("multiple of 5 %d\n",i);
        }
    }*/

    /*int i=1,n;
    scanf("%d",&n);
    while(i<=n){
        if(i%5==0){
            printf("%d\n",i);
        }
        i++;
    }*/

// 9.print multiples of 5 from N to 1

    /*int i,n;
    scanf("%d",&n);
    for(i=n;i!=0;i--){
        if(i%5==0){
            printf("%d\n",i);
        }
    }*/

    /*int i,n;
    scanf("%d",&n);
    i=n;
    while(i!=0){
        if(i%5==0){
            printf("%d\n",i);
        }
        i--;
    }*/

// 10.find the sum of nums from 1 to N

    /*int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);*/

    /*int i=1,n,sum=0;
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("%d",sum);*/

// 11.find the sum of even nums from 1 to N

    /*int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
            printf("even number = %d\n",i);
        }
    }
    printf("sum of even nums = %d",sum);*/

    /*int i=1,n,sum=0;
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            printf("even num = %d\n",i);
            sum=sum+i;
        }
        i++;
    }
    printf("sum of even nums = %d",sum);*/

// 12.find the average of nums from 1 to N

    /*int i,n,sum=0,avg;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    avg=sum/n;
    printf("%d",avg);*/

    /*int i=1,n,sum=0,avg;
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    avg=sum/n;
    printf("%d",avg);*/

// 13.print multiplication table of a num

    /*int i=1,n,mult;
    scanf("%d",&n);
    while(i<=10){
        mult=n*i;
        printf("%d*%d=%d\n",n,i,mult);
        i++;
    }*/

    /*int i,n,mult;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        mult=n*i;
        printf("%d*%d=%d\n",n,i,mult);
    }*/

// 14. find multiplication tables from 1 to 10

    /*int n=1,mult;
    while(n<=10){
        int i=1;
        while(i<=10){
        mult=n*i;
        printf("%d*%d=%d\n",n,i,mult);
        i++;
    }
    n++;
    printf("table of %d\n",n);
    }*/

    /*int i,n,mult;
    for(n=1;n<=10;n++){
        printf("table of %d\n",n);
        for(i=1;i<=10;i++){
        mult=n*i;
        printf("%d*%d=%d\n",n,i,mult);
    }
    }*/

// 15.find the factorial of a number

    /*int fact=1,n;
    int temp;
    scanf("%d",&n);
    temp=n;
    if(n==0){
        printf("factorial is 1");
    }
    while(temp>0){
        fact=fact*temp;
        temp--;
    }
    printf("factorial =%d",fact);*/

    /*int fact=1,n,temp;
    scanf("%d",&n);
    if(n==0){
        printf("factorial is 1");
    }
    
    for(temp=n;temp>0;temp--){
        fact=fact*temp;
    }
    printf("factorial=%d",fact);*/

// 16.calculate x^n using a loop

    // /*int x,n,i=1,temp;
    // scanf("%d%d",&x,&n);
    // temp=x;
    // while(i<n){
    //     x=x*temp;
    //     i++;
    // }
    // printf("%d",x);*/

    // /*int x,n,temp,i;
    // scanf("%d%d",&x,&n);
    // temp=x;
    // for(i=1;i<n;i++){
    //     x=x*temp;
    // }
    // printf("%d",x);*/

// 17.count from N to 0

    /*int i,n;
    scanf("%d",&n);
    i=n;
    while(i>=0){
        printf("%d",i);
        i--;
    }*/
   
// 18.print nums divisivle ny 3 from 1 to N

    /*int i=1,n;
    scanf("%d",&n);
    while(i<=n){
        if(i%3==0){
            printf("%d\n",i);
        }
        i++;
    }*/

    /*int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==0){
            printf("%d\n",i);
        }
    }*/

// 19.print nums divisible by both 3 and 5 upto N

    /*int i=1,n;
    scanf("%d",&n);
    while(i<=n){
        if(i%3==0 && i%5==0){
            printf("%d\n",i);
        }
        i++;
    }*/

    /*int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            printf("%d\n",i);
        }
    }*/

// 20. find sum of multiples of 3 upto N

    /*int i=1,n,sum=0;
    scanf("%d",&n);
    while(i<=n){
        if(i%3==0){
            sum=sum+i;
        }
        i++;
    }
    printf("%d",sum);*/

    /*int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    printf("%d",sum);*/

// 21.print the first N natural nums in reverse order

    /*int i=1,n;
    scanf("%d",&n);
    i=n;
    while(i>0){
        printf("%d\n",i);
        i--;
    }*/

    /*int i,n;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        printf("%d\n",i);
    }*/


// 22.find the sum of digits of a number

    /*int i=1,n,sum=0,digit;
    scanf("%d",&n);
    i=n;
    while(n!=0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
        
    }
    printf("%d",sum);*/

    /*int i,n,sum=0,digit;
    scanf("%d",&n);
    for(i=n;n!=0;n=n/10){
        digit=n%10;
        sum=sum+digit;
    }
    printf("%d",sum);*/


// 23.count the number of digits of number

//     /*int i=1,n,sum=0;
//     scanf("%d",&n);
//     i=n;
//     while(n!=0){
//         sum++;
//         n=n/10;
//         printf("%d",sum);
//     }*/
    

//     /*int i,n,sum=0;
//     scanf("%d",&n);
//     for(i=n;n!=0;n=n/10){
//         sum++;
//         printf("%d",sum);
        
//     }*/
    

// // 24.find the product of digits of a number

//     /*int i,n,prod=1,digit;
//     scanf("%d",&n);
//     while(n!=0){
//         digit=n%10;
//         prod=prod*digit;
//         n=n/10;
//     }
//     printf("%d",prod);*/

//     /*int n,prod=1,digit;
//     scanf("%d",&n);
//     for(;n!=0;n=n/10){
//         digit=n%10;
//         prod=prod*digit;
//     }
//     printf("%d",prod);*/


// 25.reverse a number

    /*int i,n,rev=0,digit;
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        rev=digit+rev*10;
        n=n/10;
    }
    printf("%d",rev);*/

    /*int i,n,rev=0,digit;
    scanf("%d",&n);
    for(;n!=0;n=n/10){
        digit=n%10;
        rev=digit+rev*10;
    }
    printf("%d",rev);*/


// 26. check whether a num is palindrome or not

    /*int i,n,rev=0,digit;
    scanf("%d",&n);
    i=n;
    while(n!=0){
        digit=n%10;
        rev=digit+rev*10;
        n=n/10;
    }
    if(i==rev){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }*/

    /*int i,n,rev=0,digit;
    scanf("%d",&n);
    i=n;
    for(;n!=0;n=n/10){
        digit=n%10;
        rev=digit+rev*10;
    }
    if(i==rev){
        printf("plaindrome");
    }
    else{
        printf("not palindrome");
    }*/

// 27.find the first digit of number

    // /*int n,digit;
    // scanf("%d",&n);
    // while(n!=0){
    //     digit=n;
    //     n=n/10;
    // }
    // printf("%d",digit);*/

    // /*int n,digit;
    // scanf("%d",&n);
    // while(n!=0){
    //     digit=n;
    //     n=n/10;
    // }
    // printf("%d",digit);*/

// 28.find the last digit of a number

    /*int n;
    scanf("%d",&n);
    printf("last digit is %d",n%10);*/

// 29.find the largest digit in number

    
    /*int n,digit,last_digit,temp;
    scanf("%d",&n);
    temp=n;
    last_digit=n%10;
    while(n!=0){
        digit=n%10;
        printf("%d\n",digit);
        
        if(digit>=last_digit)
            last_digit=digit;
        n=n/10;
    
    
    
}
printf("great digit=%d",last_digit);*/

/*int n,digit,last_digit;
scanf("%d",&n);
last_digit=n%10;
for(;n!=0;n=n/10){
    digit=n%10;
    if(digit>=last_digit){
    last_digit=digit;}
}
printf("great=%d",last_digit);*/

// 30. print smallest_digit in a number

/*int n,digit,last_digit;
scanf("%d",&n);
last_digit=n%10;
while(n!=0){
    digit=n%10;
    if(digit<=last_digit){
        last_digit=digit;
        
    }
    n=n/10;
    
}
printf("%d",last_digit);*/

/*int n,digit,last_digit;
scanf("%d",&n);
for(;n!=0;n=n/10){
    digit=n%10;
    if(digit<=last_digit){
        last_digit=digit;
    }

}
printf("%d",last_digit);*/

// 31.count even digits in a number

/*int i,n,count=0,digit;
scanf("%d",&n);
while(n!=0){
    digit=n%10;
    printf("digits = %d\n",digit);
    if(digit%2==0){
        count++;
    }
    n=n/10;
    
}
printf("sum of even nums%d",count);*/

/*int i,n,count=0,digit;
scanf("%d",&n);
for(;n!=0;n=n/10){
    digit=n%10;
    printf("digit = %d\n",digit);
    if(digit%2==0){
        count++;
    }
}
printf("sum of even nums=%d",count);*/

// 32.remove the last digit repeatedly and print each step

/*int n,digit;
scanf("%d",&n);
while(n!=0){
    printf("%d\n",n);
    n=n/10;
    
}*/

/*int n,digit;
scanf("%d",&n);
for(;n!=0;n=n/10){
    printf("%d\n",n);

}*/

// 33.print each digit of a number separately

/*int n,digit,rev=0;
scanf("%d",&n);
while(n!=0){
    digit=n%10;
    rev=rev*10+digit;
    n=n/10;
}

while(rev!=0){
    digit=rev%10;
    printf("%d\n",digit);
    rev=rev/10;*/

/*int n,rev=0,digit;
scanf("%d",&n);
for(;n!=0;n=n/10){
    digit=n%10;
    rev=rev*10+digit;
}
for(;rev!=0;rev=rev/10){
    digit=rev%10;
    printf("%d\n",digit);
}

}*/

// 34.count zeros in number

/*int n,digit,count=0;
scanf("%d",&n);
while(n!=0){
    digit=n%10;
    if(digit==0){
        count++;
        
    }
    n=n/10;
}
printf("%d",count);*/


/*int n,digit,count=0;
scanf("%d",&n);
for(;n!=0;n=n/10){
    digit=n%10;
    if(digit==0){
        count++;
    }
}
printf("%d",count);*/

// 35.given num strong number (power of each digits sum of length of number)

/*int n,digit,pow,base,temp,count=0,n1;
scanf("%d",&n);
temp=n;
n1=n;
while(n!=0){
    digit=n%10;
    count++;
    n=n/10;
}



int sum=0;
int temp1;
while(n1!=0){
    digit=n1%10;
    
    base=digit;
    temp1=digit;
    
    int i=1;
    while(i<count){
        temp1=temp1*base;
        
        i++;
        
    }
    sum=sum+temp1;
    
    n1=n1/10;
    
}



if(temp==sum){
    printf("strong number");
}
else{
    printf("not strong");
}*/


// 36.given num armstrong(sum of individual digits factorials)



/*int n,fact,i,digit,sum=0,temp;
scanf("%d",&n);
temp=n;
while(n!=0){
    digit=n%10;
    printf("digit = %d\n",digit);
    i=digit;
    fact=1;
    while(i!=0){
    fact=fact*i;
    i--;
    printf("fact = %d\n",fact);
}
sum=sum+fact;
n=n/10;
    
}
printf("fact = %d\n",fact);
printf("sum = %d\n",sum);

if(temp==sum){
    printf("armstrong");
}
else{
    printf("not armstrong");
}

}*/


// 37.given number perfect number(sum of individual digits factors)

/*int n,digit,i=1,sum=0,temp;
scanf("%d",&n);
// while(n!=0){
//     digit=n%10;
// }
temp=n;
while(i<n){
    if(n%i==0){
        sum=sum+i;
        
    }
    i++;
    
}
printf("%d\n",sum);
if(temp==sum){
    printf("perfect");
}
else{
    printf("not perfect");
}*/


// 38.print difference b/w largest and smallest digit

/*int n,last_digit,digit,temp,last,last1,num,n1,num1,difference;
scanf("%d",&n);
n1=n;
last=n%10;
num=n/10;
while(num!=0){
    digit=num%10;
    if(digit>=last){
        last=digit;
        
    }
    
    num=num/10;
}
printf("great num %d\n",last);


last1=n1%10;
num1=n1/10;
while(num1!=0){
    digit=num1%10;
    if(digit<=last1){
        last1=digit;
    }
    num1=num1/10;

}
printf("small m=num %d\n",last1);

difference=last-last1;
printf("difference b/w large and small num is = %d",difference);*/

// 39.check whether all digits of a num are even

/*int n,digit,length=0,count=0;
scanf("%d",&n);
while(n!=0){
    digit=n%10;
    length++;
    printf("%d\n",digit);
    if(digit%2==0){
        count++;
    }
    n=n/10;
}
if(length==count){
    printf("all digits in the number are even");
}
else{
    printf("all digits in the num are not even");
}*/

// 40.check whether a num is prime

/*int i=1,n,count=0;
scanf("%d",&n);
while(i<=n){
    if(n%i==0){
        count++;
    }
    i++;
}
if(count==2){
    printf("prime");
}
else{
    printf("not prime");
}*/

// 41.print prime nums upto N

/*int n,j=1;
scanf("%d",&n);
while(j<=n){
    int i=1;
    int count=0;
while(i<=j){
    if(j%i==0){
        count++;
    }
    i++;
}
if(count==2){
    printf("%d\n",j);
    }

j++;
}*/

// 42.count prime nums from 1 to N

/*int n,i=1,count=0,j=1,count1=0;
scanf("%d",&n);
while(j<=n){
    int i=1;
    count=0;
while(i<=j){
    if(j%i==0){
        count++;
    }
    i++;
}
if(count==2){
    printf("%d\n",j);
    count1++;
}

j++;
}
printf("no of primes %d",count1);*/

// 43.find the sum of primes from 1 to N

/*int n,j=1,sum=0;
scanf("%d",&n);
while(j<=n){
    int i=1;
    int count=0;
    while(i<=j){
        if(j%i==0){
            count++;
        }
        i++;
    }
    if(count==2){
        printf("prime nums = %d\n",j);
        sum=sum+j;
    }
    j++;
    }
    printf("%d",sum);*/

// 44.find the first N primes(N no of primes)

/*int n;
scanf("%d",&n);
int count1=1;
int j=1;
while(count1<=n){
    int i=1;
    int count=0;
    while(i<=j){
    if(j%i==0){
        count++;
    }
    i++;
}
if(count==2){
        printf("%d\n",j);
        count1++;
    }
    j++;

}*/

// 45.find the factors of a number

/*int n;
scanf("%d",&n);
int i=1;
while(i<=n){
    if(n%i==0){
        printf("%d\n",i);
    }
    i++;
}*/

// 46.count the factors of number

/*int n;
scanf("%d",&n);
int i=1;
int count=0;
while(i<=n){
    if(n%i==0){
        count++;
    }
    i++;
}
printf("%d",count);*/

// 47.find the sum of factors of a number

/*int n;
scanf("%d",&n);
int i=1;
int sum=0;
while(i<=n){
    if(n%i==0){
        sum=sum+i;
    }
    i++;
}
printf("%d",sum);*/

// 48.print perfect nums from 1 to N

/*int n;
scanf("%d",&n);
int j=1;
while(j<=n){
    int i=1;
    int sum=0;
    int temp=j;
    while(i<j){
    if(j%i==0){
        sum=sum+i;
    }
    i++;
}
if(sum==temp){
    printf("%d\n",j);
}
j++;
}*/


// 49.print first perfect nums(N no of perfect numbers)

/*int n;
scanf("%d",&n);
int j=1;
int count1=1;
while(count1<=n){
    int i=1;
    int sum=0;
    int temp=j;
    while(i<j){
    if(j%i==0){
        sum=sum+i;
    }
    i++;
}
if(sum==temp){
    printf("%d\n",j);
    count1++;
}
j++;
}*/

// 50.check whether num is armstrong or not

/*int n;
scanf("%d",&n);
int len=0;
int temp=n;
int num=n;
int digit;
while(n!=0){
    n=n/10;
    len++;
}
printf("length of number %d\n",len);

int sum=0;
while(temp!=0){
    digit=temp%10;
    printf("digit = %d\n",digit);
    int temp1=digit;
    int i=1;
    while(i<len){
        digit=digit*temp1;
        i++;
        printf("power of digit = %d\n",digit);
    }
    sum=sum+digit;
    temp=temp/10;
}
printf("sum = %d",sum);

if(sum==num){
    printf("armstrong");
}
else{
    printf("not armstrong");
}*/


// 51.print armstrong from 1 to N
/*int n;
scanf("%d",&n);
int j=1;
while(j<=n){
    int len=0;
    int k=j;
    int k1=j;
    int k2=j;
    while(k!=0){
        k=k/10;
        len++;
       
    }
    int temp=k1;
    int num=k1;
    int digit;
    int sum=0;
    
    while(k1!=0){
        digit=k1%10;
        int temp1=digit;
        int i=1;
        while(i<len){
            digit=digit*temp1;
            i++;
        }
        sum=sum+digit;
        k1=k1/10;
    }
    if(sum==k2){
        printf("%d\n",k2);
    }
    j++;
}*/



// 52,print first n armstrong nums (N no of armstrong nums)


/*int n;
scanf("%d",&n);
int j=1;
int digit;
int count=1;
while(count<=n){
    int len=0;
    int k=j;
    while(k!=0){
        k=k/10;
        len++;
    }
    int k1=j;
    int sum=0;
    while(k1!=0){
        digit=k1%10;
        int temp1=digit;
        int i=1;
        while(i<len){
            digit=digit*temp1;
            i++;
        }
        sum=sum+digit;
        k1=k1/10;
    }
    int k2=j;
    if(sum==k2){
        printf("%d\n",k2);
        count++;
    }
    j++;
}*/

// 53.print strong nums from 1 to N

/*int n;
scanf("%d",&n);
int j=1;
    int digit;
while(j<=n){
    int k=j;
    int temp=j;
    int sum=0;
    while(k!=0){
        digit=k%10;
        int fact=1;
        while(digit!=0){
            fact=fact*digit;
            digit--;
        }
        sum=sum+fact;
        k=k/10;
    }
    if(sum==temp){
        printf("%d\n",temp);
    }
    j++;
}*/


// 54.print first n strong nums(N no of strong nums)

/*int n;
scanf("%d",&n);
int j=1;
int digit;
int count=1;
while(count<=n){
    int k=j;
    int temp=k;
    int sum=0;
    while(k!=0){
        digit=k%10;
        int fact=1;
        while(digit!=0){
            fact=fact*digit;
            digit--;
        }
        sum=sum+fact;
        k=k/10;
    }
    if(sum==temp){
        printf("%d\n",temp);
        count++;
    }
    j++;
}*/

// 55.check whether a num is automorphic(num whose square ends with digits of num itself)

/*int n;
scanf("%d",&n);
int temp=n;
int i=1;
int sq=n;
int num=n;
int temp1=n;
int l1=0;
while(temp1!=0){
    temp1=temp1/10;
    l1++;
}
printf("length of entered num = %d\n",l1);
while(i<2){
    sq=sq*temp;
    i++;
}
printf("sqaure of num %d\n",sq);
int digit;
int digit1;
int len=0;
while(num!=0){
    digit=num%10;
    printf("digit of entered num %d\n",digit);
    while(sq!=0){
        digit1=sq%10;
        printf("digit1 of sq num %d\n",digit1);
        if(digit==digit1){
            len++;
        }
        
        printf("length of sq %d\n",len);
        sq=sq/10;
        break;
    }
    num=num/10;
}
if(l1==len){
    printf("automorphic");
}
else{
    printf("not");
}*/

// 56.check whether a num is neon num(a number where the sum of the digits of its square is equal to the original number itself)

/*int n;
scanf("%d",&n);
int temp=n;
int sq=n;
int i=1;
int digit;
int num=n;
while(i<2){
    sq=sq*temp;
    i++;
}
printf("square of num %d\n",sq);

int sum=0;
while(sq!=0){
    digit=sq%10;
    sum=sum+digit;
    sq=sq/10;
}
printf("sum of digits of sqaure %d\n",sum);

if(sum==num){
    printf("neon");
}
else{
    printf("not");
}*/

// 57.check whether a num is harshad/niven num(a positive integer that can be divided evenly by the sum of its own digits)

/*int n;
scanf("%d",&n);
int num=n;
int digit;
int sum=0;
while(n!=0){
    digit=n%10;
    sum=sum+digit;
    n=n/10;
}
if(num%sum==0){
    printf("harshad/niven");
}
else{
    printf("not");
}*/

// 58.find GCD/HCF of two nums

int n1,n2;
scanf("%d%d",&n1,&n2);
int i1=n1;
int i2=n2;
int fact1;
while(i1!=0){
    if(n1%i1==0){
        fact1=i1;
    }
    printf("%d\n",fact1);
    i1--;
}













}
    


































// int n,i,j,num;
// printf("enter no of rows");
// scanf("%d",&n);

// for(i=0;i<n;i++){
//     num=1;
//     for(j=0;j<=i;j++){
//         printf(" %d",num);
//         num=num*(i-j)/(j+1);
//     }
//     printf(" \n");
// }


// sum of integers in array


// int sum=0;
// int n;
// int i;
// int a[5];
// printf("enter no of elements");
// scanf("%d",&n);
// for(i=1;i<=n;i++){
//     scanf("%d",&a[i]);
//     sum=sum+a[i];
// }
// printf("%d",sum);





