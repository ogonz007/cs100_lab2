compiler = g++
flags = -Wall -Werror -ansi -pedantic

compile:
	@$(compiler) $(flags) lab2.cpp -o lab2.out
run:
	@./lab2.out
clean:
	@rm *.out
