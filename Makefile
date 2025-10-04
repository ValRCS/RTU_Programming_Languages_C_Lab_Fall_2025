# Simple Makefile for Lab 1, Lab 2, Lab 3
CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -O2
LDFLAGS = -lm
BUILD_DIR = bin
SRC_DIR = src

PROGRAMS = $(BUILD_DIR)/hello $(BUILD_DIR)/calculator $(BUILD_DIR)/formats \
           $(BUILD_DIR)/lab2_1 $(BUILD_DIR)/lab2_2 $(BUILD_DIR)/lab2_3 \
           $(BUILD_DIR)/lab3_task1 $(BUILD_DIR)/lab3_task2 $(BUILD_DIR)/lab3_task3

all: $(PROGRAMS)

# -----------------------
# Lab 1
# -----------------------
lab1: $(BUILD_DIR)/hello $(BUILD_DIR)/calculator $(BUILD_DIR)/formats

$(BUILD_DIR)/hello: $(SRC_DIR)/hello.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BUILD_DIR)/calculator: $(SRC_DIR)/calculator.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BUILD_DIR)/formats: $(SRC_DIR)/format_specifiers.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

# -----------------------
# Lab 2
# -----------------------
lab2: $(BUILD_DIR)/lab2_1 $(BUILD_DIR)/lab2_2 $(BUILD_DIR)/lab2_3

$(BUILD_DIR)/lab2_1: $(SRC_DIR)/lab2_1.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BUILD_DIR)/lab2_2: $(SRC_DIR)/lab2_2.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BUILD_DIR)/lab2_3: $(SRC_DIR)/lab2_3.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

# -----------------------
# Lab 3
# -----------------------
lab3: $(BUILD_DIR)/lab3_task1 $(BUILD_DIR)/lab3_task2 $(BUILD_DIR)/lab3_task3

$(BUILD_DIR)/lab3_task1: $(SRC_DIR)/lab3_task1.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BUILD_DIR)/lab3_task2: $(SRC_DIR)/lab3_task2.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BUILD_DIR)/lab3_task3: $(SRC_DIR)/lab3_task3.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

# -----------------------
# Run targets
# -----------------------
run-hello: $(BUILD_DIR)/hello
	./$(BUILD_DIR)/hello

run-calculator: $(BUILD_DIR)/calculator
	./$(BUILD_DIR)/calculator

run-formats: $(BUILD_DIR)/formats
	./$(BUILD_DIR)/formats

run-lab2_1: $(BUILD_DIR)/lab2_1
	./$(BUILD_DIR)/lab2_1

run-lab2_2: $(BUILD_DIR)/lab2_2
	./$(BUILD_DIR)/lab2_2

run-lab2_3: $(BUILD_DIR)/lab2_3
	./$(BUILD_DIR)/lab2_3

run-lab3_task1: $(BUILD_DIR)/lab3_task1
	./$(BUILD_DIR)/lab3_task1

run-lab3_task2: $(BUILD_DIR)/lab3_task2
	./$(BUILD_DIR)/lab3_task2

run-lab3_task3: $(BUILD_DIR)/lab3_task3
	./$(BUILD_DIR)/lab3_task3

# Run all tasks in Lab 2
run-lab2: lab2
	./$(BUILD_DIR)/lab2_1
	./$(BUILD_DIR)/lab2_2
	./$(BUILD_DIR)/lab2_3

# Run all tasks in Lab 3
run-lab3: lab3
	./$(BUILD_DIR)/lab3_task1
	./$(BUILD_DIR)/lab3_task2
	./$(BUILD_DIR)/lab3_task3

# Run all labs (Lab 1 → Lab 2 → Lab 3)
run-all: all
	./$(BUILD_DIR)/hello
	./$(BUILD_DIR)/calculator
	./$(BUILD_DIR)/formats
	./$(BUILD_DIR)/lab2_1
	./$(BUILD_DIR)/lab2_2
	./$(BUILD_DIR)/lab2_3
	./$(BUILD_DIR)/lab3_task1
	./$(BUILD_DIR)/lab3_task2
	./$(BUILD_DIR)/lab3_task3

# -----------------------
# Debug build
# -----------------------
debug:
	$(MAKE) clean
	$(MAKE) CFLAGS="-std=c11 -Wall -Wextra -Wpedantic -g" all

# -----------------------
# Help
# -----------------------
help:
	@echo "Available make targets:"
	@echo "  make all         - Build all labs (with optimization)"
	@echo "  make lab1        - Build Lab 1 programs"
	@echo "  make lab2        - Build Lab 2 programs"
	@echo "  make lab3        - Build Lab 3 programs"
	@echo "  make run-hello   - Run Lab 1 hello program"
	@echo "  make run-calculator - Run Lab 1 calculator"
	@echo "  make run-formats - Run Lab 1 format specifiers"
	@echo "  make run-lab2    - Run all Lab 2 programs"
	@echo "  make run-lab3    - Run all Lab 3 programs"
	@echo "  make run-all     - Run all labs (1, 2, and 3)"
	@echo "  make debug       - Rebuild all with debugging (-g)"
	@echo "  make clean       - Remove build artifacts"

# -----------------------
# Cleanup
# -----------------------
clean:
	rm -rf $(BUILD_DIR)/*.o $(PROGRAMS)
