#include "prototype.h"

Vector* initializer(int initCap){
	Vector* V = (Vector*)malloc(sizeof(Vector));
		if(V == NULL){
			exit(0);
		}
		V->size = 0;
		V->cap = initCap;
		V->vec = (int*)malloc(initCap * sizeof(int));
		if(V->vec == NULL){
			exit (0);
		}
		return V;

}

void destroy(Vector* V){
	free(V->vec);
	V->vec = NULL;
	free(V);
	V = NULL;
}

void push_back(Vector* V,int val){
	if(V->size == V->cap){
		V->cap *= 2;
		int* tmp = (int*)malloc(V->cap * sizeof(int));
		if(tmp == NULL){
			destroy(V);
			exit(0);
		}
		for(int i = 0; i < V->size; ++i){
			tmp[i] = V->vec[i];
		}
		free(V->vec);
		V->vec = tmp;
		tmp = NULL;

		//	V->vec = (int*)realloc(V->vec,V->cap * sizeof(int));
	}
	V->vec[V->size] = val;
	++(V->size);
}

void print(Vector* V){
	for(int i = 0; i < V->size; ++i){
		printf("%d ", V->vec[i]);
	}
	printf("\n");
}

int at(Vector* V,int ind){
	if(ind < 0 || ind >= V->size){
		printf("index out of range!");
		return -1;
	}
	return V->vec[ind];
}

bool isEmpty(Vector* V){
return V->size == 0; 
}

int pop_back(Vector* V){
    if(isEmpty(V)){
    	printf("Vector is Empty");
	return -1;
    }
    int tmp = V->vec[V->size - 1];
    V->vec[V->size - 1] = 0;
    --(V->size);
    return tmp;
}

int front(Vector* V){
	if(isEmpty(V)){
	printf("Vector is Empty");
	return -1;
	}
	return V->vec[0];
}

int back(Vector* V){
	if(isEmpty(V)){
	printf("Vector is empty");
	return -1;
	}
	return V->vec[V->size -1];
}


 int size(Vector* V){
 	return V->size;
 }

 int capacity(Vector* V){
 	return V->cap;
 }


 void insert(Vector* V,int pos,int val){
 	if(pos < 0 || pos >= V->size){
	printf("position out of range!");
	return;
	}

	if(V->cap == V->size){
		V->cap *=2;
		V->vec = (int*)realloc(V->vec,V->cap * sizeof(int));
	}

	for(int i = V->size; i > pos; --i){
		V->vec[i] = V->vec[i - 1];
	}

	V->vec[pos] = val;
	++(V->size);
 
 }

 void erase(Vector* V,int pos){
 	if(pos < 0 || pos >= V->size){
		printf("position out of range! \n");
		return;	
	}
	--(V->size);
	V->vec[V->size] = 0;
 
 }

 void clear(Vector* V){
 	for(int i = 0; i < V->size; ++i){
		V->vec[i] = 0;
	}
	V->size = 0;
 
 
 }


 void shrink_to_fit(Vector* V){
 	if(V->size == V->cap){
		return;
	}
 	V->cap = V->size;
	V->vec = (int*)realloc(V->vec,V->cap * sizeof(int));

	 
 }
