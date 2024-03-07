#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LOGITUD_MAXIMA 50

int main() {
  char cadenaScanf[LOGITUD_MAXIMA];
  char cadenaFgets[LOGITUD_MAXIMA];

  // Uso de scanf para leer una palabra
  printf("Usamos scanf para leer una palabra\n");
  printf("----------------------------------\n");
  printf("Escribe una palabra: ");
  scanf("%s", cadenaScanf);
  printf("Cadena leída por scanf: %s\n\n", cadenaScanf);

  // Limpiar el búfer de entrada después de scanf
  while (getchar() != '\n');  // Lee y descarta los caracteres restantes en el búfer

  // Uso de fgets para leer una línea completa
  printf("Usamos fgets para leer una línea completa\n");
  printf("-----------------------------------------\n");
  printf("Escribe una línea: ");
  fgets(cadenaFgets, sizeof(cadenaFgets), stdin);
  printf("Cadena leída por fgets: %s\n", cadenaFgets);

  return EXIT_SUCCESS;
}