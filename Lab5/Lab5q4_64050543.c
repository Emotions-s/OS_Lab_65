pid = fork();
if (pid == 0) {
	if (userChoice == 'a') {
		execlp("ls", "ls", NULL);
	}	
	else if (userChoice == 'b) {
		execlp("ps", "ps", NULL);
	}
	else if (userChoice == 'c') {
		execlp("whoami", "whoami", NULL);
	}
exit(0);
}
wait(NULL);
