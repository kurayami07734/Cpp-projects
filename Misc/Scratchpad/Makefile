# Compiler
CXX = g++

# Compilation flags
CXXFLAGS = -g -Wall -Wextra -std=c++17

# Library flags
LIBFLAGS =

# Directories
SRCDIR = src
OBJDIR = obj
INCLDIR =
LIBDIR =
BINDIR = bin

# Executable name
EXE = debug

SRCS = $(wildcard $(SRCDIR)/*.cpp)
INCLUDES = $(patsubst %,-I%, $(INCLUDEDIRS:%/=%))
OBJS = $(patsubst $(SRCDIR)%.cpp, $(OBJDIR)/%.o, $(SRCS))

# Recipes
all: $(EXE)
	@echo all complete!

$(EXE): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(LIBFLAGS) $< -o $(BINDIR)/$(EXE)

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(LIBFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f $(OBJDIR)/* $(BINDIR)/*
	@echo Cleanup complete!

run: all
	@$(BINDIR)/$(EXE)



