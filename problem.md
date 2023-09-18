What is the Problem with the code
---------------------------------

	int *ptr = NULL;

	int* getmem(){
		if (!ptr) {
			ptr = kmalloc(sizeof(int), GFP_KERNEL);
			if (!ptr)
				return -ENOMEM;
		}
		return ptr;
	}
