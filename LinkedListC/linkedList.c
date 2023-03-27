#include "linkedList.h"

node_t* LL_create(dataLinkedList_t firstData) {
	node_t *head = NULL;
	head = (node_t*) malloc(sizeof(node_t));
	if (head == NULL) {
		return NULL;
	}
	head->data = firstData;
	head->next = NULL;
	return head;
}

node_t* LL_pushEnd(node_t *head, dataLinkedList_t *data) {
	node_t *current = head;
	while (current->next != NULL) {
		current = current->next;
	}
	current->next = (node_t*) malloc(sizeof(node_t));
	if (current->next == NULL) {
		return NULL;
	}
	current->next->data = *data;
	current->next->next = NULL;
	return current->next;
}

node_t* LL_pushStart(node_t **head, dataLinkedList_t *data) {
	node_t *new_node;
	new_node = (node_t*) malloc(sizeof(node_t));
	if (new_node == NULL) {
		return NULL;
	}
	new_node->data = *data;
	new_node->next = *head;
	*head = new_node;
	return new_node;
}

node_t* LL_popEnd(node_t *head, dataLinkedList_t *data) {
	if (head->next == NULL) {
		*data = head->data;
		free(head);
	}
	node_t *current = head;
	while (current->next->next != NULL) {
		current = current->next;
	}
	*data = current->next->data;
	free(current->next);
	current->next = NULL;
	return head->next;
}

node_t* LL_popStart(node_t **head, dataLinkedList_t *data) {
	node_t *next_node = NULL;
	if (*head == NULL) {
		return NULL;
	}
	next_node = (*head)->next;
	*data = (*head)->data;
	free(*head);
	*head = next_node;
	return next_node;
}

node_t* LL_readByIndex(node_t *head, dataLinkedList_t *data, uint32_t index) {
	return NULL;
}

node_t* LL_replaceByIndex(node_t *head, dataLinkedList_t *data, uint32_t index) {
	return NULL;
}

node_t* LL_removeByIndex(node_t **head, uint32_t index) {
	node_t *current = *head;
	node_t *temp_node = NULL;
	if (index == 0) {
		dataLinkedList_t data;
		LL_popEnd(*head, &data);
	}
	for (uint32_t i = 0; i < index - 1; i++) {
		if (current->next == NULL) {
			return NULL;
		}
		current = current->next;
	}
	if (current->next == NULL) {
		return NULL;
	}
	temp_node = current->next;
//	retval = temp_node->val;
	current->next = temp_node->next;
	free(temp_node);

	return current->next;
}

uint32_t LL_size(node_t *head) {
	return 0;
}

void LL_delete(node_t *head) {
}

