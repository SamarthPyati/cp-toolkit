CXX       := g++
CXXFLAGS  := -std=c++17 -Wall -Wextra

TARGET    := solution
# Configurable by user
# If SRC name different, then do "make SRC=source.cpp"
SRC       ?= solution.cpp
INPUT     ?= input.txt
OUTPUT    ?= output.txt

DEBUG     ?= 0

ifeq ($(DEBUG), 1)
	CXXFLAGS += -DDEBUG -g -fsanitize=address
else
	CXXFLAGS += -O2
endif

all: run

build: $(SRC)
	$(CXX) $(CXXFLAGS) $< -o $(TARGET)

run: build
	@if [ -f $(INPUT) ] && [ -n "$(OUTPUT)" ]; then \
		./$(TARGET) < $(INPUT) > $(OUTPUT); \
	elif [ -f $(INPUT) ]; then \
		./$(TARGET) < $(INPUT); \
	else \
		./$(TARGET); \
	fi

clean:
	@rm -f $(TARGET)

.PHONY: all build run clean
