#include <stdio.h>
#include "Intvector.h"
#include "doublevector.h"
#include "ComplexVector.h"
#include "test.c"
int Ask_type(){
    printf("Введите тип данных\n1 - Int\n2 - Double\n3 - Complex\nВыбор:");
    int n;
    scanf("%d",&n);
    return n;
}
int Ask_activity(){
    printf("\nЧто хотите сделать\n1-Сложить вектора\n2-Вычесть вектора\n3-Получить скалярное произведение\n4-Умножить вектор на скаляр\n5-Получить скалярное произведение\nВыбор: ");
    int n;
    scanf("%d",&n);
    return n;
}
int Ask_continue_vector(){
    int a;
    printf("\n1-Продолжить с данным вектором\n0-нет\nВыбор:");
    scanf("%d",&a);
    return a;
}
int Ask_continue_type(){
    int a;
    printf("\n1-Продолжить с данным типом данных\n0-нет\nВыбор:");
    scanf("%d",&a);
    return a;
}int Ask_continue(){
    int a;
    printf("\n1-Продолжить \n0-конец\nВыбор:");
    scanf("%d",&a);
    return a;
}

int main() {
    int cont=1;
    while (cont==1) {
        int ask_type = Ask_type();
        int cont_type = 1;
        while (cont_type == 1) {
            if (ask_type == 1) {
                printf("Input vector: ");
                Vector *vector = make_int_vector();
                printf("\nYour vector: ");
                Print(vector);

                int cont_vector = 1;
                while (cont_vector == 1) {
                    int ask_activity = Ask_activity();
                    if (ask_activity == 1) {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_int_vector();
                        Vector *result = Sum(vector, vector2);
                        Print(result);
                    }
                    if (ask_activity == 2) {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_int_vector();
                        Vector *result = Substract(vector, vector2);
                        Print(result);
                    }
                    if (ask_activity == 3) {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_int_vector();
                        void *result = Multiply_vectors(vector, vector2);
                        vector->ringInfo->print(result);
                    }
                    if (ask_activity == 4) {
                        Vector *result = Multiply_on_scalar(vector);
                        Print(result);
                        vector = result;
                    }
                    if (ask_activity == 3) {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_int_vector();
                        Vector_Product(vector, vector2);
                    }
                    cont_vector = Ask_continue_vector();
                }
            }
            if (ask_type == 2) {
                printf("Input vector: ");
                Vector *vector = make_double_vector();
                printf("\nYour vector: ");
                printf("\n");
                Print(vector);
                int ask_activity = Ask_activity();
                int cont_vector = 1;
                while (cont_vector == 1) {
                    if (ask_activity == 1) {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_double_vector();
                        Vector *result = Sum(vector, vector2);
                        Print(result);
                    }
                    if (ask_activity == 2) {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_double_vector();
                        Vector *result = Substract(vector, vector2);
                        Print(result);
                    }
                    if (ask_activity == 3) {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_double_vector();
                        void *result = Multiply_vectors(vector, vector2);
                        vector->ringInfo->print(result);
                    }
                    if (ask_activity == 4) {
                        Vector *result = Multiply_on_scalar(vector);
                        Print(result);
                        vector = result;
                    }

                    cont_vector = Ask_continue_vector();
                }
            }
            if (ask_type == 3) {
                printf("Input vector: ");
                Vector *vector = make_complex_vector();
                printf("\nYour vector: ");
                Print(vector);
                int ask_activity = Ask_activity();
                int cont_vector = 1;
                while (cont_vector == 1) {
                    if (ask_activity == 1) {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_complex_vector();
                        Vector *result = Sum(vector, vector2);
                        Print(result);
                    }
                    if (ask_activity == 2) {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_complex_vector();
                        Vector *result = Substract(vector, vector2);
                        Print(result);
                    }
                    if (ask_activity == 3) {
                        printf("Input 2nd vector: ");
                        Vector *vector2 = make_complex_vector();
                        void *result = Multiply_vectors(vector, vector2);
                        vector->ringInfo->print(result);
                    }
                    if (ask_activity == 4) {
                        Vector *result = Multiply_on_scalar(vector);
                        Print(result);
                        vector = result;
                    }

                    cont_vector = Ask_continue_vector();
                }
            }



            cont_type = Ask_continue_type();
        }
        cont=Ask_continue();
    }

}
