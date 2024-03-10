#include<stdio.h>
#include<math.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);
int main(){
    Line l=input_line();
    find_length(&l);
    output(l);
    return 0;
}
Point input_point(){
    Point p;
    printf("Enter the x part: ");
    scanf("%f",&p.x);
    printf("Enter the y part: ");
    scanf("%f",&p.y);
    return p;
}
Line input_line(){
    Line l;
    printf("Enter the line1:\n");
    l.p1=input_point();
    printf("Enter the line2:\n");
    l.p2=input_point();
    return l;
}
void find_length(Line *l){
    float dx=l->p1.x - l->p2.x;
    float dy=l->p1.y - l->p2.y;
    l->distance=sqrt(dx * dx + dy * dy);
}
void output(Line l){
    printf("The distance between (%.2f,%.2f) and (%.2f,%.2f) will be %.2f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}