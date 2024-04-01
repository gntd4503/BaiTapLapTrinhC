#include <stdio.h>
#include <math.h>
#include <stdbool.h> // th�m thu vi?n d? s? d?ng gi� tr? bool 

bool kiemtrasochinhphuong(int a ) // s? d?ng h�m ki?m tra d? check s? ch�nh phuong v� truy?n v�o tham s? a 
    {
        if(a < 1) // n?u a b� hon 1 th� kh�ng ph?i l� s? ch�nh phuong !
        {
            return false; // tr? v? gi� tr? false
        }
        for (int i = 1; i*i <= a; i++) // s? d?ng v�ng l?p for cho ch?y t? gi� tr? i = 1 d?n i*i <= a th� d?ng 
        {
            if(i*i == a) // d?t di?u ki?n n?u i*i == a th� tr? v? true . vd: i = 2 
                return true;
        }
        return false;
        
    }
    
int demsochinhphuong (int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if(kiemtrasochinhphuong(i))
        {
            count++;
        }
    }
    return count;
}
    
void lietkecacsochinhphuong(int n)
{
	for(int i = 1; i < n; i++)
	{
		if(kiemtrasochinhphuong(i) == true )
		{
			printf(" %d ", i);
		}
	}
}

int main(){
    int n=50;
    int a = demsochinhphuong(n);
    printf("Co %d so chinh phuong nho hon %d la : ", a,n);
    lietkecacsochinhphuong(n);
    return 0;
}
