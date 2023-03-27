#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "typeDef.h"
// w projekcie utworzyć plik "typeDef.h" ze strukturą danych do listy np:
// typedef struct {
// int x;
// int y;
// gfx2dPoint_t point;
// } dataLinkedList_t;

typedef struct node {
	dataLinkedList_t data;
	struct node *next;
} node_t;

node_t* LL_create(dataLinkedList_t firstData);
node_t* LL_pushEnd(node_t *head, dataLinkedList_t *data);
node_t* LL_pushStart(node_t **head, dataLinkedList_t *data);
node_t* LL_popEnd(node_t *head, dataLinkedList_t *data);
node_t* LL_popStart(node_t **head, dataLinkedList_t *data);
node_t* LL_readByIndex(node_t *head, dataLinkedList_t *data, uint32_t index);
node_t* LL_replaceByIndex(node_t *head, dataLinkedList_t *data, uint32_t index);
node_t* LL_removeByIndex(node_t **head, uint32_t index);
uint32_t LL_size(node_t *head);
void LL_delete(node_t *head);

#endif /* LINKEDLIST_H_ */
