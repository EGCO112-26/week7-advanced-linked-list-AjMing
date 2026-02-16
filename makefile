compile: ll_example.c
	 gcc ll.c ll_example.c -o ll


run: ll
	 ./ll


clean: ll
	 rm ll
