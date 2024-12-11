
SUBDIRS := $(wildcard [0123456789]*)

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@ 

%.test: 
	$(MAKE) -C $* test

%.solution: 
	$(MAKE) -C $* solution

%.clean:
	$(MAKE) -C $* clean

%.format:
	$(MAKE) -C $* format

%.tidy:
	$(MAKE) -C $* tidy

.PHONY: all $(SUBDIRS) %.test

