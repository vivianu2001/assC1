 

loops : basicClassification.o advancedClassificationLoop.o libclassloops.a
	gcc -c -o  makeloops.o basicClassification.o advancedClassificationLoop.o libclassloops.a
	
libclassloops.a: basicClassification.o advancedClassificationLoop.o	
	ar rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

basicClassification.o : basicClassification.c NumClass.h 												
	gcc  -c -fPIC -Wall  basicClassification.c 

advancedClassificationLoop.o : advancedClassificationLoop.c  NumClass.h 							
	gcc -c -fPIC -Wall advancedClassificationLoop.c 

recursive : basicClassification.o advancedClassificationRecursion.o libclassrec.a
	gcc -c -o  makeloops.o basicClassification.o advancedClassificationRecursion.o  libclassrec.a

libclassrec.a : basicClassification.o advancedClassificationRecursion.o 	
	ar -rcs libclassrec.a  basicClassification.o advancedClassificationRecursion.o 
	ranlib libclassrec.a


advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h 
	gcc -c -fPIC -Wall  advancedClassificationRecursion.c

recursived: basicClassification.o advancedClassificationRecursion.o 
	gcc  -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o 

loopd: basicClassification.o advancedClassificationLoop.o	
	gcc -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

assignemnt_1_main.o: assignemnt_1_main.c NumClass.h
	gcc  -c -fPIC -Wall assignemnt_1_main.c 

mains: libclassrec.a assignemnt_1_main.o
	gcc -o mains assignemnt_1_main.o libclassrec.a
	

maindloop: libclassloops.so assignemnt_1_main.c
	gcc  -c assignemnt_1_main.c

maindrec:  libclassrec.so assignemnt_1_main.c
	gcc  -c assignemnt_1_main.c

all:  basicClassification.o advancedClassificationLoop.o libclassloops.a libclassrec.a  assignemnt_1_main.c 	
	gcc  -c assignemnt_1_main.c 	      

clean :
	rm -f *.o
