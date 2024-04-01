#include <stdio.h>
int main(void){
    // nh?ng s? có hai ch? s? chia h?t cho 7 là b?i c?a 7 
    for(int i = 10 ; i <= 99; i++) // s? nguyên có 2 ch? s? xác d?nh trong ph?m vi t? 10 d?n 99
    {
        if(i % 7 == 0) // d?t di?u ki?n n?u i chia h?t cho 7 thì tr? v? true 
        {
            printf("%d\n", i); // in ra màn hình 
        }
    }
    return 0;
}
