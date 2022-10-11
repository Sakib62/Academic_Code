///Sakibul Islam
///2019831062
///C assignment-problem1

#include<stdio.h>

struct swe
{
    int reg, solved;
    double cgpa;
};

void sort(struct swe student[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    struct swe student[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %lf", &student[i].reg, &student[i].solved, &student[i].cgpa);
    }
    sort(student, n);
    for(int i = 0; i < n; i++)
    {
        printf("\n%d  %d  %0.2lf\n", student[i].reg, student[i].solved, student[i].cgpa);
    }
    return 0;
}

void sort(struct swe student[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(student[j].solved > student[i].solved)
            {
                struct swe temp;
                temp.reg = student[i].reg;
                temp.solved = student[i].solved;
                temp.cgpa = student[i].cgpa;

                student[i].reg = student[j].reg;
                student[i].solved = student[j].solved;
                student[i].cgpa = student[j].cgpa;

                student[j].reg = temp.reg;
                student[j].solved = temp.solved;
                student[j].cgpa = temp.cgpa;
            }
        }
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(student[j].solved == student[i].solved)
            {
                if(student[j].cgpa > student[i].cgpa)
                {
                    struct swe temp;
                    temp.reg = student[i].reg;
                    temp.solved = student[i].solved;
                    temp.cgpa = student[i].cgpa;

                    student[i].reg = student[j].reg;
                    student[i].solved = student[j].solved;
                    student[i].cgpa = student[j].cgpa;

                    student[j].reg = temp.reg;
                    student[j].solved = temp.solved;
                    student[j].cgpa = temp.cgpa;
                }
            }
        }
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(student[j].cgpa == student[i].cgpa)
            {
                if(student[j].reg < student[i].reg)
                {
                    struct swe temp;
                    temp.reg = student[i].reg;
                    temp.solved = student[i].solved;
                    temp.cgpa = student[i].cgpa;

                    student[i].reg = student[j].reg;
                    student[i].solved = student[j].solved;
                    student[i].cgpa = student[j].cgpa;

                    student[j].reg = temp.reg;
                    student[j].solved = temp.solved;
                    student[j].cgpa = temp.cgpa;
                }
            }
        }
    }


}


