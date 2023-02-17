; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=dat_info
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "dat.h"
LastPage=0

ClassCount=8
Class1=CdatApp
Class2=dat_aij
Class3=datei
Class4=dat_farben
Class5=dat_index
Class6=dat_info
Class7=dat_zellen
Class8=CdatDlg

ResourceCount=6
Resource1=IDR_MENU1
Resource2=IDD_dat_INDEX
Resource3=IDD_dat_DIALOG
Resource4=IDD_dat_AIJ
Resource5=IDD_dat_ZELLEN
Resource6=IDD_dat_info

[CLS:CdatApp]
Type=0
BaseClass=CWinApp
HeaderFile=dat.h
ImplementationFile=dat.cpp
LastObject=ID_EINSTELLUNGEN_SCHRIFTART
Filter=N
VirtualFilter=AC

[CLS:dat_aij]
Type=0
BaseClass=CDialog
HeaderFile=dat_aij.h
ImplementationFile=dat_aij.cpp

[CLS:datei]
Type=0
BaseClass=CDialog
HeaderFile=dat_d.h
ImplementationFile=dat_d.cpp

[CLS:dat_farben]
Type=0
BaseClass=CDialog
HeaderFile=dat_farben.h
ImplementationFile=dat_farben.cpp

[CLS:dat_index]
Type=0
BaseClass=CDialog
HeaderFile=dat_index.h
ImplementationFile=dat_index.cpp

[CLS:dat_info]
Type=0
BaseClass=CDialog
HeaderFile=dat_info.h
ImplementationFile=dat_info.cpp
Filter=D
VirtualFilter=dWC
LastObject=dat_info

[CLS:dat_zellen]
Type=0
BaseClass=CDialog
HeaderFile=dat_zellen.h
ImplementationFile=dat_zellen.cpp

[CLS:CdatDlg]
Type=0
BaseClass=CDialog
HeaderFile=datDlg.h
ImplementationFile=datDlg.cpp
LastObject=CdatDlg
Filter=D
VirtualFilter=dWC

[DLG:IDD_dat_AIJ]
Type=1
Class=dat_aij
ControlCount=6
Control1=IDC_j,edit,1342177408
Control2=IDC_i,edit,1342177408
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_DAT,edit,1342242944

[DLG:IDD_dat_INDEX]
Type=1
Class=dat_index
ControlCount=4
Control1=IDC_CHECK_II,button,1342181379
Control2=IDC_STATIC,static,1342308352
Control3=IDC_CHECK_IJ,button,1342181379
Control4=IDC_STATIC,static,1342308352

[DLG:IDD_dat_info]
Type=1
Class=dat_info
ControlCount=5
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_EDIT_compile,edit,1342179456

[DLG:IDD_dat_ZELLEN]
Type=1
Class=dat_zellen
ControlCount=8
Control1=IDC_STATIC,static,1342308352
Control2=IDC_SP_PLUS,button,1342177280
Control3=IDC_SP_MINUS,button,1342177280
Control4=IDC_SP,edit,1342177408
Control5=IDC_STATIC,static,1342308352
Control6=IDC_ZL,edit,1342177408
Control7=IDC_ZL_PLUS,button,1342177280
Control8=IDC_ZL_MINUS,button,1342177280

[DLG:IDD_dat_DIALOG]
Type=1
Class=CdatDlg
ControlCount=0

[MNU:IDR_MENU1]
Type=1
Class=?
Command1=ID_DATEI_OEFFNEN
Command2=ID_MATRIX_SPEICHERN
Command3=ID_MATRIX_SPEICHERNUNTER
Command4=ID_DATEI_SCHLIESSEN
Command5=ID_APP_EXIT
Command6=ID_DATEI_IJ
Command7=ID_EINST_ZELLEN
Command8=ID_EINST_FARBEN
Command9=ID_EINSTELLUNGEN_SCHRIFTART
Command10=ID_EINST_INDEX
Command11=ID_ANSICHT_STATUSLEISTE
Command12=ID_PROGRAMM_INFO
CommandCount=12

