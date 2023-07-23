#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*_strlen - returns length of string
*@s: input string
*
*Return: length of string
*/
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
*_strcpy - copies string from src
*including the NULL byte to dest
*@src: pointer to copy from
*@dest: pointer to copy to
*
*Return:pointer to dest
*/
char *_strcpy(char *src, char *dest)
{

	int length, i;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
*new_dog - creates new dog
*@name: First member
*@age: second member
*@owner: third member
*
*Return: pointer to the dog(success),NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
