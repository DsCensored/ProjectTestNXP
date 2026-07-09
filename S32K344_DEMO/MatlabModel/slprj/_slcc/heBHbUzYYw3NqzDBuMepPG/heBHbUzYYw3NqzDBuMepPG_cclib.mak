#------------------------ Tool Specifications & Options ----------------------

COMPILER  =  lcc

CC        =  "D:\Matlab\sys\lcc64\lcc64\bin\lcc64.exe"
LD        =  "D:\Matlab\sys\lcc64\lcc64\bin\lcclnk64.exe"
LIBCMD    =  "D:\Matlab\sys\lcc64\lcc64\bin\lcclib64.exe"
CFLAGS    =  -dll -noregistrylookup  -c -Zp8 -DLCC_WIN64 -DMATLAB_MEX_FILE -nodeclspec
LDFLAGS   =  -s -dll -entry LibMain heBHbUzYYw3NqzDBuMepPG_cclib.def -L"D:\Matlab\sys\lcc64\lcc64\lib64"

OBJECTS = \
	   LED_Ctrl.obj \
	   slcc_interface_heBHbUzYYw3NqzDBuMepPG.obj \
	   lccstub.obj \

STATICLIBS = \

#------------------------------ Include/Lib Path ------------------------------

INCLUDE_PATH = \
     -I"d:\matlab\extern\include" \
     -I"d:\matlab\simulink\include" \
     -I"d:\s32k344_demo2\matlabmodel\slprj\_slcc\hebhbuzyyw3nqzdbumeppg" \
     -I"d:\s32k344_demo2\matlabmodel" \
     -I"d:\matlab\sys\lcc64\lcc64\include64" \
     -I"d:\matlab\sys\lcc64\lcc64\mex" \

#--------------------------------- Rules --------------------------------------

heBHbUzYYw3NqzDBuMepPG_cclib.dll : $(MAKEFILE) $(OBJECTS)
	$(LD) $(LDFLAGS) /OUT:heBHbUzYYw3NqzDBuMepPG_cclib.dll $(OBJECTS)  $(STATICLIBS) "D:\Matlab\extern\lib\win64\microsoft\libmex.lib" "D:\Matlab\extern\lib\win64\microsoft\libmx.lib"
LED_Ctrl.obj :	d:\s32k344_demo2\matlabmodel\LED_Ctrl.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "d:\s32k344_demo2\matlabmodel\LED_Ctrl.c"
slcc_interface_heBHbUzYYw3NqzDBuMepPG.obj :	D:\S32K344_DEMO2\MatlabModel\slprj\_slcc\heBHbUzYYw3NqzDBuMepPG\slcc_interface_heBHbUzYYw3NqzDBuMepPG.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\S32K344_DEMO2\MatlabModel\slprj\_slcc\heBHbUzYYw3NqzDBuMepPG\slcc_interface_heBHbUzYYw3NqzDBuMepPG.c"
lccstub.obj :	D:\Matlab\sys\lcc64\lcc64\mex\lccstub.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\Matlab\sys\lcc64\lcc64\mex\lccstub.c"
