include ../Makefile.inc

DEFINES += $(DEFINES_EXT)
LOCAL_BUILD = $(GPP) $(OPT) $(FLAGS) -c $(INCLUDES) $(TOOLCHAIN) -I include -I ble -I src -c $(CPU) $(DEFINES)

OBJECTS = \
    build/src/run_loop.o \
    build/src/run_loop_embedded.o \
    build/src/btstack_memory.o \
    build/src/linked_list.o \
    build/src/memory_pool.o \
    build/src/hci_dump.o \
    build/src/hci.o \
    build/src/hci_cmds.o \
    build/src/utils.o \
    build/src/remote_device_db_memory.o \
    build/src/l2cap_signaling.o \
    build/src/rfcomm.o \
    build/src/sdp_util.o \
    build/src/sdp.o \
    build/ble/att.o \
    build/ble/att_dispatch.o \
    build/ble/att_server.o \
    build/src/l2cap.o \
	build/ble/sm.o \
    build/ble/le_device_db_memory.o \

build/$(TARGET_BTSTACK):	$(OBJECTS)
	$(AR) rv build/$(TARGET_BTSTACK) $(OBJECTS)

build/src/%.o:	src/%.c
	$(LOCAL_BUILD) -o build/src/$*.o src/$*.c

build/ble/%.o:	ble/%.c
	$(LOCAL_BUILD) -o build/ble/$*.o ble/$*.c

clean:
	bash -c "rm -f build/* build/src/* build/le/*; echo success"
