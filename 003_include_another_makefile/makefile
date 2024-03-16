include gnucommand.mk

helloworld: helloworld.cpp myclasses.o myclasses.h
	$(COMPILER) -c helloworld.cpp
	$(COMPILER) helloworld.o myclasses.o -o helloworld -g

myclasses.o: myclasses.cpp myclasses.h
	$(COMPILER) -c myclasses.cpp

clean:
	$(REMOVE) helloworld myclasses.o