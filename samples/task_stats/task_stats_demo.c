#include "system_init.h"
#include "task.h"
#include "heap.h"
#include "stats.h"

static void task_a(void){
    while(1){
        os_delay(100);
    }
}

static void task_b(void){
    while(1){
        os_delay(250);
    }
}

int main(void){
    system_init();
    systick_init();
    os_heap_init();
    os_task_create(task_a, 2, 128);
    os_task_create(task_b, 1, 128);
    os_start();
    return 0;
}
