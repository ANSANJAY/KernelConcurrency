Synchronization and Critical Regions
=====================================

Implementing a reentrant kernel requires the use of synchronization .

If a kernel control path is suspended while acting on a kernel data structure, no other kernel control path should be allowed to act on the same data structure unless it has been reset to a consistent state.

 Otherwise, the interaction of the two control paths could corrupt the stored information.

Example:

	suppose a global variable V contains the number of available items of some system resource. 

	Kernel Control path A				Kernel Control Path B
	---------------------------------------------------------------------------

	reads the variable and value is 1		

							reads the same variable, and value is 1
				
							increments V
	
	increments V 
	
Final Value of V is 2, instead of 3 which is wrong.

When the outcome of a computation depends on how two or more processes are scheduled, the code is incorrect. We say that there is a race condition.

Any section of code that should be finished by each process that begins it before another process can enter it is called a critical region

