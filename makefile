CC     = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -Iinclude
SRC    = src/main.c src/task.c
TARGET = to_do_tutor

$(TARGET): $(SRC) 
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
