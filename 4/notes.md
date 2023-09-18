What is a kernel control path?
=================================

A kernel control path denotes the sequence of instructions executed by the kernel to handle a system call, an exception, or an interrupt.

Reentrant kernels
=================

Linux kernel is reentrant. This means that several processes may be executing in Kernel Mode at the same time.

On uniprocessor systems, only one process can progress, but many can be blocked in Kernel Mode when waiting for the CPU or the completion of some I/ O operation.

Example:
	-->	after issuing a read to a disk on behalf of a process, the kernel lets the disk controller handle it and resumes executing other processes. 

	-->	An interrupt notifies the kernel when the device has satisfied the read, so the former process can resume the execution.

How do we have reentrancy
=============================

Reentrancy in Linux Kernel:
	1. Reentrant functions : They don't use/modify global data structures.
	2. Non reentrant functions: Modify global data structures but use locking mechanism



