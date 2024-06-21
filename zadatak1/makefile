CC = gcc
SRCDIR = .
OBJDIR = obj
BINDIR = .
TARGET = main1

# List of source files
SOURCES = $(wildcard $(SRCDIR)/*.c)
# List of object files
OBJECTS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SOURCES))

# Default target
all: $(BINDIR)/$(TARGET)

# Rule to generate object files
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the obj directory if it doesn't exist
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Rule to generate the executable
$(BINDIR)/$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

# Clean rule
clean:
	rm -rf $(OBJDIR) $(BINDIR)/$(TARGET)

.PHONY: all clean

