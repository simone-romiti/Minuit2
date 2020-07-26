
CC = g++ 
CFLAGS =  -I /opt/Minuit2/inc/
LDFLAGS = -fopenmp -L /opt/Minuit2/src/.libs/  -lMinuit2

paraboloid2D.exe: paraboloid2D.o
	$(CC)  paraboloid2D.o $(LDFLAGS) -o paraboloid2D.exe 

paraboloid2D.o: paraboloid2D.cpp
	$(CC) $(CFLAGS) -c paraboloid2D.cpp -o paraboloid2D.o

clean:
	rm *.o *.exe


	