CC=g++
LDFLAGS=
CFLAGS=-c

SRC_DIR=./src/
BIN_DIR=./bin/
TARGET_DIR=./output/

SRC=$(SRC_DIR)Node.cpp $(SRC_DIR)Queue.cpp $(SRC_DIR)main.cpp
BIN=$(BIN_DIR)Node.o $(BIN_DIR)Queue.o $(BIN_DIR)main.o
TARGET=$(TARGET_DIR)main.out


all: $(TARGET)

$(TARGET): $(BIN)
	$(CC) $(LDFLAGS) $^ -o $@

$(BIN_DIR)%.o: $(SRC_DIR)%.cpp
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(BIN) $(TARGET)

run:
	$(TARGET)