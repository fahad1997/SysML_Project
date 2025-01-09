
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

INSTRUMENTATION=Animation

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
  AlertedGroup.obj \
  Operator.obj \
  Researcher.obj \
  User.obj \
  Admin.obj \
  SateliteImage.obj \
  Cloud.obj \
  SMSWTD.obj \
  StormSensor.obj \
  WaterFlowDetector.obj \
  WaterPressureSensor.obj \
  AirborneSensor.obj \
  WeatherSensor.obj \
  Dashboard.obj \
  ImageCollector.obj \
  DataCollector.obj \
  NotificationService.obj \
  SMSWTD_CONTROLLER.obj \
  DataProcessor.obj \
  ImageProcessor.obj \
  SensorDataProcessor.obj \
  GeographicalConfiguration.obj \
  SensorConfiguration.obj \
  CloudClient.obj \
  DataPublisher.obj \
  DashboardPublisher.obj \
  PredictionModelPublisher.obj \
  PredictionModel.obj \
  ANALYSIS.obj \
  DESIGN.obj \
  PKG_DASHBOARD.obj \
  PKG_DATA_COLLECTOR.obj \
  PKG_NOTIFICATION_SERVICE.obj \
  PKG_SMSWTD_CONTROLLER.obj \
  PKG_PREDICTION_MODEL.obj \
  UC_SMSWTD.obj \
  UC_DATA_PROCESSOR.obj \
  ProxyPortInterfaces.obj




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






AlertedGroup.obj : AlertedGroup.cpp AlertedGroup.h    ANALYSIS.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AlertedGroup.obj" "AlertedGroup.cpp" 



Operator.obj : Operator.cpp Operator.h    ANALYSIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Operator.obj" "Operator.cpp" 



Researcher.obj : Researcher.cpp Researcher.h    ANALYSIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Researcher.obj" "Researcher.cpp" 



User.obj : User.cpp User.h    ANALYSIS.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"User.obj" "User.cpp" 



Admin.obj : Admin.cpp Admin.h    ANALYSIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Admin.obj" "Admin.cpp" 



SateliteImage.obj : SateliteImage.cpp SateliteImage.h    DESIGN.h SMSWTD.h ImageCollector.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SateliteImage.obj" "SateliteImage.cpp" 



Cloud.obj : Cloud.cpp Cloud.h    DESIGN.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Cloud.obj" "Cloud.cpp" 



SMSWTD.obj : SMSWTD.cpp SMSWTD.h    DESIGN.h WeatherSensor.h StormSensor.h WaterPressureSensor.h WaterFlowDetector.h AlertedGroup.h SateliteImage.h Cloud.h User.h AirborneSensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTD.obj" "SMSWTD.cpp" 



StormSensor.obj : StormSensor.cpp StormSensor.h    DESIGN.h SMSWTD.h DataCollector.h int_windSpeed_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"StormSensor.obj" "StormSensor.cpp" 



WaterFlowDetector.obj : WaterFlowDetector.cpp WaterFlowDetector.h    DESIGN.h SMSWTD.h DataCollector.h int_waterPressure_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WaterFlowDetector.obj" "WaterFlowDetector.cpp" 



WaterPressureSensor.obj : WaterPressureSensor.cpp WaterPressureSensor.h    DESIGN.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WaterPressureSensor.obj" "WaterPressureSensor.cpp" 



AirborneSensor.obj : AirborneSensor.cpp AirborneSensor.h    DESIGN.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AirborneSensor.obj" "AirborneSensor.cpp" 



WeatherSensor.obj : WeatherSensor.cpp WeatherSensor.h    DESIGN.h SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"WeatherSensor.obj" "WeatherSensor.cpp" 



Dashboard.obj : Dashboard.cpp Dashboard.h    PKG_DASHBOARD.h NotificationService.h SMSWTD_CONTROLLER.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Dashboard.obj" "Dashboard.cpp" 



ImageCollector.obj : ImageCollector.cpp ImageCollector.h    PKG_DATA_COLLECTOR.h SateliteImage.h SMSWTD_CONTROLLER.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ImageCollector.obj" "ImageCollector.cpp" 



DataCollector.obj : DataCollector.cpp DataCollector.h    PKG_DATA_COLLECTOR.h SMSWTD_CONTROLLER.h WaterFlowDetector.h StormSensor.h int_waterPressure_ProxyFlowPropertyInterface.h int_windSpeed_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataCollector.obj" "DataCollector.cpp" 



NotificationService.obj : NotificationService.cpp NotificationService.h    PKG_NOTIFICATION_SERVICE.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NotificationService.obj" "NotificationService.cpp" 



