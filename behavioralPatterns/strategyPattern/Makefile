#!/usr/bin/make -f
 
include ../../MakeVars

$(info ################################### MakeFile ###################################)

TARGET = $(BUILD_ROOT)/SimUDuck.t

.PHONY: all

all: directories $(TARGET)
 
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

$(OBJECTS): $(BUILD_ROOT)/%.o: $(SOURCE_ROOT)/%.cpp $(BUILD_ROOT)/%.d
	$(CC) $(CFLAGS) $(DEPFLAGS) -c $< -o $@

.PHONY: clean

clean: ; rm -f $(OBJECTS) $(TARGET) $(DEPENDENCIES)

.PHONY: directories

directories: ; mkdir -p $(BUILD_DIRS)

.PRECIOUS: $(DEPENDENCIES)
$(DEPENDENCIES): $(BUILD_ROOT)/%.d: ;

-include $(DEPENDENCIES)
