# helloworld: helloworld.cpp myclasses.cpp
# 	g++ -o helloworld helloworld.cpp myclasses.cpp -g

helloworld: helloworld.cpp myclasses.o myclasses.h
	g++ -c helloworld.cpp
	g++ helloworld.o myclasses.o -o helloworld -g

myclasses.o: myclasses.cpp myclasses.h
	g++ -c myclasses.cpp

clean:
	rm helloworld myclasses.o helloworld.o