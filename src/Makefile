main: ashinhust_mark_hw5.o Cards.o BagNode.o
	g++ -g -Wall ashinhust_mark_hw5.o Cards.o BagNode.o -o main

ashinhust_mark_hw5.o: ashinhust_mark_hw5.cpp Cards.h BagNode.h
	g++ -g -Wall ashinhust_mark_hw5.cpp -c 

Cards.o: Cards.cpp  Cards.h
	g++ -g -Wall Cards.cpp BagNode.cpp -c

BagNode.o: BagNode.cpp BagNode.h
	g++ -g -Wall BagNode.cpp -c

clean:
	rm *.o main 
