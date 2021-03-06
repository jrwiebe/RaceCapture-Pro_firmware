#ifndef HEAP_H_
#define HEAP_H_
#include <stdlib.h>

void initMemoryPool();
void *pvPortMalloc( size_t xWantedSize );
void vPortFree( void *pv );
void * pvPortRealloc( void *pv, size_t xWantedSize );

#endif
