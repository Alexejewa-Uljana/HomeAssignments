PROJECT=ASSIGNMENT-3

IDIR=.
CXX=g++
CXXFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

DEPS = Transformer.h Gun.h


OBJ = Transformer.o main.o Gun.o

.PHONY: default

default: all;

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(PROJECT): $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)

all: $(PROJECT)

.PHONY: clean

clean:
	rm -f *.o *~ core $(INCDIR)/*~

cleanall: clean
	rm -f $(PROJECT)
