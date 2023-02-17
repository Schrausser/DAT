# Microsoft Developer Studio Generated NMAKE File, Based on dat.dsp
!IF "$(CFG)" == ""
CFG=dat - Win32 Debug
!MESSAGE No configuration specified. Defaulting to dat - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "dat - Win32 Release" && "$(CFG)" != "dat - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "dat.mak" CFG="dat - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "dat - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "dat - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "dat - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\dat.exe"

!ELSE 

ALL : "$(OUTDIR)\dat.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\dat.obj"
	-@erase "$(INTDIR)\dat.pch"
	-@erase "$(INTDIR)\dat.res"
	-@erase "$(INTDIR)\dat_aij.obj"
	-@erase "$(INTDIR)\dat_index.obj"
	-@erase "$(INTDIR)\dat_info.obj"
	-@erase "$(INTDIR)\dat_zellen.obj"
	-@erase "$(INTDIR)\datDlg.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\dat.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MT /w /W0 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\dat.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Release/
CPP_SBRS=.
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x407 /fo"$(INTDIR)\dat.res" /d "NDEBUG" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\dat.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no\
 /pdb:"$(OUTDIR)\dat.pdb" /machine:I386 /out:"$(OUTDIR)\dat.exe" 
LINK32_OBJS= \
	"$(INTDIR)\dat.obj" \
	"$(INTDIR)\dat.res" \
	"$(INTDIR)\dat_aij.obj" \
	"$(INTDIR)\dat_index.obj" \
	"$(INTDIR)\dat_info.obj" \
	"$(INTDIR)\dat_zellen.obj" \
	"$(INTDIR)\datDlg.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\dat.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "dat - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\dat.exe"

!ELSE 

ALL : "$(OUTDIR)\dat.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\dat.obj"
	-@erase "$(INTDIR)\dat.pch"
	-@erase "$(INTDIR)\dat.res"
	-@erase "$(INTDIR)\dat_aij.obj"
	-@erase "$(INTDIR)\dat_index.obj"
	-@erase "$(INTDIR)\dat_info.obj"
	-@erase "$(INTDIR)\dat_zellen.obj"
	-@erase "$(INTDIR)\datDlg.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(INTDIR)\vc50.pdb"
	-@erase "$(OUTDIR)\dat.exe"
	-@erase "$(OUTDIR)\dat.ilk"
	-@erase "$(OUTDIR)\dat.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MTd /W3 /Gm /GX /Zi /O2 /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\dat.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x407 /fo"$(INTDIR)\dat.res" /d "_DEBUG" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\dat.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes\
 /pdb:"$(OUTDIR)\dat.pdb" /debug /machine:I386 /out:"$(OUTDIR)\dat.exe"\
 /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\dat.obj" \
	"$(INTDIR)\dat.res" \
	"$(INTDIR)\dat_aij.obj" \
	"$(INTDIR)\dat_index.obj" \
	"$(INTDIR)\dat_info.obj" \
	"$(INTDIR)\dat_zellen.obj" \
	"$(INTDIR)\datDlg.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\dat.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<


!IF "$(CFG)" == "dat - Win32 Release" || "$(CFG)" == "dat - Win32 Debug"
SOURCE=.\dat.cpp

!IF  "$(CFG)" == "dat - Win32 Release"

DEP_CPP_DAT_C=\
	".\dat.h"\
	".\dat_aij.h"\
	".\dat_index.h"\
	".\dat_info.h"\
	".\dat_zellen.h"\
	".\datDlg.h"\
	

"$(INTDIR)\dat.obj" : $(SOURCE) $(DEP_CPP_DAT_C) "$(INTDIR)"\
 "$(INTDIR)\dat.pch"


!ELSEIF  "$(CFG)" == "dat - Win32 Debug"

DEP_CPP_DAT_C=\
	".\dat.h"\
	".\dat_aij.h"\
	".\dat_index.h"\
	".\dat_info.h"\
	".\dat_zellen.h"\
	".\datDlg.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\dat.obj" : $(SOURCE) $(DEP_CPP_DAT_C) "$(INTDIR)"\
 "$(INTDIR)\dat.pch"


!ENDIF 

SOURCE=.\dat.rc
DEP_RSC_DAT_R=\
	".\res\dat.ico"\
	".\res\dat.rc2"\
	

"$(INTDIR)\dat.res" : $(SOURCE) $(DEP_RSC_DAT_R) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\dat_aij.cpp

!IF  "$(CFG)" == "dat - Win32 Release"

