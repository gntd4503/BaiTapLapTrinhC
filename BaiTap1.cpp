#include <stdio.h>
int main(void){
    // nh?ng s? c� hai ch? s? chia h?t cho 7 l� b?i c?a 7 
    for(int i = 10 ; i <= 99; i++) // s? nguy�n c� 2 ch? s? x�c d?nh trong ph?m vi t? 10 d?n 99
    {
        if(i % 7 == 0) // d?t di?u ki?n n?u i chia h?t cho 7 th� tr? v? true 
        {
            printf("%d\n", i); // in ra m�n h�nh 
        }
    }
    return 0;
}
