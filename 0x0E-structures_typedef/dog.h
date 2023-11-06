#ifndef DOG_H
#define DOG_H
/**
 * struct dog - is a dog data
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog owner
 *
 * Description: this defines metadata about the dog and struct type
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* added function prototype */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
