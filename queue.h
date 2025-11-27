#ifndef QUEUE_H
#define QUEUE_H

#include "../linked_list/list.h"

typedef List Queue;

#define queue_init list_init

#define queue_destroy list_destroy

int queue_enqueue(Queue *queue, const void *data);

int queue_dequeue(Queue *queue, void **data);

static inline void *queue_peek(Queue *queue) {
    return queue->head == NULL ? NULL : queue->head->data;
}

#define queue_size list_size

#endif