SMSWTD_CONTROLLER.obj : SMSWTD_CONTROLLER.cpp SMSWTD_CONTROLLER.h    PKG_SMSWTD_CONTROLLER.h DataProcessor.h Dashboard.h PredictionModel.h ImageCollector.h DataCollector.h SensorConfiguration.h DESIGN.h int_waterPressure_ProxyFlowPropertyInterface.h int_windSpeed_ProxyFlowPropertyInterface.h int_thresholdWaterPressure_ProxyFlowPropertyInterface.h int_thresholdWindSpeed_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SMSWTD_CONTROLLER.obj" "SMSWTD_CONTROLLER.cpp" 



DataProcessor.obj : DataProcessor.cpp DataProcessor.h    PKG_SMSWTD_CONTROLLER.h SensorDataProcessor.h ImageProcessor.h DataPublisher.h CloudClient.h SensorConfiguration.h GeographicalConfiguration.h DESIGN.h int_waterPressure_ProxyFlowPropertyInterface.h int_windSpeed_ProxyFlowPropertyInterface.h int_thresholdWaterPressure_ProxyFlowPropertyInterface.h int_thresholdWindSpeed_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataProcessor.obj" "DataProcessor.cpp" 



ImageProcessor.obj : ImageProcessor.cpp ImageProcessor.h    PKG_SMSWTD_CONTROLLER.h ImageCollector.h DataProcessor.h DESIGN.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ImageProcessor.obj" "ImageProcessor.cpp" 



SensorDataProcessor.obj : SensorDataProcessor.cpp SensorDataProcessor.h    PKG_SMSWTD_CONTROLLER.h DataCollector.h DataProcessor.h DESIGN.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SensorDataProcessor.obj" "SensorDataProcessor.cpp" 



GeographicalConfiguration.obj : GeographicalConfiguration.cpp GeographicalConfiguration.h    PKG_SMSWTD_CONTROLLER.h DataProcessor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"GeographicalConfiguration.obj" "GeographicalConfiguration.cpp" 



SensorConfiguration.obj : SensorConfiguration.cpp SensorConfiguration.h    PKG_SMSWTD_CONTROLLER.h DataProcessor.h int_thresholdWaterPressure_ProxyFlowPropertyInterface.h int_thresholdWindSpeed_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SensorConfiguration.obj" "SensorConfiguration.cpp" 



CloudClient.obj : CloudClient.cpp CloudClient.h    PKG_SMSWTD_CONTROLLER.h DataProcessor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CloudClient.obj" "CloudClient.cpp" 



DataPublisher.obj : DataPublisher.cpp DataPublisher.h    PKG_SMSWTD_CONTROLLER.h DataProcessor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DataPublisher.obj" "DataPublisher.cpp" 



DashboardPublisher.obj : DashboardPublisher.cpp DashboardPublisher.h    PKG_SMSWTD_CONTROLLER.h DataPublisher.h DataProcessor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DashboardPublisher.obj" "DashboardPublisher.cpp" 



PredictionModelPublisher.obj : PredictionModelPublisher.cpp PredictionModelPublisher.h    PKG_SMSWTD_CONTROLLER.h DataPublisher.h DataProcessor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PredictionModelPublisher.obj" "PredictionModelPublisher.cpp" 



PredictionModel.obj : PredictionModel.cpp PredictionModel.h    PKG_PREDICTION_MODEL.h SMSWTD_CONTROLLER.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PredictionModel.obj" "PredictionModel.cpp" 



ANALYSIS.obj : ANALYSIS.cpp ANALYSIS.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ANALYSIS.obj" "ANALYSIS.cpp" 



DESIGN.obj : DESIGN.cpp DESIGN.h    SateliteImage.h Cloud.h SMSWTD.h StormSensor.h WaterFlowDetector.h WaterPressureSensor.h AirborneSensor.h WeatherSensor.h SMSWTD_CONTROLLER.h DataProcessor.h DataCollector.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"DESIGN.obj" "DESIGN.cpp" 



PKG_DASHBOARD.obj : PKG_DASHBOARD.cpp PKG_DASHBOARD.h    Dashboard.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PKG_DASHBOARD.obj" "PKG_DASHBOARD.cpp" 



PKG_DATA_COLLECTOR.obj : PKG_DATA_COLLECTOR.cpp PKG_DATA_COLLECTOR.h    ImageCollector.h DataCollector.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PKG_DATA_COLLECTOR.obj" "PKG_DATA_COLLECTOR.cpp" 



