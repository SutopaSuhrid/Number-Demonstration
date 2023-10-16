CC = gcc
CFLAGS = -std=c99 -Wall
TARGET = Number_Demonstration

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

run:
	./$(TARGET)

clean:
	rm -f $(TARGET)

