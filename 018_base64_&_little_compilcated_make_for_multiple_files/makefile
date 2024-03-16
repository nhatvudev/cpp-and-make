include gnucommand.mk
$(warning This makefile can be used for many source code .cpp and .c in folder cpp)


SOURCE_DIR:=./cpp
OBJ_DIR:=./objs
OUT_DIR:=./output


SOURCE_FILE_CPP_PATHS := $(wildcard $(SOURCE_DIR)/*.cpp)
SOURCE_FILE_C_PATHS := $(wildcard $(SOURCE_DIR)/*.c)
SOURCE_FILE_PATHS := $(SOURCE_FILE_CPP_PATHS) $(SOURCE_FILE_C_PATHS)
$(warning source file paths: $(SOURCE_FILE_PATHS))


CPP_FILES = $(notdir $(SOURCE_FILE_CPP_PATHS))
$(warning CPP_FILES: $(CPP_FILES))
CPP_OBJECTS = $(CPP_FILES:.cpp=.o)
$(warning OBJECTS: $(CPP_OBJECTS))
CPP_OBJECT_PATHS := $(OBJ_DIR)/$(CPP_OBJECTS)
$(warning CPP_OBJECT_PATHS: $(CPP_OBJECT_PATHS))



C_FILES = $(notdir $(SOURCE_FILE_C_PATHS))
$(warning C_FILES: $(C_FILES))
C_OBJECTS = $(C_FILES:.c=.o)
$(warning OBJECTS: $(C_OBJECTS))
C_OBJECT_PATHS := $(OBJ_DIR)/$(C_OBJECTS)
$(warning C_OBJECT_PATHS: $(C_OBJECT_PATHS))


OBJECT_PATHS := $(C_OBJECT_PATHS) $(CPP_OBJECT_PATHS)
$(warning OBJECT_PATHS: $(OBJECT_PATHS))




$(OUT_DIR)/main : $(OBJECT_PATHS) | $(OUT_DIR)
	g++ $^ -o $@ -g


$(CPP_OBJECT_PATHS) : $(SOURCE_FILE_CPP_PATHS) | $(OBJ_DIR)
	g++ -c $^  -o $@ -g

$(C_OBJECT_PATHS) : $(SOURCE_FILE_C_PATHS) | $(OBJ_DIR)
	g++ -c $^  -o $@ -g




$(OBJ_DIR):
	$(MAKE_DIR) $(OBJ_DIR)

$(OUT_DIR):
	$(MAKE_DIR) $(OUT_DIR)	



clean:
ifneq (,$(wildcard $(OBJ_DIR)))
	$(REMOVE) -r $(OBJ_DIR)
endif

ifneq (,$(wildcard $(OUT_DIR)))
	$(REMOVE) -r $(OUT_DIR)
endif
