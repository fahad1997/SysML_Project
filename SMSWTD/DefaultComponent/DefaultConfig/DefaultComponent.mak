
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  WeatherSensor.obj \
  StormSensor.obj \
  SMSWTD.obj \
  WaterPressureSensor.obj \
  WaterFlowDetector.obj \
  SateliteImage.obj \
  Cloud.obj \
  AlertedGroup.obj \
  Operator.obj \
  Researcher.obj \
  User.obj \
  SensorDataProcessor.obj \
  ImageProcessor.obj \
  SateliteImageProcessor.obj \
  TectonicMovementProcessor.obj \
  WaterPressureProcessor.obj \
  WaterFlowProcessor.obj \
  WaterDataProcessor.obj \
  StormProjectionProcessor.obj \
  AtmosphericDataProcessor.obj \
  SensorConfiguration.obj \
  GeographicalConfiguration.obj \
  DataObserver.obj \
  ImageDataObserver.obj \
  DataProcessor.obj \
  Dashboard.obj \
  NotificationChannel.obj \
  DataPublisher.obj \
  DataStorage.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






WeatherSensor.obj : WeatherSensor.cpp WeatherSensor.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WeatherSensor.obj" "WeatherSensor.cpp" 



StormSensor.obj : StormSensor.cpp StormSensor.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"StormSensor.obj" "StormSensor.cpp" 



SMSWTD.obj : SMSWTD.cpp SMSWTD.h    WeatherSensor.h StormSensor.h WaterPressureSensor.h WaterFlowDetector.h AlertedGroup.h SateliteImage.h Cloud.h User.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTD.obj" "SMSWTD.cpp" 



WaterPressureSensor.obj : WaterPressureSensor.cpp WaterPressureSensor.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WaterPressureSensor.obj" "WaterPressureSensor.cpp" 



WaterFlowDetector.obj : WaterFlowDetector.cpp WaterFlowDetector.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WaterFlowDetector.obj" "WaterFlowDetector.cpp" 



SateliteImage.obj : SateliteImage.cpp SateliteImage.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SateliteImage.obj" "SateliteImage.cpp" 



Cloud.obj : Cloud.cpp Cloud.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Cloud.obj" "Cloud.cpp" 



AlertedGroup.obj : AlertedGroup.cpp AlertedGroup.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AlertedGroup.obj" "AlertedGroup.cpp" 



Operator.obj : Operator.cpp Operator.h    User.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Operator.obj" "Operator.cpp" 



Researcher.obj : Researcher.cpp Researcher.h    User.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Researcher.obj" "Researcher.cpp" 



User.obj : User.cpp User.h    SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"User.obj" "User.cpp" 



SensorDataProcessor.obj : SensorDataProcessor.cpp SensorDataProcessor.h    SensorConfiguration.h GeographicalConfiguration.h DataPublisher.h DataStorage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SensorDataProcessor.obj" "SensorDataProcessor.cpp" 



ImageProcessor.obj : ImageProcessor.cpp ImageProcessor.h    DataPublisher.h DataStorage.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ImageProcessor.obj" "ImageProcessor.cpp" 



SateliteImageProcessor.obj : SateliteImageProcessor.cpp SateliteImageProcessor.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SateliteImageProcessor.obj" "SateliteImageProcessor.cpp" 



TectonicMovementProcessor.obj : TectonicMovementProcessor.cpp TectonicMovementProcessor.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TectonicMovementProcessor.obj" "TectonicMovementProcessor.cpp" 



WaterPressureProcessor.obj : WaterPressureProcessor.cpp WaterPressureProcessor.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WaterPressureProcessor.obj" "WaterPressureProcessor.cpp" 



WaterFlowProcessor.obj : WaterFlowProcessor.cpp WaterFlowProcessor.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WaterFlowProcessor.obj" "WaterFlowProcessor.cpp" 



WaterDataProcessor.obj : WaterDataProcessor.cpp WaterDataProcessor.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WaterDataProcessor.obj" "WaterDataProcessor.cpp" 



StormProjectionProcessor.obj : StormProjectionProcessor.cpp StormProjectionProcessor.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"StormProjectionProcessor.obj" "StormProjectionProcessor.cpp" 



AtmosphericDataProcessor.obj : AtmosphericDataProcessor.cpp AtmosphericDataProcessor.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AtmosphericDataProcessor.obj" "AtmosphericDataProcessor.cpp" 



SensorConfiguration.obj : SensorConfiguration.cpp SensorConfiguration.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SensorConfiguration.obj" "SensorConfiguration.cpp" 



GeographicalConfiguration.obj : GeographicalConfiguration.cpp GeographicalConfiguration.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GeographicalConfiguration.obj" "GeographicalConfiguration.cpp" 



DataObserver.obj : DataObserver.cpp DataObserver.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataObserver.obj" "DataObserver.cpp" 



ImageDataObserver.obj : ImageDataObserver.cpp ImageDataObserver.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ImageDataObserver.obj" "ImageDataObserver.cpp" 



DataProcessor.obj : DataProcessor.cpp DataProcessor.h    ImageProcessor.h SensorDataProcessor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataProcessor.obj" "DataProcessor.cpp" 



Dashboard.obj : Dashboard.cpp Dashboard.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Dashboard.obj" "Dashboard.cpp" 



NotificationChannel.obj : NotificationChannel.cpp NotificationChannel.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NotificationChannel.obj" "NotificationChannel.cpp" 



DataPublisher.obj : DataPublisher.cpp DataPublisher.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataPublisher.obj" "DataPublisher.cpp" 



DataStorage.obj : DataStorage.cpp DataStorage.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataStorage.obj" "DataStorage.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist WeatherSensor.obj erase WeatherSensor.obj
	if exist StormSensor.obj erase StormSensor.obj
	if exist SMSWTD.obj erase SMSWTD.obj
	if exist WaterPressureSensor.obj erase WaterPressureSensor.obj
	if exist WaterFlowDetector.obj erase WaterFlowDetector.obj
	if exist SateliteImage.obj erase SateliteImage.obj
	if exist Cloud.obj erase Cloud.obj
	if exist AlertedGroup.obj erase AlertedGroup.obj
	if exist Operator.obj erase Operator.obj
	if exist Researcher.obj erase Researcher.obj
	if exist User.obj erase User.obj
	if exist SensorDataProcessor.obj erase SensorDataProcessor.obj
	if exist ImageProcessor.obj erase ImageProcessor.obj
	if exist SateliteImageProcessor.obj erase SateliteImageProcessor.obj
	if exist TectonicMovementProcessor.obj erase TectonicMovementProcessor.obj
	if exist WaterPressureProcessor.obj erase WaterPressureProcessor.obj
	if exist WaterFlowProcessor.obj erase WaterFlowProcessor.obj
	if exist WaterDataProcessor.obj erase WaterDataProcessor.obj
	if exist StormProjectionProcessor.obj erase StormProjectionProcessor.obj
	if exist AtmosphericDataProcessor.obj erase AtmosphericDataProcessor.obj
	if exist SensorConfiguration.obj erase SensorConfiguration.obj
	if exist GeographicalConfiguration.obj erase GeographicalConfiguration.obj
	if exist DataObserver.obj erase DataObserver.obj
	if exist ImageDataObserver.obj erase ImageDataObserver.obj
	if exist DataProcessor.obj erase DataProcessor.obj
	if exist Dashboard.obj erase Dashboard.obj
	if exist NotificationChannel.obj erase NotificationChannel.obj
	if exist DataPublisher.obj erase DataPublisher.obj
	if exist DataStorage.obj erase DataStorage.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
