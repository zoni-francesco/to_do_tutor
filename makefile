CC     = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
SRC    = src/main.c
TARGET = to_do_tutor

$(TARGET): $(SRC) 
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
