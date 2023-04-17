#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog's bsic info
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - typedf for struct dog
 */
typedf struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
