CC=gcc
CXX=g++
RM=rm -f
MD=mkdir -p

CFLAGS=-Wall -O3


ODIR=build

DEPS_ALL=$(shell find ./src -name "*.h" -or -name "*.hpp")

SRCS=$(shell find ./src -name "*.c")
_OBJS=$(subst .c,.o,$(SRCS))
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

SRCS_TEST=$(shell find ./test -name "*.c")
_OBJS_TEST=$(subst .c,.o,$(SRCS_TEST))
OBJS_TEST = $(patsubst %,$(ODIR)/%,$(_OBJS_TEST))

all: test

test: clean $(ODIR)/test.exe
	$(ODIR)/test.exe

test.exe: $(DEPS_ALL)
	$(CXX) -Isrc -o test.exe $(SRCS_TEST)	$(CFLAGS)

$(ODIR)/test.exe: $(DEPS_ALL)
	$(MD) $(ODIR)
	$(CXX) -Isrc -o $(ODIR)/test.exe $(SRCS_TEST)	$(CFLAGS)
	
$(ODIR)/%.o: %.c $(DEPS_ALL)
	$(CXX) -c -o $@ $< $(CFLAGS)
	
clean:
	$(RM) build/test.exe
	$(RM) $(OBJS)
	$(RM) $(OBJS_TEST)

beautify:
	astyle  --style=allman   $(SRCS) $(DEPS_ALL) $(SRCS_TEST)