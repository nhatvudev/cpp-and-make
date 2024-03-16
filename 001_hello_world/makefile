# helloworld: helloworld.cpp myclasses.cpp
# 	g++ -o helloworld helloworld.cpp myclasses.cpp -g

helloworld: helloworld.cpp myclasses.o myclasses.h
	g++ helloworld.cpp myclasses.o -g -o helloworld

myclasses.o: myclasses.cpp myclasses.h
	g++ -c myclasses.cpp 

clean:
	rm myclasses.o
	rm helloworld