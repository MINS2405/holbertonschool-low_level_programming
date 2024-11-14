D�finition de malloc:
La fonction malloc (memory allocation) permet d'allouer dynamiquement de la mémoire pendant l'exécution d'un programme. Elle est déclarée dans la bibliothèquelib.h>
syntaxe:
void *malloc(size_t size);
* malloc prend en paramètre la taille en octets de la mémoire à alloue
* Elle retourne un pointeur de type void * vers la zone mémoire allouée, ou NULL en cas d'éch
* Le pointeur retourné doit généralement être casté vers le type appro
Exemple de utilisation:
int *ptr = (int *)malloc(5 * sizeof(int));

D�finition de free:
La fonction free libère la mémoire précédemment allouée par malloc. Elle est également déclarée dans.h>.
syntaxe:
void free(void *ptr);
* free prend en paramètre le pointeur retourné par malloc.
* Elle ne retourne rien.
Exemple de utilisation:
free(ptr);

Points importants:
* La mémoire allouée par malloc n'est pas initialisée.
* Il est crucial de libérer la mémoire avec free pour éviter les fuites de mémoire.
* Après l'appel à free, le pointeur devient invalide et ne doit plus être utilisé.
Toujours vérifier si malloc a réussi avant d'utiliser le pointeur retourné.
L'utilisation de malloc et free permet une gestion flexible de la mémoire
particulièrement utile pour les structures de données de taille variable ou inconnue à la compilation
