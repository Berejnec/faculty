#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char nume[51];
    char gen;
    float media;
}Student;

//sortare stabila
void insertSort(Student studenti[], int n)
{
    Student aux;

    for (int i = 1; i < n; i++)
    {
        Student aux = studenti[i];

        int j = i - 1;
        while (j >= 0 && aux.media > studenti[j].media)
        {
            studenti[j + 1] = studenti[j];
            j--;
        }

        studenti[j + 1] = aux;
    }
}

void quicksort_gen(Student a[], int s, int d)
{
    int i = s, j = d;
    Student   x = a[(s + d) / 2];

    do
    {
        while (a[i].gen < x.gen)
        {
            i++;
        }
        while (a[j].gen > x.gen)
        {
            j--;
        }
        if (i <= j)
        {
            Student temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);

    if (s < j)
    {
        quicksort_gen(a, s, j);
    }
    if (d > i)
    {
        quicksort_gen(a, i, d);
    }
}

void quicksort_medie(Student a[], int s, int d)
{
    int i = s, j = d;
    Student   x = a[(s + d) / 2];

    do
    {
        while (a[i].media < x.media)
        {
            i++;
        }
        while (a[j].media > x.media)
        {
            j--;
        }
        if (i <= j)
        {
            Student temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);

    if (s < j)
    {
        quicksort_medie(a, s, j);
    }
    if (d > i)
    {
        quicksort_medie(a, i, d);
    }
}

void quicksort_nume(Student a[], int s, int d)
{
    int i = s, j = d;
    Student   x = a[(s + d) / 2];

    do
    {
        while (strcmp(a[i].nume, x.nume) < 0)
        {
            i++;
        }
        while (strcmp(a[j].nume, x.nume) > 0)
        {
            j--;
        }
        if (i <= j)
        {
            Student temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);

    if (s < j)
    {
        quicksort_nume(a, s, j);
    }
    if (d > i)
    {
        quicksort_nume(a, i, d);
    }
}

void sortareAmpla(Student s[], int n)
{
    quicksort_gen(s, 0, n - 1);

    int last_f = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].gen == 'F')
        {
            last_f = i;
        }
    }

    quicksort_medie(s, 0, last_f);
    quicksort_medie(s, last_f + 1, n-1);

    int d;
    for (int i = 0; i < n; i++)
    {
        int ok = 0;
        int j = i + 1;

        while (s[j].media == s[i].media)
        {
            ok = 1;
            j++;
        }
        d = j - 1;

        if(ok == 1)
        {
            quicksort_nume(s, i, d);
            i = j;
        }
    }
}

int main()
{
    int n, count = 0;
    Student studenti[10];
    char name[51], name1[51];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%f %c ", &studenti[i].media, &studenti[i].gen);
        fgets(studenti[i].nume, 51, stdin);
        studenti[i].nume[strcspn(studenti[i].nume, "\n")] = 0;
    }

    fgets(name, 51, stdin);
    name[strcspn(name, "\n")] = 0;

    fgets(name1, 51, stdin);
    name1[strcspn(name1, "\n")] = 0;

    insertSort(studenti, n);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(name, studenti[i].nume) == 0)
        {
            printf("%d\n", i);
            break;
        }
        //printf("%s %d\n", studenti[i].nume, strlen(studenti[i].nume));
    }

    sortareAmpla(studenti, n);
    for (int i = 0; i < n; i++)
    {
        //printf("%s\n", studenti[i].nume);
        if (strcmp(name1, studenti[i].nume) == 0)
        {
            printf("%d", i);
            break;
        }
    }

    return 0;
}

