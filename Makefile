#############################################################################
# Makefile for building: YellowDolphinDownloader
# Generated by qmake (2.01a) (Qt 4.6.2) on: Mi. Mai 26 02:16:08 2010
# Project:  YellowDolphinDownloader.pro
# Template: app
# Command: /home/cyborg-x1/Programme/qtsdk-2010.02/qt/bin/qmake -unix CONFIG+=debug_and_release -o Makefile YellowDolphinDownloader.pro
#############################################################################

first: release
install: release-install
uninstall: release-uninstall
MAKEFILE      = Makefile
QMAKE         = /home/cyborg-x1/Programme/qtsdk-2010.02/qt/bin/qmake
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
SUBTARGETS    =  \
		release \
		debug

release: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_default: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-make_first: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release first
release-all: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: $(MAKEFILE).Release FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_default: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-make_first: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug first
debug-all: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: $(MAKEFILE).Debug FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: YellowDolphinDownloader.pro  ../../../Programme/qtsdk-2010.02/qt/mkspecs/linux-g++-64/qmake.conf ../../../Programme/qtsdk-2010.02/qt/mkspecs/common/g++.conf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/common/unix.conf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/common/linux.conf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/qconfig.pri \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/qt_functions.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/qt_config.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/exclusive_builds.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/default_pre.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/release.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/debug_and_release.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/default_post.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/warn_on.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/qt.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/unix/thread.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/moc.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/resources.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/uic.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/yacc.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/lex.prf \
		../../../Programme/qtsdk-2010.02/qt/mkspecs/features/include_source_dir.prf \
		/home/cyborg-x1/Programme/qtsdk-2010.02/qt/lib/libQtGui.prl \
		/home/cyborg-x1/Programme/qtsdk-2010.02/qt/lib/libQtCore.prl
	$(QMAKE) -unix CONFIG+=debug_and_release -o Makefile YellowDolphinDownloader.pro
../../../Programme/qtsdk-2010.02/qt/mkspecs/common/g++.conf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/common/unix.conf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/common/linux.conf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/qconfig.pri:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/qt_functions.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/qt_config.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/exclusive_builds.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/default_pre.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/release.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/debug_and_release.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/default_post.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/warn_on.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/qt.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/unix/thread.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/moc.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/resources.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/uic.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/yacc.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/lex.prf:
../../../Programme/qtsdk-2010.02/qt/mkspecs/features/include_source_dir.prf:
/home/cyborg-x1/Programme/qtsdk-2010.02/qt/lib/libQtGui.prl:
/home/cyborg-x1/Programme/qtsdk-2010.02/qt/lib/libQtCore.prl:
qmake: qmake_all FORCE
	@$(QMAKE) -unix CONFIG+=debug_and_release -o Makefile YellowDolphinDownloader.pro

qmake_all: FORCE

make_default: release-make_default debug-make_default FORCE
make_first: release-make_first debug-make_first FORCE
all: release-all debug-all FORCE
clean: release-clean debug-clean FORCE
distclean: release-distclean debug-distclean FORCE
	-$(DEL_FILE) Makefile

release-mocclean: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables: $(MAKEFILE).Release
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables: $(MAKEFILE).Debug
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
