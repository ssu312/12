//실습 1: 구조체 정의 및 활용

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// struct student {
//     int ID;        //학번
//     char name[30]; //이름
//     float grade;   //학점
// };

// int main(void)
// {
//     struct student s1 = {100,"subin",4.3};
//     s1.ID = 10;
//     strcpy(s1.name,"subin2");   //주의!!!!
//     s1.grade = 2.2;

//     printf("ID : %d\nname : %s\ngrade : %f\n", s1.ID, s1.name, s1.grade);

//     return 0;
// }

//실습 2: 구조체 연산
struct point {
    int  x;
    int  y;
};

int main(void) {
    struct point p1,p2;
    int xdiff, ydiff;
    double dist;

    printf("input p1 coordinate (x y):");
    scanf("%d %d", &p1.x,&p1.y);

    printf("input p2 coordinate (x y):");
    scanf("%d %d", &p2.x,&p2.y);

    //p1,p2 간 거리를 계산하여 출력(math.h 내 squrt() 함수 활용)

    xdiff = (p1.x - p2.x)*(p1.x - p2.x);
    ydiff = (p1.y - p2.y)*(p1.y - p2.y);

    dist = sqrt((double)(xdiff+ydiff));
    printf("distance : %f", dist);

    return 0;
}