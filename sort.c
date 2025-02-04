#include <cs3050.h>

void bubblesort(void *array, 
				size_t nitems, 
				size_t size, 
				int (*CompareFunc)(const void *, const void*))
{
	for (int i=0;i<nitems;i++)
	{
		for (int j=0;j<nitems-1;j++)
		{
			void * item1 = array + j*size;
			void * item2 = array + (j+1)*size;
			if (CompareFunc(item1,item2)>0)
			{
				Swap(item1,item2,size);
			}
		}
	}
}

void insertionsort(void *array, 
				size_t nitems, 
				size_t size, 
				int (*CompareFunc)(const void *, const void*))

{
	for (int i = 0; i < size; i++) {
		int start = 0;
		for (int j = i; j < size; j++) {
			void * item1 = array + j * size;
			void * item2 = array + (start + 1) * size;
			if (CompareFunc(item1, item2) >0) {
				Swap(item1, item2, size);
			}
			start++;

		}
	}
}
