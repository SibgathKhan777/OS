#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include
<sys/wait.h>
int main()
{
// Variable to store the process ID.
pid_t child_pid; char ch[3];
// Create a child process using
fork(). child_pid = fork();
if (child_pid == -1) {
// Error occurred during fork.
perror("fork");
exit(EXIT_FAILURE);
}
if (child_pid == 0)
{
// This code executes in the child process.
printf("Child process (PID: %d) is running.\n", getpid());
// Execute a different program using exec().
//abort(); child terminated abnormally by sending signal number 6 to the parent
// return(-1); child terminates with exit status 255
execl("/bin/date","date", NULL);
exit(0);
}
else {
// This code executes in the parent process.
printf("Parent process (PID: %d) is waiting for the child to terminate.\n", getpid());
// Wait for the child process to terminate using wait().
int status;
wait(&status);
printf("parent resumes\n");
if (WIFEXITED(status))
{
printf("\nChild process (PID: %d) terminated with status %d.\n", child_pid, WEXITSTATUS(status));
}
else if (WIFSIGNALED(status))
{
printf("\nChild process (PID: %d) terminated due to signal %d.\n", child_pid, WTERMSIG(status));
}
else
{printf("\nChild process (PID: %d) terminated abnormally.\n", child_pid);
}
}
return 0;
}
