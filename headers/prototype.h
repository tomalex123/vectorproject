typedef struct{
	int size;
	int cap;
	int* vec;
} Vector;

 Vector* initializer(int );
 void destroy(Vector*);
 void push_back(Vector* V,int );
 void print(Vector*);
 int at(Vector*, int);
 bool isEmpty(Vector*);
 int pop_back(Vector*);
 int front(Vector*);
 int back(Vector*);
 int size(Vector*);
 int capacity(Vector*);
 void insert(Vector* ,int ,int );
 void erase(Vector*, int);
 void clear(Vector*);
 void shrink_to_fit(Vector*);
