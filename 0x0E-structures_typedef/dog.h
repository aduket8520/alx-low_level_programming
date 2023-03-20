#ifndef DOG_H
#define DOG_H
/**
 * struct dog - an animal that barks and offers security as well
 * @name: dogs name
 * @age: how old the dog is
 * @owner: who has rights over the dog
 * Description: this gives a description of the dogs origin
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
