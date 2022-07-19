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
	${OBJECTDIR}/Savitch\ chapter\ 2\ problem\ 9.o \
	${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 1.o \
	${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 10.o \
	${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 20.o \
	${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 4.o \
	${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 7.o \
	${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 8.o \
	${OBJECTDIR}/gaddis\ chpater\ 3\ problem\ 3.o \
	${OBJECTDIR}/paycheck.o \
	${OBJECTDIR}/savitch\ chpater\ 2\ problem\ 2.o \
	${OBJECTDIR}/savitch\ code\ E\ chapter\ 2\ problem\ 9.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/css_assignment_2.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/css_assignment_2.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/css_assignment_2 ${OBJECTFILES} ${LDLIBSOPTIONS}

.NO_PARALLEL:${OBJECTDIR}/Savitch\ chapter\ 2\ problem\ 9.o
${OBJECTDIR}/Savitch\ chapter\ 2\ problem\ 9.o: Savitch\ chapter\ 2\ problem\ 9.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Savitch\ chapter\ 2\ problem\ 9.o Savitch\ chapter\ 2\ problem\ 9.cpp

.NO_PARALLEL:${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 1.o
${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 1.o: gaddis\ chapter\ 3\ problem\ 1.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 1.o gaddis\ chapter\ 3\ problem\ 1.cpp

.NO_PARALLEL:${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 10.o
${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 10.o: gaddis\ chapter\ 3\ problem\ 10.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 10.o gaddis\ chapter\ 3\ problem\ 10.cpp

.NO_PARALLEL:${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 20.o
${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 20.o: gaddis\ chapter\ 3\ problem\ 20.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 20.o gaddis\ chapter\ 3\ problem\ 20.cpp

.NO_PARALLEL:${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 4.o
${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 4.o: gaddis\ chapter\ 3\ problem\ 4.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 4.o gaddis\ chapter\ 3\ problem\ 4.cpp

.NO_PARALLEL:${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 7.o
${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 7.o: gaddis\ chapter\ 3\ problem\ 7.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 7.o gaddis\ chapter\ 3\ problem\ 7.cpp

.NO_PARALLEL:${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 8.o
${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 8.o: gaddis\ chapter\ 3\ problem\ 8.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gaddis\ chapter\ 3\ problem\ 8.o gaddis\ chapter\ 3\ problem\ 8.cpp

.NO_PARALLEL:${OBJECTDIR}/gaddis\ chpater\ 3\ problem\ 3.o
${OBJECTDIR}/gaddis\ chpater\ 3\ problem\ 3.o: gaddis\ chpater\ 3\ problem\ 3.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gaddis\ chpater\ 3\ problem\ 3.o gaddis\ chpater\ 3\ problem\ 3.cpp

${OBJECTDIR}/paycheck.o: paycheck.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/paycheck.o paycheck.cpp

.NO_PARALLEL:${OBJECTDIR}/savitch\ chpater\ 2\ problem\ 2.o
${OBJECTDIR}/savitch\ chpater\ 2\ problem\ 2.o: savitch\ chpater\ 2\ problem\ 2.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/savitch\ chpater\ 2\ problem\ 2.o savitch\ chpater\ 2\ problem\ 2.cpp

.NO_PARALLEL:${OBJECTDIR}/savitch\ code\ E\ chapter\ 2\ problem\ 9.o
${OBJECTDIR}/savitch\ code\ E\ chapter\ 2\ problem\ 9.o: savitch\ code\ E\ chapter\ 2\ problem\ 9.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/savitch\ code\ E\ chapter\ 2\ problem\ 9.o savitch\ code\ E\ chapter\ 2\ problem\ 9.cpp

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
