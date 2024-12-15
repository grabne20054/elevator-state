# definition of symbols
CXX = g++
MD = mkdir
RM = rm

BUILDDIR = build
SRCDIR = src
INCDIR = include
TESTDIR = tests
SCRIPTDIR = ../tools

SAMPLEOUT = create_testout.sh
TESTFLAGS = -lcriterion
TESTTARGET = $(BUILDDIR)/test.out
FORMAT = clang-format
FORMATFLAGS = --dry-run --Werror
TIDY = clang-tidy
TIDYFLAGS = -extra-arg=--std=c++17 --quiet --



all: $(TARGET)

# create build directory if it does not exist
$(BUILDDIR):
	$(MD) -p $(BUILDDIR)

clean:
	$(RM) $(BUILDDIR)/*

# run test script
test: $(BUILDDIR)  $(TESTSRC)
	$(CXX) $(CFLAGS) -o $(TESTTARGET)  $(TESTSRC)  $(LDFLAGS) $(TESTFLAGS)
	$(TESTTARGET)	

# run format check 
format: $(SRCDIR)
	$(FORMAT) $(SRCDIR)/* $(FORMATFLAGS)

tidy: $(SRCDIR)
	$(TIDY) $(SRCDIR)/* $(TIDYFLAGS)