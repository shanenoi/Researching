#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#define default_type double

void test();

/* define types */
typedef enum type {T_ARRAY1D, T_ARRAY2D} TYPE_ARRAY;

typedef struct _number_array_1d * num_a1d;
struct _number_array_1d {
    default_type * array;
    size_t size;
    TYPE_ARRAY type;
};
num_a1d num_a1d_init() {
    num_a1d variable = (num_a1d) malloc(sizeof(num_a1d));
    variable->type = (TYPE_ARRAY) malloc(sizeof(TYPE_ARRAY));
    variable->type = T_ARRAY1D;
    return variable;
}
void num_a1d_free(num_a1d variable) {
    free(variable->array);
    free(variable);
}


typedef struct _number_array_2d * num_a2d;
struct _number_array_2d {
    default_type ** array;
    size_t size;
    size_t each_element;
    TYPE_ARRAY type;
};
num_a2d num_a2d_init() {
    num_a2d variable = (num_a2d) malloc(sizeof(num_a2d));
    variable->type = (TYPE_ARRAY) malloc(sizeof(TYPE_ARRAY));
    variable->type = T_ARRAY2D;
    return variable;
}
void num_a2d_free(num_a2d variable) {
    free(variable->array);
    free(variable);
}


/* define funtions */
default_type Sigmoid(double number) {
    return 1.0 / (1.0 + exp(-number));
}

default_type Tanh(double number) {
    return (exp(number) - exp(-number)) / (exp(number) + exp(-number));
}

void * concat(void *array1, void *array2) {
}


int main() {
    test();
}


void test() {
    // test functions
    assert(Sigmoid(1) == 0.7310585786300049);
    assert(Tanh(1) == 0.7615941559557649);


    // test num_a1d
    num_a1d array = num_a1d_init();
    array->size = 10;
    assert(array->type == T_ARRAY1D);
    array->array = (default_type *) malloc(
            sizeof(default_type) * array->size
    );
    for (int index=0; index<array->size; index++) {
        *(array->array + index) = index;
        assert(*(array->array + index) == (default_type)*(array->array + index));
    }
    num_a1d_free(array);


    // test num_a2d
    num_a2d array2 = num_a2d_init();
    array2->size = 10;
    array2->each_element = 10;
    assert(array2->type == T_ARRAY2D);
    array2->array = (default_type **) malloc(sizeof(default_type) * array2->size);

    int counter = 0;
    for (int index=0; index<array2->size; index++) {
        *(array2->array + index) = (default_type *) malloc(
                sizeof(default_type) * array2->each_element
        );

        for (int jndex=0; jndex<array2->each_element; jndex++) {
            *(array2->array[index] + jndex) = counter;
            assert(*(array2->array[index] + jndex) == counter);
            counter++;
        }
    }
    num_a2d_free(array2);
}
