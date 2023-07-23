#ifndef DOG_H
#define DOG_H

/**
*struct dog - dog's information
*@name: First member
*@age: Second member
*@owner: Third member
*
*Description: Longer Description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
*dog_t - Typdef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
char *_strlen(char *s);

#endif
