Définition de malloc:
La fonction malloc (memory allocation) permet d'allouer dynamiquement de la mémoire pendant l'exécution d'un programme. Elle est déclarée dans la bibliothèque <stdlib.h>
syntaxe:
void *malloc(size_t size);
* malloc prend en paramètre la taille en octets de la mémoire à  alloue
* Elle retourne un pointeur de type void * vers la zone mémoire allouée, ou NULL en cas d'échec
* Le pointeur retournée doit généralement être castÃ© vers le type appro
Exemple de utilisation:
int *ptr = (int *)malloc(5 * sizeof(int));

DÃfinition de free:
La fonction free libère la mémoire précédemment allouée par malloc. Elle est également déclarée dans.h>.
syntaxe:
void free(void *ptr);
* free prend en paramÃ¨tre le pointeur retournÃ© par malloc.
* Elle ne retourne rien.
Exemple de utilisation:
free(ptr);

Points importants:
* La mÃ©moire allouÃ©e par malloc n'est pas initialisÃ©e.
* Il est crucial de libÃ©rer la mÃ©moire avec free pour Ã©viter les fuites de mÃ©moire.
* AprÃ¨s l'appel Ã  free, le pointeur devient invalide et ne doit plus Ãªtre utilisÃ©.
Toujours vÃ©rifier si malloc a rÃ©ussi avant d'utiliser le pointeur retournÃ©.
L'utilisation de malloc et free permet une gestion flexible de la mÃ©moire
particuliÃ¨rement utile pour les structures de donnÃ©es de taille variable ou inconnue Ã  la compilation
