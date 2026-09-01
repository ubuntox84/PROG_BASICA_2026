// Almacenar el nombre del curso, 4 notas y estado del alumno.

#include <cstdio>

int main() {

    char nameCourse[50];
    char nameStudent[50];
    char state[50];

    float note1;
    float note2;
    float note3;
    float note4;

    printf("Ingrese su nombre Alumno: ");
    scanf(" %49[^\n]", nameStudent);

    printf("Ingrese su nombre Curso: ");
    scanf(" %49[^\n]", nameCourse);

    printf("Ingrese las 4 notas: ");
    scanf("%f %f %f %f", &note1, &note2, &note3, &note4);

    float average = (note1 + note2 + note3 + note4) / 4.0;

    if (average >= 10.5) {
        snprintf(state, sizeof(state), "Aprobado");
    } else {
        snprintf(state, sizeof(state), "Desaprobado");
    }

    printf("\n----- RESULTADO -----\n");

    printf("Alumno: %s\n", nameStudent);
    printf("Curso: %s\n", nameCourse);

    printf("Notas: %.2f - %.2f - %.2f - %.2f\n",
           note1, note2, note3, note4);

    printf("Promedio: %.2f\n", average);
    printf("Estado: %s\n", state);

    return 0;
}