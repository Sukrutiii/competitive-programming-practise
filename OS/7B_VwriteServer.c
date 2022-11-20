#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/shm.h>
#include <string.h>
int main()
{
    int i;
    void *shared_memory;
    char buff[100];
    int shmid;
    shmid = shmget((key_t)2345, 1024, 0666 | IPC_CREAT); /*creates shared memory segment with key 2345, having size 1024 bytes. IPC_CREAT is used to create the shared segment if it does not exist. 0666 are the permisions on the shared segment*/

    printf("Key of shared memory is %d\n", shmid);
    shared_memory = shmat(shmid, NULL, 0);             // process attached to shared memory segment
    printf("Process attached at %p\n", shared_memory); // this prints the address where the Segment is attached with this process
    printf("Enter some data to write to shared memory\n");
    read(0, buff, 100);          // get some input from user
    strcpy(shared_memory, buff); // data written to shared memory
    printf("You wrote : %s\n", (char *)shared_memory);
}