PKG_NOTIFICATION_SERVICE.obj : PKG_NOTIFICATION_SERVICE.cpp PKG_NOTIFICATION_SERVICE.h    NotificationService.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PKG_NOTIFICATION_SERVICE.obj" "PKG_NOTIFICATION_SERVICE.cpp" 



PKG_SMSWTD_CONTROLLER.obj : PKG_SMSWTD_CONTROLLER.cpp PKG_SMSWTD_CONTROLLER.h    SMSWTD_CONTROLLER.h DataProcessor.h ImageProcessor.h SensorDataProcessor.h GeographicalConfiguration.h SensorConfiguration.h CloudClient.h DataPublisher.h DashboardPublisher.h PredictionModelPublisher.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PKG_SMSWTD_CONTROLLER.obj" "PKG_SMSWTD_CONTROLLER.cpp" 



PKG_PREDICTION_MODEL.obj : PKG_PREDICTION_MODEL.cpp PKG_PREDICTION_MODEL.h    PredictionModel.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"PKG_PREDICTION_MODEL.obj" "PKG_PREDICTION_MODEL.cpp" 



UC_SMSWTD.obj : UC_SMSWTD.cpp UC_SMSWTD.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_SMSWTD.obj" "UC_SMSWTD.cpp" 



UC_DATA_PROCESSOR.obj : UC_DATA_PROCESSOR.cpp UC_DATA_PROCESSOR.h    UC_SMSWTD.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UC_DATA_PROCESSOR.obj" "UC_DATA_PROCESSOR.cpp" 



ProxyPortInterfaces.obj : ProxyPortInterfaces.cpp ProxyPortInterfaces.h    int_windSpeed_ProxyFlowPropertyInterface.h int_waterPressure_ProxyFlowPropertyInterface.h int_thresholdWaterPressure_ProxyFlowPropertyInterface.h int_thresholdWindSpeed_ProxyFlowPropertyInterface.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ProxyPortInterfaces.obj" "ProxyPortInterfaces.cpp" 






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
	if exist AlertedGroup.obj erase AlertedGroup.obj
	if exist Operator.obj erase Operator.obj
	if exist Researcher.obj erase Researcher.obj
	if exist User.obj erase User.obj
	if exist Admin.obj erase Admin.obj
	if exist SateliteImage.obj erase SateliteImage.obj
	if exist Cloud.obj erase Cloud.obj
	if exist SMSWTD.obj erase SMSWTD.obj
	if exist StormSensor.obj erase StormSensor.obj
	if exist WaterFlowDetector.obj erase WaterFlowDetector.obj
	if exist WaterPressureSensor.obj erase WaterPressureSensor.obj
	if exist AirborneSensor.obj erase AirborneSensor.obj
	if exist WeatherSensor.obj erase WeatherSensor.obj
	if exist Dashboard.obj erase Dashboard.obj
	if exist ImageCollector.obj erase ImageCollector.obj
	if exist DataCollector.obj erase DataCollector.obj
	if exist NotificationService.obj erase NotificationService.obj
	if exist SMSWTD_CONTROLLER.obj erase SMSWTD_CONTROLLER.obj
	if exist DataProcessor.obj erase DataProcessor.obj
	if exist ImageProcessor.obj erase ImageProcessor.obj
	if exist SensorDataProcessor.obj erase SensorDataProcessor.obj
	if exist GeographicalConfiguration.obj erase GeographicalConfiguration.obj
	if exist SensorConfiguration.obj erase SensorConfiguration.obj
	if exist CloudClient.obj erase CloudClient.obj
	if exist DataPublisher.obj erase DataPublisher.obj
	if exist DashboardPublisher.obj erase DashboardPublisher.obj
	if exist PredictionModelPublisher.obj erase PredictionModelPublisher.obj
	if exist PredictionModel.obj erase PredictionModel.obj
	if exist ANALYSIS.obj erase ANALYSIS.obj
	if exist DESIGN.obj erase DESIGN.obj
	if exist PKG_DASHBOARD.obj erase PKG_DASHBOARD.obj
	if exist PKG_DATA_COLLECTOR.obj erase PKG_DATA_COLLECTOR.obj
	if exist PKG_NOTIFICATION_SERVICE.obj erase PKG_NOTIFICATION_SERVICE.obj
	if exist PKG_SMSWTD_CONTROLLER.obj erase PKG_SMSWTD_CONTROLLER.obj
	if exist PKG_PREDICTION_MODEL.obj erase PKG_PREDICTION_MODEL.obj
	if exist UC_SMSWTD.obj erase UC_SMSWTD.obj
	if exist UC_DATA_PROCESSOR.obj erase UC_DATA_PROCESSOR.obj
	if exist ProxyPortInterfaces.obj erase ProxyPortInterfaces.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
