RELEASE_EXEC  = calculator
DEBUG_EXEC    = calculator-dbg
SOURCE        = $(wildcard *.cpp)
CC = g++

all: debug release

debug: $(DEBUG_EXEC)

$(DEBUG_EXEC): $(SOURCE)
	$(CC) $(DEBUG_FLAGS) $(SOURCE) -o $(DEBUG_EXEC) 

release: $(RELEASE_EXEC)

$(RELEASE_EXEC): $(SOURCE)
	$(CC) $(RELEASE_FLAGS) $(SOURCE) -o $(RELEASE_EXEC)

clean:
	rm -f $(RELEASE_EXEC) $(DEBUG_EXEC)
