//global vars
Semaphore mutex(1), num_buffer(n), num_data(0);
int rear = -1;
int front = -1;
int count = 0;

while (1) //producer
{
	produce an item;
	num_buffer.wait(); //for sync
	rear = (rear + 1) % n;
	num_data.signal(); //for sync
}

while (1) //consumer
{
	num_data.wait(); //for sync
	front = (front + 1) % n;
	cdata = buffer[front];
	num_buffer.signal(); //for sync

	//process an item..
}