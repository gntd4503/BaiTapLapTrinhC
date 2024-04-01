#include <stdio.h>
#include <math.h>
#include <stdbool.h> // thêm thu vi?n d? s? d?ng giá tr? bool 

bool kiemtrasochinhphuong(int a ) // s? d?ng hàm ki?m tra d? check s? chính phuong và truy?n vào tham s? a 
    {
        if(a < 1) // n?u a bé hon 1 thì không ph?i là s? chính phuong !
        {
            return false; // tr? v? giá tr? false
        }
        for (int i = 1; i*i <= a; i++) // s? d?ng vòng l?p for cho ch?y t? giá tr? i = 1 d?n i*i <= a thì d?ng 
        {
            if(i*i == a) // d?t di?u ki?n n?u i*i == a thì tr? v? true . vd: i = 2 
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
