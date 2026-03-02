# ======================================
# Project Configuratiohn
# ======================================

CC = g++
CFLAGS = -std=c++17 -Wall -Wextra -Iinclude
LDFLAGS =
TARGET = program

# Source files (add new .c files here)
SRC = main.cpp

# Automaticaly generate onfect file names
OBJS = $(SRC:.cpp=.o)


# ======================================
# Build Rules
# ======================================

# Default rule (runs when you type 'make')
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)

# Pattern rule for compileing .c -> .o
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


# ======================================
# Utility Rules
# ======================================

.PHONY: clean run rebuild

# Remove compiled files
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean and rebuild the project
rebuild: clean $(TARGET)