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
