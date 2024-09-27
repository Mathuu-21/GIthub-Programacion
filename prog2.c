#include <stdio.h>
int main() {
    int numalumnos, nummaterias, edad, aprob, reprob, mayor21_reprobadas = 0;
    int total_aprob = 0, total_reprob = 0;
    float porcentajeaprob, porcentajereprob;
    printf("Ingrese el numero de alumnos: ");
    scanf("%d", &numalumnos);
    printf("Ingrese el numero de materias: ");
    scanf("%d", &nummaterias);
    for (int i = 1; i <= numalumnos; i++) {
        printf("Ingrese la edad del alumno %d: ", i);
        scanf("%d", &edad);
        printf("Ingrese el numero de materias aprobadas del alumno %d: ", i);
        scanf("%d", &aprob);
        printf("Ingrese el numero de materias reprobadas del alumno %d: ", i);
        scanf("%d", &reprob);
        if (edad > 21 && reprob > 2) {
            mayor21_reprobadas++;
        }
        total_aprob += aprob;
        total_reprob += reprob;
    }

    printf("\nCantidad de alumnos mayores a 21 años con más de 2 materias reprobadas: %d\n", mayor21_reprobadas);

    porcentajeaprob = (float)total_aprob * 100 / (total_aprob + total_reprob);
    porcentajereprob = (float)total_reprob * 100 / (total_aprob + total_reprob);
    printf("Porcentaje de materias aprobadas: %.2f%%\n", porcentajeaprob);
    printf("Porcentaje de materias reprobadas: %.2f%%\n", porcentajereprob);
    return 0;
}