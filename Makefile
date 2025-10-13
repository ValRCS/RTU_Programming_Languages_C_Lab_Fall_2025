# Simple Makefile for Lab 1–5
CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -O2
LDFLAGS = -lm
BUILD_DIR = bin
SRC_DIR = src

PROGRAMS = $(BUILD_DIR)/hello $(BUILD_DIR)/calculator $(BUILD_DIR)/formats \
           $(BUILD_DIR)/lab2_1 $(BUILD_DIR)/lab2_2 $(BUILD_DIR)/lab2_3 \
           $(BUILD_DIR)/lab3_task1 $(BUILD_DIR)/lab3_task2 $(BUILD_DIR)/lab3_task3 \
           $(BUILD_DIR)/week4_1_dynamic_array $(BUILD_DIR)/week4_2_struct_student $(BUILD_DIR)/week4_3_struct_database \
           $(BUILD_DIR)/week5_task1_file_io $(BUILD_DIR)/week5_task2_struct_save_load $(BUILD_DIR)/week5_task3_student_management_system

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
# Lab 4
# -----------------------
lab4: $(BUILD_DIR)/week4_1_dynamic_array $(BUILD_DIR)/week4_2_struct_student $(BUILD_DIR)/week4_3_struct_database

$(BUILD_DIR)/week4_1_dynamic_array: $(SRC_DIR)/week4_1_dynamic_array.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BUILD_DIR)/week4_2_struct_student: $(SRC_DIR)/week4_2_struct_student.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BUILD_DIR)/week4_3_struct_database: $(SRC_DIR)/week4_3_struct_database.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

# -----------------------
# Lab 5
# -----------------------
lab5: $(BUILD_DIR)/week5_task1_file_io $(BUILD_DIR)/week5_task2_struct_save_load $(BUILD_DIR)/week5_task3_student_management_system

$(BUILD_DIR)/week5_task1_file_io: $(SRC_DIR)/week5_task1_file_io.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BUILD_DIR)/week5_task2_struct_save_load: $(SRC_DIR)/week5_task2_struct_save_load.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

$(BUILD_DIR)/week5_task3_student_management_system: $(SRC_DIR)/week5_task3_student_management_system.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

# -----------------------
# Run combined labs
# -----------------------
run-lab1: lab1
	./$(BUILD_DIR)/hello
	./$(BUILD_DIR)/calculator
	./$(BUILD_DIR)/formats

run-lab2: lab2
	./$(BUILD_DIR)/lab2_1
	./$(BUILD_DIR)/lab2_2
	./$(BUILD_DIR)/lab2_3

run-lab3: lab3
	./$(BUILD_DIR)/lab3_task1
	./$(BUILD_DIR)/lab3_task2
	./$(BUILD_DIR)/lab3_task3

run-lab4: lab4
	./$(BUILD_DIR)/week4_1_dynamic_array
	./$(BUILD_DIR)/week4_2_struct_student
	./$(BUILD_DIR)/week4_3_struct_database

run-lab5: lab5
	./$(BUILD_DIR)/week5_task1_file_io
	./$(BUILD_DIR)/week5_task2_struct_save_load
	./$(BUILD_DIR)/week5_task3_student_management_system

# -----------------------
# Run all labs (Lab 1 → Lab 5)
# -----------------------
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
	./$(BUILD_DIR)/week4_1_dynamic_array
	./$(BUILD_DIR)/week4_2_struct_student
	./$(BUILD_DIR)/week4_3_struct_database
	./$(BUILD_DIR)/week5_task1_file_io
	./$(BUILD_DIR)/week5_task2_struct_save_load
	./$(BUILD_DIR)/week5_task3_student_management_system

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
	@echo "  make all          - Build all labs (1–5)"
	@echo "  make labN         - Build specific lab (e.g., lab3)"
	@echo "  make run-labN     - Run all programs for a lab (1–5)"
	@echo "  make run-all      - Run all labs in sequence"
	@echo "  make debug        - Rebuild all with debugging (-g)"
	@echo "  make clean        - Remove build artifacts"
	@echo ""
	@echo "Examples:"
	@echo "  make lab4         # Build only Week 4 programs"
	@echo "  make run-lab4     # Build and run all Week 4 programs"
	@echo "  make run-lab5     # Build and run Week 5 programs"

# -----------------------
# Cleanup
# -----------------------
clean:
	rm -rf $(BUILD_DIR)/*.o $(PROGRAMS)
