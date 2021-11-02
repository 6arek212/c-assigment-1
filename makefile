## -g for debug , Wall warninigs 

CC = gcc
FLAGS = -Wall -g
AR = ar

.PHONY : all
.PHONY : clean
.PHONY : loops 
.PHONY : loopd 
.PHONY : recursived 
.PHONY : recursived 



loops : libclassloops.a
loopd : libclassloops.so
recursives : libclassrec.a
recursived : libclassrec.so 


all:  mainsloop mainsrec maindloop maindrec


mains :  libclassrec.a main.o
	$(CC) $(FLAGS) -o mains main.o libclassrec.a



mainsloop :  libclassloops.a  main.o
	$(CC) $(FLAGS) -o mainsloop main.o libclassloops.a

mainsrec :  libclassrec.a main.o
	$(CC) $(FLAGS) -o mainsrec main.o libclassrec.a

maindloop: libclassloops.so main.o 
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so 

maindrec: libclassrec.so  main.o
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so




libclassloops.a : advancedClassificationLoop.o basicClassification.o
	${AR} -rcs   libclassloops.a advancedClassificationLoop.o basicClassification.o 


libclassloops.so : advancedClassificationLoop.o basicClassification.o
	${CC} -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o 


libclassrec.a : advancedClassificationRecursion.o basicClassification.o
	${AR} -rcs   libclassrec.a advancedClassificationRecursion.o basicClassification.o 


libclassrec.so : advancedClassificationRecursion.o basicClassification.o
	${CC} -shared -o  libclassrec.so advancedClassificationRecursion.o basicClassification.o 






advancedClassificationLoop.o : advancedClassificationLoop.c NumClass.h 
	$(CC) $(FLAGS) -c advancedClassificationLoop.c 


advancedClassificationRecursion.o : advancedClassificationRecursion.c NumClass.h 
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c 


basicClassification.o : basicClassification.c NumClass.h 
	$(CC) $(FLAGS) -c basicClassification.c 


main.o : main.c NumClass.h  
	$(CC) $(FLAGS) -c main.c




clean : 
	rm -f *.o *.a *.so mainsloop mainsrec maindloop maindrec