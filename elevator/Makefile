########################################################
# main build target filename and source:

TARGET = $(BUILDDIR)/main.out
SRC =  $(SRCDIR)/LineSegment.hpp

########################################################
# main test filename:

TESTSRC = $(TESTDIR)/test.cpp $(BUILDDIR)/LineSegment.o $(BUILDDIR)/PolygonalChain.o $(BUILDDIR)/RightTriangle.o $(BUILDDIR)/Square.o


# compiler flags:
CFLAGS =  -Wall -std=c++17 -I $(SRCDIR)

# linker flags
#    add -lm to use mathematical funtions
LDFLAGS = -lm

########################################################
# do not change

include ../tools/Makefile

########################################################
# project specific targets
#   adapt / expand as needed
$(TARGET): $(BUILDDIR) $(SRC)
	$(CXX) $(CFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

$(BUILDDIR)/LineSegment.o: $(BUILDDIR) $(SRCDIR)/LineSegment.cpp
	$(CXX) $(CFLAGS) -o $(BUILDDIR)/LineSegment.o -c $(SRCDIR)/LineSegment.cpp $(LDFLAGS)

$(BUILDDIR)/PolygonalChain.o: $(BUILDDIR) $(SRCDIR)/PolygonalChain.cpp
	$(CXX) $(CFLAGS) -o $(BUILDDIR)/PolygonalChain.o -c $(SRCDIR)/PolygonalChain.cpp $(LDFLAGS)

$(BUILDDIR)/RightTriangle.o: $(BUILDDIR) $(SRCDIR)/RightTriangle.cpp
	$(CXX) $(CFLAGS) -o $(BUILDDIR)/RightTriangle.o -c $(SRCDIR)/RightTriangle.cpp $(LDFLAGS)

$(BUILDDIR)/Square.o: $(BUILDDIR) $(SRCDIR)/Square.cpp
	$(CXX) $(CFLAGS) -o $(BUILDDIR)/Square.o -c $(SRCDIR)/Square.cpp $(LDFLAGS)
