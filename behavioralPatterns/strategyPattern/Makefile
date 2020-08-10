#!/usr/bin/make -f
 
include ../../MakeVars

$(info ################################### MakeFile ###################################)

TARGET = $(BUILD_ROOT)/SimUDuck.t

.PHONY: all

all: directories $(TARGET)
 
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

$(OBJECTS): $(BUILD_ROOT)/%.o: $(SOURCE_ROOT)/%.cpp $(INCLUDE_ROOT)/%.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean: ; rm -f $(OBJECTS) $(TARGET)

.PHONY: directories

directories: ; mkdir -p $(BUILD_DIRS)
