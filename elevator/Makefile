########################################################
# Main build target filename and source:

TARGET = $(BUILDDIR)/main.out
SRC = $(SRCDIR)/main.cpp $(SRCDIR)/Ground.cpp $(SRCDIR)/FirstFloor.cpp $(SRCDIR)/SecondFloor.cpp

TESTSRC = $(TESTDIR)/test.cpp $(BUILDDIR)/Ground.o $(BUILDDIR)/FirstFloor.o $(BUILDDIR)/SecondFloor.o

########################################################
# Compiler flags:
CFLAGS = -Wall -std=c++17 -I $(INCDIR)

# Linker flags (optional):
LDFLAGS = 

########################################################
# Do not change:
include ../tools/Makefile

########################################################
# Project-specific targets
# Adapt/expand as needed
$(TARGET): $(SRC)
	$(CXX) $(CFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

$(BUILDDIR)/Ground.o: $(BUILDDIR) $(SRCDIR)/Ground.cpp
	$(CXX) $(CFLAGS) -o $(BUILDDIR)/Ground.o -c $(SRCDIR)/Ground.cpp $(LDFLAGS)

$(BUILDDIR)/FirstFloor.o: $(BUILDDIR) $(SRCDIR)/FirstFloor.cpp
	$(CXX) $(CFLAGS) -o $(BUILDDIR)/FirstFloor.o -c $(SRCDIR)/FirstFloor.cpp $(LDFLAGS)

$(BUILDDIR)/SecondFloor.o: $(BUILDDIR) $(SRCDIR)/SecondFloor.cpp
	$(CXX) $(CFLAGS) -o $(BUILDDIR)/SecondFloor.o -c $(SRCDIR)/SecondFloor.cpp $(LDFLAGS)

