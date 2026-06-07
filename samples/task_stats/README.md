## Task runtime statistics sample

Demonstrates per-task run count and stack high water mark tracking.

Two tasks run at different priorities and delays.
Call os_task_get_stats() with a task number to read its stats.

os_task_stats_t has run_count, stack_high_water, and stack_size.
