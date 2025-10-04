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

$(BUILD_DIR)/hello: $(SRC_DIR)/hello.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BUILD_DIR)/calculator: $(SRC_DIR)/calculator.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BUILD_DIR)/formats: $(SRC_DIR)/format_specifiers.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

hello: $(BUILD_DIR)/hello
calculator: $(BUILD_DIR)/calculator
formats: $(BUILD_DIR)/formats

run-hello: hello
	./$(BUILD_DIR)/hello

run-calculator: $(BUILD_DIR)/calculator
	./$(BUILD_DIR)/calculator

run-formats: $(BUILD_DIR)/formats
	./$(BUILD_DIR)/formats

clean:
	rm -rf $(BUILD_DIR)/*.o $(PROGRAMS)
