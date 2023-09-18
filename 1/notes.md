What is concurrency?
====================
	 the ability to handle multiple outstanding tasks/process with the illusion or reality of simultaneity


Single Core Environment(fake parallelism)
=======================
	concurrency is achieved via  a process called context-switching i.e., at a particular time period, only a single task gets executed.


Multi Core Environment(true parallelism)
======================
	
	Multiple processes executing simultaneously on multiple processors/CPU's.


How to find out how many cores you have?
========================================

$ grep -c ^processor /proc/cpuinfo

$ nproc

How to find the processor number in which process is running?
===============================================================

$ ps -eaF

The PSR column shows that <process> is running on processor <number>

