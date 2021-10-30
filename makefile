

CC = gcc
FLAGS = -Wall -g
AR = ar



.PHONY : clean


all:  mains maindloop maindrec



mains :  recursives  main.o
	$(CC) $(FLAGS) -o mains main.o libclassrec.a

maindloop: loopd main.o 
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so 

maindrec: recursived main.o
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so




loops : advancedClassificationLoop.o basicClassification.o
	${AR} -rcs   libclassloops.a advancedClassificationLoop.o basicClassification.o 


loopd : advancedClassificationLoop.o basicClassification.o
	${CC} $(FLAGS) -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o 


recursives : advancedClassificationRecursion.o basicClassification.o
	${AR} -rcs   libclassrec.a advancedClassificationRecursion.o basicClassification.o 


recursived : advancedClassificationRecursion.o basicClassification.o
	${CC} $(FLAGS) -shared -o  libclassrec.so advancedClassificationRecursion.o basicClassification.o 



advancedClassificationLoop.o : advancedClassificationLoop.c NumClass.h 
		$(CC) $(FLAGS) -c advancedClassificationLoop.c 


advancedClassificationRecursion.o : advancedClassificationRecursion.c NumClass.h 
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c 


basicClassification.o : basicClassification.c NumClass.h 
	$(CC) $(FLAGS) -c basicClassification.c 


main.o : main.c NumClass.h  
	$(CC) $(FLAGS) -c main.c


clean : 
	rm -f *.o *.a *.so