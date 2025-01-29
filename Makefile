COMPILER = g++
OPTIONS = -Wall
PROGRAM = hospitalCharges.out

all : $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): hospitalCharges.cpp calcTotalCharges.cpp validateUserInput.cpp calcTotalCharges.h validateUserInput.h
	$(COMPILER) $(OPTIONS) hospitalCharges.cpp calcTotalCharges.cpp validateUserInput.cpp calcTotalCharges.h validateUserInput.h -o $(PROGRAM)

clean: 
	rm -f $(PROGRAM)