DEP_CPP_DAT_A=\
	".\dat.h"\
	".\dat_aij.h"\
	".\datDlg.h"\
	

"$(INTDIR)\dat_aij.obj" : $(SOURCE) $(DEP_CPP_DAT_A) "$(INTDIR)"\
 "$(INTDIR)\dat.pch"


!ELSEIF  "$(CFG)" == "dat - Win32 Debug"

DEP_CPP_DAT_A=\
	".\dat.h"\
	".\dat_aij.h"\
	".\datDlg.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\dat_aij.obj" : $(SOURCE) $(DEP_CPP_DAT_A) "$(INTDIR)"\
 "$(INTDIR)\dat.pch"


!ENDIF 

SOURCE=.\dat_index.cpp

!IF  "$(CFG)" == "dat - Win32 Release"

DEP_CPP_DAT_I=\
	".\dat.h"\
	".\dat_index.h"\
	".\datDlg.h"\
	

"$(INTDIR)\dat_index.obj" : $(SOURCE) $(DEP_CPP_DAT_I) "$(INTDIR)"\
 "$(INTDIR)\dat.pch"


!ELSEIF  "$(CFG)" == "dat - Win32 Debug"

DEP_CPP_DAT_I=\
	".\dat.h"\
	".\dat_index.h"\
	".\datDlg.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\dat_index.obj" : $(SOURCE) $(DEP_CPP_DAT_I) "$(INTDIR)"\
 "$(INTDIR)\dat.pch"


!ENDIF 

SOURCE=.\dat_info.cpp

!IF  "$(CFG)" == "dat - Win32 Release"

DEP_CPP_DAT_IN=\
	".\dat.h"\
	".\dat_info.h"\
	

"$(INTDIR)\dat_info.obj" : $(SOURCE) $(DEP_CPP_DAT_IN) "$(INTDIR)"\
 "$(INTDIR)\dat.pch"


!ELSEIF  "$(CFG)" == "dat - Win32 Debug"

DEP_CPP_DAT_IN=\
	".\dat.h"\
	".\dat_info.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\dat_info.obj" : $(SOURCE) $(DEP_CPP_DAT_IN) "$(INTDIR)"\
 "$(INTDIR)\dat.pch"


!ENDIF 

SOURCE=.\dat_zellen.cpp

!IF  "$(CFG)" == "dat - Win32 Release"

DEP_CPP_DAT_Z=\
	".\dat.h"\
	".\dat_zellen.h"\
	".\datDlg.h"\
	

"$(INTDIR)\dat_zellen.obj" : $(SOURCE) $(DEP_CPP_DAT_Z) "$(INTDIR)"\
 "$(INTDIR)\dat.pch"


!ELSEIF  "$(CFG)" == "dat - Win32 Debug"

DEP_CPP_DAT_Z=\
	".\dat.h"\
	".\dat_zellen.h"\
	".\datDlg.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\dat_zellen.obj" : $(SOURCE) $(DEP_CPP_DAT_Z) "$(INTDIR)"\
 "$(INTDIR)\dat.pch"


!ENDIF 

SOURCE=.\datDlg.cpp

!IF  "$(CFG)" == "dat - Win32 Release"

DEP_CPP_DATDL=\
	"..\__H_C++_\DATACONV.HPP"\
	".\dat.h"\
	".\dat_aij.h"\
	".\dat_index.h"\
	".\dat_zellen.h"\
	".\datDlg.h"\
	

"$(INTDIR)\datDlg.obj" : $(SOURCE) $(DEP_CPP_DATDL) "$(INTDIR)"\
 "$(INTDIR)\dat.pch"


!ELSEIF  "$(CFG)" == "dat - Win32 Debug"

DEP_CPP_DATDL=\
	"..\__H_C++_\DATACONV.HPP"\
	".\dat.h"\
	".\dat_aij.h"\
	".\dat_index.h"\
	".\dat_zellen.h"\
	".\datDlg.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\datDlg.obj" : $(SOURCE) $(DEP_CPP_DATDL) "$(INTDIR)"\
 "$(INTDIR)\dat.pch"


!ENDIF 

SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "dat - Win32 Release"

CPP_SWITCHES=/nologo /MT /w /W0 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\dat.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\dat.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "dat - Win32 Debug"

CPP_SWITCHES=/nologo /MTd /W3 /Gm /GX /Zi /O2 /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /Fp"$(INTDIR)\dat.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\dat.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 


!ENDIF 

