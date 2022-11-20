 

loops :  libclassloops.a

	
libclassloops.a: basicClassification.o advancedClassificationLoop.o	
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
	ranlib libclassloops.a

basicClassification.o : basicClassification.c NumClass.h 												
	gcc  -c -fPIC -Wall  basicClassification.c 

advancedClassificationLoop.o : advancedClassificationLoop.c  NumClass.h 							
	gcc -c -fPIC -Wall advancedClassificationLoop.c 

recursives :  libclassrec.a
	

libclassrec.a : basicClassification.o advancedClassificationRecursion.o 	
	ar -rcs libclassrec.a  basicClassification.o advancedClassificationRecursion.o 
	ranlib libclassrec.a


advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h 
	gcc -c -fPIC -Wall  advancedClassificationRecursion.c 

libclassrec.so: basicClassification.o advancedClassificationRecursion.o 
	gcc  -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o 
	
recursived : libclassrec.so
	
libclassloops.so: basicClassification.o advancedClassificationLoop.o	
	gcc -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o
	
loopd: 	libclassloops.so

main.o: main.c NumClass.h
	gcc  -c -fPIC -Wall main.c 

mains: libclassrec.a main.o
	gcc -o mains main.o libclassrec.a
	

maindloop: ./libclassloops.so main.o
	gcc  -o  maindloop main.o ./libclassloops.so

maindrec: ./libclassrec.so main.o
	gcc  -o  maindrec main.o ./libclassrec.so

all: maindrec maindloop mains

clean :
	rm -f *.o *.a *.so maindrec maindloop mains
