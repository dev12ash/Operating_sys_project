# Question 1


When a child process dies, the parent process is informed so that it can do some clean up like freeing up memory etc. However, child process goes into zombie state if the parent process is not aware of its death. For the parent, the child still exists but the child process is actually dead. This is how zombie processes (also known as defunct processes) are created and stay in the system.
An orphan process, on the other hand is a process whose parent process has died and it continues to run.


![](ss.png)
