include gnucommand.mk

OBJ_DIR:=./objs
OUT_DIR:=./output

main: main.cpp fsm.o fsm.h | $(OUT_DIR)
	$(COMPILER) -c main.cpp -o $(OBJ_DIR)/main.o -g
	$(COMPILER) $(OBJ_DIR)/main.o $(OBJ_DIR)/fsm.o \
		-o $(OUT_DIR)/main

fsm.o: fsm.cpp fsm.h | $(OBJ_DIR)
	$(COMPILER) -c fsm.cpp -o $(OBJ_DIR)/fsm.o -g

$(OBJ_DIR):
	$(MAKE_DIR) $(OBJ_DIR)

$(OUT_DIR):
	$(MAKE_DIR) $(OUT_DIR)	

clean:
	$(REMOVE) -r $(OBJ_DIR)
	$(REMOVE) -r $(OUT_DIR)