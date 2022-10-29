#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/***************************************************/
/*                  DEFINITIONS                    */
/***************************************************/
struct Vector3D {
    float xAxis;
    float yAxis;
    float zAxis;
};

float length(struct Vector3D v1);
float dotProduct(struct Vector3D v1, struct Vector3D v2, float angle);
struct Vector3D addition(struct Vector3D v1, struct Vector3D v2);
struct Vector3D substraction(struct Vector3D v1, struct Vector3D v2);
struct Vector3D crossPrdoct(struct Vector3D v1, struct Vector3D v2);
struct Vector3D productByScalar(struct Vector3D v1, long signed int scalar);
struct Vector3D normalize(struct Vector3D v1);

void readVector3D(struct Vector3D* v1);
void printVector3D(struct Vector3D* v1);

void usage(void);

// main program
int main(int argc, __attribute__((unused)) char** argv) {
    if (argc != 1)
        usage();

    struct Vector3D op1;
    struct Vector3D op2;
    struct Vector3D temp;

    readVector3D(&op1);
    readVector3D(&op2);

    printVector3D(&op1);
    printVector3D(&op2);

    temp = crossPrdoct(op1, op2);
    printVector3D(&temp);

    return 0;
}


/***************************************************/
/*                 IMPLEMENTATION                  */
/***************************************************/
float length(struct Vector3D v1) {
    return (float)sqrt(pow(v1.xAxis, 2) + pow(v1.yAxis, 2) + pow(v1.zAxis, 2));
}

float dotProduct(struct Vector3D v1, struct Vector3D v2, float angle) {
    float l1 = length(v1);
    float l2 = length(v2);

    return l1 * l2 * (float)cos(angle);
}

struct Vector3D addition(struct Vector3D v1, struct Vector3D v2) {
    struct Vector3D temp;

    temp.xAxis = v1.xAxis + v2.xAxis;
    temp.yAxis = v1.yAxis + v2.yAxis;
    temp.zAxis = v1.zAxis + v2.zAxis;

    return temp;
}

struct Vector3D substraction(struct Vector3D v1, struct Vector3D v2) {
    struct Vector3D temp;

    temp.xAxis = -v2.xAxis;
    temp.yAxis = -v2.yAxis;
    temp.zAxis = -v2.zAxis;

    // v1 + (-v2) = v1 - v2
    return addition(v1, temp);
}

struct Vector3D crossPrdoct(struct Vector3D v1, struct Vector3D v2) {
    struct Vector3D temp;

    temp.xAxis = (v1.yAxis * v2.zAxis) - (v1.zAxis * v2.yAxis);
    temp.yAxis = (v1.zAxis * v2.xAxis) - (v1.xAxis * v2.zAxis);
    temp.zAxis = (v1.xAxis * v2.yAxis) - (v1.yAxis * v2.xAxis);

    return temp;
}


struct Vector3D productByScalar(struct Vector3D v1, long signed int scalar) {
    struct Vector3D temp;

    temp.xAxis = scalar * v1.xAxis;
    temp.yAxis = scalar * v1.yAxis;
    temp.zAxis = scalar * v1.zAxis;

    return temp;
}

struct Vector3D normalize(struct Vector3D v1) {
    float l1 = length(v1);
    struct Vector3D temp;

    temp.xAxis = v1.xAxis / l1;
    temp.yAxis = v1.yAxis / l1;
    temp.zAxis = v1.zAxis / l1;

    return temp;
}

void readVector3D(struct Vector3D* v1) {
    printf("vector coordinates [x, y, z]: ");
    scanf("%f %f %f", &(v1->xAxis), &(v1->yAxis), &(v1->zAxis));
}

void printVector3D(struct Vector3D* v1) {
    printf("[%f, %f, %f]\n", v1->xAxis, v1->yAxis, v1->zAxis);
}

void usage(void) {
    printf("usage: vector\n");
    exit(1);
}
