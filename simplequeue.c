
#include <stdio.h>
#include <stdlib.h>
#include <sys/queue.h>

struct QUEUE_ITEM {
	int value;
	SIMPLEQ_ENTRY(QUEUE_ITEM) entry;
};

static SIMPLEQ_HEAD(,QUEUE_ITEM) queue_head;
//static SIMPLEQ_HEAD(,QUEUE_ITEM) queue_head = SIMPLEQ_HEAD_INITIALIZER();

int main(int argc, char *argv[])
{
	int i = 0;
	struct QUEUE_ITEM *item;
	struct QUEUE_ITEM *tmp_item;

	SIMPLEQ_INIT(&queue_head);

	if (SIMPLEQ_EMPTY(&queue_head))
		printf("queue is empty\n");

	for( i = 0; i < 10; i += 1)
	{
		item = (struct QUEUE_ITEM *)malloc(sizeof(struct QUEUE_ITEM));
		item->value = i;
		SIMPLEQ_INSERT_HEAD(&queue_head, item, entry);
	}

	printf("after insert 10 item to queue:\n");
	SIMPLEQ_FOREACH(item, &queue_head, entry)
		printf("item value = %d\n", item->value);

	SIMPLEQ_FOREACH(tmp_item, &queue_head, entry)
	{
		if(tmp_item->value % 2 != 0)
			SIMPLEQ_REMOVE_HEAD(&queue_head, entry);
	}

	printf("after delete 5 items from queue:\n");
	SIMPLEQ_FOREACH(item, &queue_head, entry)
		printf("item value = %d\n", item->value);

	return 0;
}
