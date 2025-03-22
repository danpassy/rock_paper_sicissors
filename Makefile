# ==========================================================
# Makefile for RockPaperScissors_Project
# ==========================================================

# Name of the final executable
TARGET = RockPaperScissors

# Directories for source files and headers
SRC_DIR = src
INC_DIR = include

# Source files (all .cpp files in the src directory)
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)

# Object files automatically generated from source files
OBJ_FILES = $(SRC_FILES:.cpp=.o)

# Compiler options
CXX = g++                # Using the C++ compiler
CXXFLAGS = -std=c++17 -Wall -I$(INC_DIR)  # Options: C++17 standard, enable warnings, include header directory

# ==========================================================
# Main rules
# ==========================================================

# Default rule: build the executable
all: $(TARGET)

# Build the final executable from object files
$(TARGET): main.o $(OBJ_FILES)
	@echo "🔧 Linking files to create the executable..."
	$(CXX) $(CXXFLAGS) $^ -o $@
	@echo "✅ Build completed: $(TARGET)"

# Compile main.cpp into an object file (main.o)
main.o: main.cpp
	@echo "🔧 Compiling main.cpp..."
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compile source files (.cpp) into object files (.o)
%.o: %.cpp
	@echo "🔧 Compiling $<..."
	$(CXX) $(CXXFLAGS) -c $< -o $@

# ======================================================
# Utility rules
# ======================================================

# Clean up object files and the executable
clean:
	@echo "🧹 Cleaning up generated files..."
	rm -f $(OBJ_FILES) main.o $(TARGET)
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

# ================================================
# Useful information
# ================================================

# Display the source files used in compilation
sources:
	@echo "📂 Source files:"
	@echo "$(SRC_FILES)"

# Display the object files generated after compilation
objects:
	@echo "📂 Object files:"
	@echo "$(OBJ_FILES)"

