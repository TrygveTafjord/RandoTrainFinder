# Makefile for building GDAL application

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -I/usr/include/gdal

# Linker flags
LDFLAGS = $(shell pkg-config --libs gdal)

# Target executable
TARGET = main

# Source files
SRCS = main.cpp

# Build the target
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

# Clean target
clean:
	rm -f $(TARGET)
