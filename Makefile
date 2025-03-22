# ============================
# Makefile for RockPaperScissors_Project
# ============================

# Name of the final executable
TARGET = RockPaperScissors

# Directories for source files, headers, and build output
SRC_DIR = src
INC_DIR = include
BUILD_DIR = build

# Source files (all .cpp files in the src directory)
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)

# Object files generated in the build directory
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRC_FILES))

# Compiler options
CXX = g++                # Using the C++ compiler
CXXFLAGS = -std=c++17 -Wall -I$(INC_DIR)  # Options: C++17 standard, enable warnings, include header directory

# ============================
# Main rules
# ============================

# Default rule: build the executable
all: $(BUILD_DIR) $(TARGET)

# Build the final executable from object files
$(TARGET): $(BUILD_DIR)/main.o $(OBJ_FILES)
	@echo "🔧 Linking files to create the executable..."
	$(CXX) $(CXXFLAGS) $^ -o $@
	@echo "✅ Build completed: $(TARGET)"

# Create the build directory if it doesn't exist
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)

# Compile main.cpp into an object file in the build directory
$(BUILD_DIR)/main.o: main.cpp
	@echo "🔧 Compiling main.cpp..."
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compile source files (.cpp) into object files (.o) in the build directory
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo "🔧 Compiling $<..."
	$(CXX) $(CXXFLAGS) -c $< -o $@

# ============================
# Utility rules
# ============================

# Clean up object files and the executable
clean:
	@echo "🧹 Cleaning up generated files..."
	rm -rf $(BUILD_DIR) $(TARGET)
	@echo "✅ Clean completed."

# Clean up persistent data (scores, users, etc.)
distclean: clean
	@echo "🧹 Removing persistent data..."
	rm -f data/*.txt
	@echo "✅ Distclean completed."

# Run the program after compiling it
run: all
	@echo "🚀 Running the program..."
	./$(TARGET)

# ============================
# Useful information
# ============================

# Display the source files used in compilation
sources:
	@echo "📂 Source files:"
	@echo "$(SRC_FILES)"

# Display the object files generated after compilation
objects:
	@echo "📂 Object files:"
	@echo "$(OBJ_FILES)"

