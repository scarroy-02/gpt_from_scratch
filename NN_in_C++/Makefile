CXX = g++
CXXFLAGS = -std=c++14 -g -Iinclude
TARGET = nn
SRCDIR = src
OBJDIR = obj
SOURCES = $(SRCDIR)/main.cpp $(SRCDIR)/Neuron.cpp
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(TARGET)

.PHONY: all clean
