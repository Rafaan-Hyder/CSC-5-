#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Gaddis\ chap4\ prob14.o \
	${OBJECTDIR}/Savitch\ chap3\ prob3\ roman.o \
	${OBJECTDIR}/Savitch\ chap3\ prob3.o \
	${OBJECTDIR}/Savitch\ chap3\ prob4.o \
	${OBJECTDIR}/gaddis\ chap4\ prob11.o \
	${OBJECTDIR}/gaddis\ chap4\ prob12.o \
	${OBJECTDIR}/gaddis\ chap4\ prob23.o \
	${OBJECTDIR}/gaddis\ chap4\ prob8.o \
	${OBJECTDIR}/savitch\ chap3\ prob1.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/css_assignment_3.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/css_assignment_3.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/css_assignment_3 ${OBJECTFILES} ${LDLIBSOPTIONS}

.NO_PARALLEL:${OBJECTDIR}/Gaddis\ chap4\ prob14.o
${OBJECTDIR}/Gaddis\ chap4\ prob14.o: Gaddis\ chap4\ prob14.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Gaddis\ chap4\ prob14.o Gaddis\ chap4\ prob14.cpp

.NO_PARALLEL:${OBJECTDIR}/Savitch\ chap3\ prob3\ roman.o
${OBJECTDIR}/Savitch\ chap3\ prob3\ roman.o: Savitch\ chap3\ prob3\ roman.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Savitch\ chap3\ prob3\ roman.o Savitch\ chap3\ prob3\ roman.cpp

.NO_PARALLEL:${OBJECTDIR}/Savitch\ chap3\ prob3.o
${OBJECTDIR}/Savitch\ chap3\ prob3.o: Savitch\ chap3\ prob3.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Savitch\ chap3\ prob3.o Savitch\ chap3\ prob3.cpp

.NO_PARALLEL:${OBJECTDIR}/Savitch\ chap3\ prob4.o
${OBJECTDIR}/Savitch\ chap3\ prob4.o: Savitch\ chap3\ prob4.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Savitch\ chap3\ prob4.o Savitch\ chap3\ prob4.cpp

.NO_PARALLEL:${OBJECTDIR}/gaddis\ chap4\ prob11.o
${OBJECTDIR}/gaddis\ chap4\ prob11.o: gaddis\ chap4\ prob11.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gaddis\ chap4\ prob11.o gaddis\ chap4\ prob11.cpp

.NO_PARALLEL:${OBJECTDIR}/gaddis\ chap4\ prob12.o
${OBJECTDIR}/gaddis\ chap4\ prob12.o: gaddis\ chap4\ prob12.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gaddis\ chap4\ prob12.o gaddis\ chap4\ prob12.cpp

.NO_PARALLEL:${OBJECTDIR}/gaddis\ chap4\ prob23.o
${OBJECTDIR}/gaddis\ chap4\ prob23.o: gaddis\ chap4\ prob23.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gaddis\ chap4\ prob23.o gaddis\ chap4\ prob23.cpp

.NO_PARALLEL:${OBJECTDIR}/gaddis\ chap4\ prob8.o
${OBJECTDIR}/gaddis\ chap4\ prob8.o: gaddis\ chap4\ prob8.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gaddis\ chap4\ prob8.o gaddis\ chap4\ prob8.cpp

.NO_PARALLEL:${OBJECTDIR}/savitch\ chap3\ prob1.o
${OBJECTDIR}/savitch\ chap3\ prob1.o: savitch\ chap3\ prob1.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/savitch\ chap3\ prob1.o savitch\ chap3\ prob1.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
