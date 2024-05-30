#include <stdio.h>
#include "LAB.h"
 #define YES 1   
#define NO 0  

    int Lr1()
{
    float v1;
    float v2;
    float t;
    float s;
    printf("v1 = ");
    scanf("%f", &v1);
    printf("v2 = ");
    scanf("%f", &v2);
    printf("t = ");
    scanf("%f", &t);
    s = v1 * t + (v2 - v1) * t / 2;
    printf("distance = %f\n", s);

return 0;

}


       int Lr2()

{
float s; 
float a; 
float c; 
float b;  
int n; 
int i; 
int sign;
printf("n=");
scanf("%d", &n);
s = 0;
sign = 1;
c = 2;
b = 1;
i = 1;
while ( i < n ) 
{
a = c / b;
s = s + a*sign;
sign = -sign;
c = c + 1;
b = (b + 1) * (c - 1);
i = i + 1;
}
printf("s = %f\n",s);
return 0;
}


        int Lr3()  
{  
    float s;    
    float a;    
    float c;    
    float b;     
    int n;    
    int i;    
    int sign; 
    float epsilon;  
     
    printf("n="); 
    scanf("%d", &n); 
     
    s = 0; 
    sign = 1; 
    c = 2; 
    b = 1; 
    epsilon = 2.7; 
 
    for (i = 1; i < n; i++)   
    {  
        a = c / b; 
         
        if (a < epsilon) { 
            printf("s = %f\n", s); // Вывод суммы s 
            break; // Выход из цикла, если a меньше epsilon 
        } 
         
        s += a * sign; 
        sign = -sign; 
        c++; 
        b = (b + 1) * (c - 1); 
    } 
 
    return 0;  
}

          int Lr4()
          {
        
          
    int c;     
    int flag;   
    int cnt;    
    cnt = 0;    
    flag = NO; 
    int enteredWords = NO;

    printf("Введите слова (для завершения ввода нажмите Enter):\n");
    while ((c = getchar()) != EOF) {
        
        if (c == L'\n' && enteredWords == YES) {
            break; // Завершаем ввод, если введено хотя бы одно слово и нажата клавиша Enter
        }

        if (c == L' ' || c == L'\n') {
            enteredWords = YES; // Устанавливаем флаг, если введено хотя бы одно слово
        }

        if ((c == L'a' ||  c == L'e' ||  c == L'i' ||  c == L'o' ||  c == L'u' ||  c == L'y' || 
             c == L'А' ||  c == L'E' ||  c == L'I' ||  c == L'О' || c == L'U' ||  c == L'Y'  ) && flag == NO) {
            flag = YES;
            cnt++; // Увеличиваем счетчик, если найдена гласная буква и это начало слова
        } else if (flag == YES && (c == L' ' || c == L'\n')) {
            flag = NO; // Сбрасываем флаг, если слово закончилось
        }
    }

    printf("Количество слов, начинающихся с гласной буквы = %d\n", cnt);

    return 0;
}

#define YES 1
#define NO 0
           

           int Lr5()

          {
    int c;
    int flag = NO;
    int cnt = 0;
    int vowelsCount = 0;
    int enteredWords = NO;

    printf("Введите слова (для завершения ввода нажмите Enter):\n");

    while ((c = getchar()) != EOF) {
        if (c == '\n' && enteredWords == YES) {
            break; // Завершаем ввод, если введено хотя бы одно слово и нажата клавиша Enter
        }

        if (c == ' ' || c == '\n') {
            enteredWords = YES; // Устанавливаем флаг, если введено хотя бы одно слово
        }

        if ((c == 'a' ||  c == 'e' ||  c == 'i' ||  c == 'o' ||  c == 'u' ||  c == 'y' || 
             c == 'A' ||  c == 'E' ||  c == 'I' ||  c == 'O' || c == 'U' ||  c == 'Y'  ) && flag == NO) {
            flag = YES;
            vowelsCount = 1;
        } else if (flag == YES && (c == ' ' || c == '\n')) {
            if (vowelsCount > 2) {
                cnt++;
            }
            flag = NO;
            vowelsCount = 0;
        } else if (flag == YES && (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || 
                                   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||c == 'Y' )) {
            vowelsCount++;
        }
    }

    printf("Количество слов, с более чем двумя гласными буквами = %d\n", cnt);

    return 0;
}

 
#define SIZE 10

            int Lr6()
            {
                int mas[SIZE];
                int max = 0;

                // Ввод данных
                for (int i = 0; i < SIZE; i++)
                {
                    scanf("%d", &mas[i]);
                    if (i == 0 || mas[i] > max) // Находим масимальное
                    {
                        max = mas[i];
                    }
                }

                // Проверка на 0
                if (max == 0)
                {
                    printf("Максимальное значние 0 . Деление на 0 запрещено.\n");
                    return 1;
                }

                // Делим отрицательные на максимальное
                for (int i = 0; i < SIZE; i++)
                {
                    if (mas[i] < 0)
                    {
                        mas[i] /= max; 
                    }
                }

                // печатаем результат
                for (int i = 0; i < SIZE; i++)
                {
                    printf("%d ", mas[i]);
                }
                printf("\n");

                return 0;
            }

#define K 3 
#define N 4

            int Lr7() 
{



                int x[K][N]; 
    int i, j;
    int maxsum, minsum; // Максимальная и минимальная сумма
    int maxindex, minindex; // индексы этих строк

    
    printf("Введите элементы массива:\n");
    for (i = 0; i < K; i++) 
    {
        for (j = 0; j < N; j++) 
        {
            scanf("%d", &x[i][j]);
        }
    }

    maxindex = 0;
    minindex = 0;
    maxsum = minsum = 0;
    for (j = 0; j < N; j++)
    {
        maxsum += x[0][j];
        minsum += x[0][j];
    }

    
    for (i = 1; i < K; i++) 
    {
        int sum = 0;
        for (j = 0; j < N; j++) 
        {
            sum += x[i][j];
        }
        if (sum > maxsum) 
        {
            maxsum = sum;
            maxindex = i;
        }
        if (sum < minsum) 
        {
            minsum = sum;
            minindex = i;
        }
    }

    
    for (j = 0; j < N; j++) 
    {
        int t = x[maxindex][j];
        x[maxindex][j] = x[minindex][j];
        x[minindex][j] = t;
    }

    
    printf("Измененный массив:\n");
    for (i = 0; i < K; i++) 
    {
        for (j = 0; j < N; j++) 
        {
            printf("\t%d", x[i][j]);
        }
        printf("\n");
    }

    return 0;
}


int Lr8() 
{
  long z; //исходное число

  unsigned long y; //беззнаковый формат исходного числа

  unsigned long mask = 1; // маска, в двоичном виде

  int result; // переменная, которая будет хранить результат

  printf("z = ");
  scanf("%x", &z); // ввод исходного числа

  int flag = 0;// переменная дляхранения умножения на маску


  y = (unsigned int) z; // перевод искодного числа в беззнаковый формат

  for (size_t i = 0; i < 32; i++) // i перебирает все разряды числа в двоичной сс. Тк мы используем тип лонг, то разрядов будет 32 (как и количество бит в числе),  перебот начинаем с о и заканчиваем на 31.
  {
    flag = z & mask; // Логическое умножение на маску
    if(flag != 0)
    {   //если flag  не равен 0
      result = i; // то приравниваем result к разряду единице в маске
    }
    mask = mask << 1; //сдвигаем маску влево на 1 бит
  }
  printf("result: %x", result);
  return 0;
}
