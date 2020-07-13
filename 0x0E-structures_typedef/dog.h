#ifndef _DOG_H
#define _DOG_H
/**
* struct dog - New type
* @name: Name
* @age: Age
* @owner: Owner
*
* Description: Define a new type
*/
typedef struct dog
{
char *name;
float age;
char *owner;
};

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);

#endif /* _DOD_H */
