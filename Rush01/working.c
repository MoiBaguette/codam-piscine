#include <stdio.h>
#include <stdlib.h>
void ft_checker(int *ptrabcd, int *array, char *arr);
void ft_counter(int *array, int *arrn, int y, char *arr);
void ft_write_array(int *ptr);
int  ft_check_lr(int *p);
int  ft_check_rl(int *p);
int     ft_check_lr(int *p)
{
    int x;
    x = 1;
    if ((*(p + 3) - *(p + 2)) > 0 && (*(p + 3) - *(p + 1)) > 0 && (*(p + 3) - *p) > 0)
    {
        x++;
    }
    if ((*(p + 2) - *(p + 1)) > 0 && (*(p + 2) - *p) > 0)
    {
        x++;
    }
    if ((*(p + 1) - *p) > 0)
    {
        x++;
    }
    return (x); 
}
int     ft_check_rl(int *p)
{
    int x;
    x = 1;
    if ((*p - *(p + 1)) > 0 && (*p - *(p + 2)) > 0 && (*p - *(p + 3)) > 0)
    {
        x++;
    }
    if ((*(p + 1) - *(p + 2)) > 0 && (*(p + 1) - *(p + 3)) > 0)
    {
        x++;
    }
    if ((*(p + 2) - *(p + 3)) > 0)
    {
        x++;
    }
    return (x); 
    //printf("%i", x);
}
void    ft_write_array(int *ptr)
{
    int i;
    i = 0;
    while (i <= 15)
    {
        printf("%d", *ptr);
        if (i == 3 || i == 7 || i == 11 || i == 15)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
        ptr++;
        i++;
    }
}
int *ft_array_filler()
{
    int a;
    int b;
    int c;
    int d;
    int *arr = malloc(96 * sizeof(int));
    int i;
    
    a = 1;
    i = 0;
    while(a < 5)
    {
        b = 1;
        while(b < 5)
        {
            c = 1;
            while (c < 5)
            {
                d = 1;
                while (d < 5)
                {
                    if (a != b && b != c && c != d && a != c && b != d && a != d)
                    {
                        arr[i] = a;
                        i++;
                        arr[i] = b;
                        i++;
                        arr[i] = c;
                        i++;
                        arr[i] = d;
                        i++;
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
    return (&arr[0]);
}
int     main(int argc, char **argv)
{
    char arr[argc - 1]; // 4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2
    int i = 0;
    int j = 1;
    int x = 0;
    int y = 0;
    int n = 0;
    int a = 0;
    int arrn[20];
    int *possible = malloc(96 * sizeof(int));
    int *ptrarray;
    int randoval;
    while (i < (argc - 1) )
    {
        arr[i] = *argv[i + 1] - '0';
        i++;
    }
    ptrarray = ft_array_filler();
    while(n < 4)    
    {
        i = 0;
        while(i < 24)
        {
            x = ft_check_lr(ptrarray + (i * 4));
            y = ft_check_rl(ptrarray + (i * 4));
            
            if (arr[8 + n] == x && arr[12 + n] == y )
            {
                arrn[a] = n;
                j = 0; 
                while ( j < 4)
                {               
                    *(possible + ((a * 4) + j)) = *(ptrarray + j + (i * 4));
                    j++;
                } 
                a++;
            }
            i++;
        }
        n++;
    }
    arrn[a] = 5;
    ft_counter(possible, &arrn[0], a, arr);
    free(ptrarray); 
    return (0);
}
void ft_counter(int *array, int *arrn, int y, char *arr)
{
    int arrcounters[4];
    arrcounters[0] = 0;
    arrcounters[1] = 0;
    arrcounters[2] = 0;
    arrcounters[3] = 0;
    int x = 0;
    while (x < y)
    {
        if (*(arrn + x) == 0)
            arrcounters[0] = arrcounters[0] +1;
        if (*(arrn + x) == 1)
            arrcounters[1] = arrcounters[1] +1;
        if (*(arrn + x) == 2)
            arrcounters[2] = arrcounters[2] +1;
        if (*(arrn + x) == 3)
            arrcounters[3] = arrcounters[3] +1;
        x++;
    }
    x = 1;
   // printf("\n");
    while (x < 49)
    {
  //      printf("%d", *(array + x - 1));
        if (x % 4 == 0)
        {
        }
        x++;
    }
    ft_checker(arrcounters, array, arr);
}
void    ft_checker(int *ptrabcd, int *array, char *arr)
{
    int square[4][4];
    int a;
    int b;
    int c;
    int d;    
    int j;
    int e = 0;
    int f;
    int g;
    int h;
    int x = 0;
    int y = 0;
    int w = 0;
    j = 0;
    int count =0;
    int z[4];
    a = *ptrabcd;
  //  printf("%d \n", a);
    b = *(ptrabcd + 1);
  //  printf("%d \n", b);
    c = *(ptrabcd + 2);
  //  printf("%d \n", c);
    d = *(ptrabcd + 3);
  //  printf("%d \n", d);      
    while(e < a)
    {
        f = 0;
        while(f < b)
        {
            g = 0;
            while(g < c)
            {
                h = 0;
                while (h < d)
                { 
                    j = 0;
                    y = 0;
                    while(j < 4)
                    {
                        square[0][j] = *(array + j + e * 4);
                        square[1][j] = *(array + j + (a + f) * 4);
                        square[2][j] = *(array + j + (a + b + g) * 4);
                        square[3][j] = *(array + j + (a + b + c + h) * 4);
                        z[0] = square[0][j];
                        z[1] = square[1][j];
                        z[2] = square[2][j];
                        z[3] = square[3][j];    
                        x = ft_check_lr(z);
                        if (arr[j] == x && z[0] != z[1] && z[1] != z[2] && z[2] != z[3] && z[0] != z[2] && z[1] != z[3] && z[0] != z[3]) 
                        {
                            y++;
                            if (y == 4 && w != 1)
                            {
                                w = 1;
                                ft_write_array(&square[0][0]);
                            }
                        }
                        j++;
                    }
                    h++;
                    count++;
                }
                g++;
            }
            f++;
        }
        e++;
    }
}