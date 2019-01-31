

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o homeworkparts.o matrixfunctions.o
	$(CXX) $(CXXFLAGS) -o main main.o homeworkparts.o matrixfunctions.o

# The main.o target can be written more simply

main.o: main.cpp matrixfunctions.h homeworkparts.h
	$(CXX) $(CXXFLAGS) -c main.cpp

homeworkparts.o: homeworkparts.h

matrixfunctions.o: matrixfunctions.h homeworkparts.h


clean : 
	rm main main.o homeworkparts.o matrixfunctions.o
