CC = gcc 
OBJECTSLOOPS= basicClassification.o advancedClassificationLoop.o
OBJECTRECURSION= basicClassification.o advancedClassificationRecursion.o 
AR= ar
FLAGS= -fPIC -Wall

loops :  libclassloops.a

	
libclassloops.a: $(OBJECTSLOOPS)	
	$(AR) -rcs libclassloops.a $(OBJECTSLOOPS)
	ranlib libclassloops.a

basicClassification.o : basicClassification.c NumClass.h 												
	$(CC)  -c $(FLAGS)  basicClassification.c 

advancedClassificationLoop.o : advancedClassificationLoop.c  NumClass.h 							
	$(CC)  -c $(FLAGS) advancedClassificationLoop.c 

recursives :  libclassrec.a
	

libclassrec.a : $(OBJECTRECURSION)	
	$(AR) -rcs libclassrec.a  $(OBJECTRECURSION) 
	ranlib libclassrec.a


advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h 
	$(CC)  -c $(FLAGS)  advancedClassificationRecursion.c 

libclassrec.so: $(OBJECTRECURSION)
	$(CC)   -shared -o libclassrec.so $(OBJECTRECURSION) 
	
recursived : libclassrec.so
	
libclassloops.so: $(OBJECTSLOOPS)
	$(CC)  -shared -o libclassloops.so $(OBJECTSLOOPS)
	
loopd: 	libclassloops.so

main.o: main.c NumClass.h
	$(CC)   -c $(FLAGS) main.c 

mains: libclassrec.a main.o
	$(CC)  -o mains main.o libclassrec.a
	

maindloop: ./libclassloops.so main.o
	$(CC)   -o  maindloop main.o ./libclassloops.so

maindrec: ./libclassrec.so main.o
	$(CC)   -o  maindrec main.o ./libclassrec.so

all: maindrec maindloop mains loops

clean :
	rm -f *.o *.a *.so maindrec maindloop mains
