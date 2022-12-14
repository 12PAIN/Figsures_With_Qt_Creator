#############################################################################
# Makefile for building: Figs_Qt
# Generated by qmake (3.1) (Qt 5.9.0)
# Project:  Figs_Qt.pro
# Template: app
# Command: D:\QtCreator\5.9\5.9\mingw53_32\bin\qmake.exe -o Makefile Figs_Qt.pro -spec win32-g++
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = D:\QtCreator\5.9\5.9\mingw53_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL_FILE = D:\QtCreator\5.9\5.9\mingw53_32\bin\qmake.exe -install qinstall file
QINSTALL_PROGRAM = D:\QtCreator\5.9\5.9\mingw53_32\bin\qmake.exe -install qinstall program
QINSTALL_DIR  = D:\QtCreator\5.9\5.9\mingw53_32\bin\qmake.exe -install qinstall directory
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: Figs_Qt.pro ../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/win32-g++/qmake.conf ../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/spec_pre.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/qdevice.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/device_config.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/common/g++-base.conf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/common/angle.conf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/common/sanitize.conf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/common/gcc-base.conf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/qconfig.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3danimation.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3danimation_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3drender.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_axbase.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_axserver.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_core.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_core_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_dbus.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_designer.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_egl_support_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_fb_support_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_gui.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_help.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_help_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_location.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_location_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_network.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_network_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_nfc.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_opengl.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_positioning.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qml.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quick.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_scxml.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_sensors.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_serialport.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_sql.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_svg.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_testlib.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_theme_support_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_uitools.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_websockets.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_widgets.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_winextras.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_xml.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/qt_functions.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/qt_config.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/win32-g++/qmake.conf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/spec_post.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/exclusive_builds.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/toolchain.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/default_pre.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/win32/default_pre.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/resolve_config.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/exclusive_builds_post.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/default_post.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/precompile_header.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/warn_on.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/qt.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/resources.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/moc.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/win32/opengl.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/uic.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/qmake_use.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/file_copies.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/win32/windows.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/testcase_targets.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/exceptions.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/yacc.prf \
		../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/lex.prf \
		Figs_Qt.pro \
		../../../QtCreator/5.9/5.9/mingw53_32/lib/qtmain.prl \
		../../../QtCreator/5.9/5.9/mingw53_32/lib/Qt5OpenGL.prl \
		../../../QtCreator/5.9/5.9/mingw53_32/lib/Qt5Widgets.prl \
		../../../QtCreator/5.9/5.9/mingw53_32/lib/Qt5Gui.prl \
		../../../QtCreator/5.9/5.9/mingw53_32/lib/Qt5Core.prl
	$(QMAKE) -o Makefile Figs_Qt.pro -spec win32-g++
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/spec_pre.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/qdevice.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/device_config.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/common/g++-base.conf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/common/angle.conf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/common/sanitize.conf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/common/gcc-base.conf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/qconfig.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3danimation.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3danimation_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3drender.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_accessibility_support_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_axbase.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_axserver.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_core.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_core_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_dbus.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_designer.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_egl_support_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_fb_support_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_gui.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_help.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_help_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_location.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_location_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_network.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_network_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_nfc.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_opengl.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_positioning.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qml.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quick.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_scxml.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_sensors.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_serialport.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_sql.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_svg.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_testlib.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_theme_support_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_uitools.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_websockets.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_widgets.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_winextras.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_xml.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/qt_functions.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/qt_config.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/win32-g++/qmake.conf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/spec_post.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/exclusive_builds.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/toolchain.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/default_pre.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/win32/default_pre.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/resolve_config.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/exclusive_builds_post.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/default_post.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/precompile_header.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/warn_on.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/qt.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/resources.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/moc.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/win32/opengl.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/uic.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/qmake_use.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/file_copies.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/win32/windows.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/testcase_targets.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/exceptions.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/yacc.prf:
../../../QtCreator/5.9/5.9/mingw53_32/mkspecs/features/lex.prf:
Figs_Qt.pro:
../../../QtCreator/5.9/5.9/mingw53_32/lib/qtmain.prl:
../../../QtCreator/5.9/5.9/mingw53_32/lib/Qt5OpenGL.prl:
../../../QtCreator/5.9/5.9/mingw53_32/lib/Qt5Widgets.prl:
../../../QtCreator/5.9/5.9/mingw53_32/lib/Qt5Gui.prl:
../../../QtCreator/5.9/5.9/mingw53_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile Figs_Qt.pro -spec win32-g++

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
