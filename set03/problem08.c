#include<stdio.h>
typedef struct point {
    float x,y;
} Point;


typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n(){
    int x;
    printf("enter no of sides of a polygon: ");
    scanf("%d",&x);
    return x;
}
Point input_point(char *promt_msg){
    Point P;
    for(int i=0;i<=promt_msg;i++){
    printf("enter the coordinates of point %d",promt_msg);
    scanf("%f %f",P.x,P.y);
    }
    return P;
}
int input_polygon(Polygon *p){
    int p;
    printf("enter no of polygons:\n");
    scanf("%d",&p);
    return p;
}
float find_distance(Point a, Point b);
void find_perimeter(Polygon *p);
void output(Polygon p);
int main(){
    Polygon p[100];
    char promt_msg[100];
    Point a=input_point(promt_msg);
}