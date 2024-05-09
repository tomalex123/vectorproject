#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "./headers/prototype.h"
#include "./headers/init.h"


 int main(){
 
 	Vector* V = initializer(1);
	push_back(V, 1);
	push_back(V, 2);
	printf("cap %d \n", capacity(V));
	push_back(V, 3);
	printf("cap %d \n", capacity(V));
	push_back(V, 4);
	print(V);
	printf("at - %d \n ",at(V, 2));
	printf("is_Empty %d \n", isEmpty(V));
	printf("Front  %d \n", front(V));
	printf("Back %d \n", back(V));
	printf("size %d \n", size(V));
	printf("pop_back %d \n", pop_back(V));
	printf("size %d \n", size(V));
	insert(V, 2, 7);
	print(V);
	erase(V,1);
	print(V);
	printf("cap %d \n", capacity(V));
 	shrink_to_fit(V);
	printf("cap %d \n", capacity(V));
	destroy(V);
 
 }


