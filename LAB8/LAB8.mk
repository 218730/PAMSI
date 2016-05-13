##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=LAB8
ConfigurationName      :=Debug
WorkspacePath          :=/home/psiejka/Uczelnia/S4/LAB8
ProjectPath            :=/home/psiejka/Uczelnia/S4/LAB8
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=psiejka
Date                   :=13/05/16
CodeLitePath           :=/home/psiejka/.codelite
LinkerName             :=/usr/bin/x86_64-linux-gnu-g++
SharedObjectLinkerName :=/usr/bin/x86_64-linux-gnu-g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="LAB8.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -O0
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch). $(LibraryPathSwitch)Debug 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/x86_64-linux-gnu-ar rcu
CXX      := /usr/bin/x86_64-linux-gnu-g++
CC       := /usr/bin/x86_64-linux-gnu-gcc
CXXFLAGS :=  -g -Wall -std=c++11 $(Preprocessors)
CFLAGS   :=   $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/x86_64-linux-gnu-as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/src_graf.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_lista.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_stos.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_mergesort.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_wartosc.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_asoctab.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_test.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_drzewo.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_hashtable.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_stoper.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/src_kolejka.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_szukajgrafu.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_tablica.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_quicksort.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_graf.cpp$(ObjectSuffix): src/graf.cpp $(IntermediateDirectory)/src_graf.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/graf.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_graf.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_graf.cpp$(DependSuffix): src/graf.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_graf.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_graf.cpp$(DependSuffix) -MM "src/graf.cpp"

$(IntermediateDirectory)/src_graf.cpp$(PreprocessSuffix): src/graf.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_graf.cpp$(PreprocessSuffix) "src/graf.cpp"

$(IntermediateDirectory)/src_lista.cpp$(ObjectSuffix): src/lista.cpp $(IntermediateDirectory)/src_lista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_lista.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_lista.cpp$(DependSuffix): src/lista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_lista.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_lista.cpp$(DependSuffix) -MM "src/lista.cpp"

$(IntermediateDirectory)/src_lista.cpp$(PreprocessSuffix): src/lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_lista.cpp$(PreprocessSuffix) "src/lista.cpp"

$(IntermediateDirectory)/src_stos.cpp$(ObjectSuffix): src/stos.cpp $(IntermediateDirectory)/src_stos.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/stos.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_stos.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_stos.cpp$(DependSuffix): src/stos.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_stos.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_stos.cpp$(DependSuffix) -MM "src/stos.cpp"

$(IntermediateDirectory)/src_stos.cpp$(PreprocessSuffix): src/stos.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_stos.cpp$(PreprocessSuffix) "src/stos.cpp"

$(IntermediateDirectory)/src_mergesort.cpp$(ObjectSuffix): src/mergesort.cpp $(IntermediateDirectory)/src_mergesort.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/mergesort.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_mergesort.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_mergesort.cpp$(DependSuffix): src/mergesort.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_mergesort.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_mergesort.cpp$(DependSuffix) -MM "src/mergesort.cpp"

$(IntermediateDirectory)/src_mergesort.cpp$(PreprocessSuffix): src/mergesort.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_mergesort.cpp$(PreprocessSuffix) "src/mergesort.cpp"

$(IntermediateDirectory)/src_wartosc.cpp$(ObjectSuffix): src/wartosc.cpp $(IntermediateDirectory)/src_wartosc.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/wartosc.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_wartosc.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_wartosc.cpp$(DependSuffix): src/wartosc.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_wartosc.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_wartosc.cpp$(DependSuffix) -MM "src/wartosc.cpp"

$(IntermediateDirectory)/src_wartosc.cpp$(PreprocessSuffix): src/wartosc.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_wartosc.cpp$(PreprocessSuffix) "src/wartosc.cpp"

$(IntermediateDirectory)/src_asoctab.cpp$(ObjectSuffix): src/asoctab.cpp $(IntermediateDirectory)/src_asoctab.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/asoctab.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_asoctab.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_asoctab.cpp$(DependSuffix): src/asoctab.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_asoctab.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_asoctab.cpp$(DependSuffix) -MM "src/asoctab.cpp"

$(IntermediateDirectory)/src_asoctab.cpp$(PreprocessSuffix): src/asoctab.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_asoctab.cpp$(PreprocessSuffix) "src/asoctab.cpp"

$(IntermediateDirectory)/src_test.cpp$(ObjectSuffix): src/test.cpp $(IntermediateDirectory)/src_test.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/test.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_test.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_test.cpp$(DependSuffix): src/test.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_test.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_test.cpp$(DependSuffix) -MM "src/test.cpp"

$(IntermediateDirectory)/src_test.cpp$(PreprocessSuffix): src/test.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_test.cpp$(PreprocessSuffix) "src/test.cpp"

$(IntermediateDirectory)/src_drzewo.cpp$(ObjectSuffix): src/drzewo.cpp $(IntermediateDirectory)/src_drzewo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/drzewo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_drzewo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_drzewo.cpp$(DependSuffix): src/drzewo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_drzewo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_drzewo.cpp$(DependSuffix) -MM "src/drzewo.cpp"

$(IntermediateDirectory)/src_drzewo.cpp$(PreprocessSuffix): src/drzewo.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_drzewo.cpp$(PreprocessSuffix) "src/drzewo.cpp"

$(IntermediateDirectory)/src_hashtable.cpp$(ObjectSuffix): src/hashtable.cpp $(IntermediateDirectory)/src_hashtable.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/hashtable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_hashtable.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_hashtable.cpp$(DependSuffix): src/hashtable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_hashtable.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_hashtable.cpp$(DependSuffix) -MM "src/hashtable.cpp"

$(IntermediateDirectory)/src_hashtable.cpp$(PreprocessSuffix): src/hashtable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_hashtable.cpp$(PreprocessSuffix) "src/hashtable.cpp"

$(IntermediateDirectory)/src_stoper.cpp$(ObjectSuffix): src/stoper.cpp $(IntermediateDirectory)/src_stoper.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/stoper.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_stoper.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_stoper.cpp$(DependSuffix): src/stoper.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_stoper.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_stoper.cpp$(DependSuffix) -MM "src/stoper.cpp"

$(IntermediateDirectory)/src_stoper.cpp$(PreprocessSuffix): src/stoper.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_stoper.cpp$(PreprocessSuffix) "src/stoper.cpp"

$(IntermediateDirectory)/src_kolejka.cpp$(ObjectSuffix): src/kolejka.cpp $(IntermediateDirectory)/src_kolejka.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/kolejka.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_kolejka.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_kolejka.cpp$(DependSuffix): src/kolejka.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_kolejka.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_kolejka.cpp$(DependSuffix) -MM "src/kolejka.cpp"

$(IntermediateDirectory)/src_kolejka.cpp$(PreprocessSuffix): src/kolejka.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_kolejka.cpp$(PreprocessSuffix) "src/kolejka.cpp"

$(IntermediateDirectory)/src_szukajgrafu.cpp$(ObjectSuffix): src/szukajgrafu.cpp $(IntermediateDirectory)/src_szukajgrafu.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/szukajgrafu.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_szukajgrafu.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_szukajgrafu.cpp$(DependSuffix): src/szukajgrafu.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_szukajgrafu.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_szukajgrafu.cpp$(DependSuffix) -MM "src/szukajgrafu.cpp"

$(IntermediateDirectory)/src_szukajgrafu.cpp$(PreprocessSuffix): src/szukajgrafu.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_szukajgrafu.cpp$(PreprocessSuffix) "src/szukajgrafu.cpp"

$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix): src/main.cpp $(IntermediateDirectory)/src_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_main.cpp$(DependSuffix): src/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_main.cpp$(DependSuffix) -MM "src/main.cpp"

$(IntermediateDirectory)/src_main.cpp$(PreprocessSuffix): src/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_main.cpp$(PreprocessSuffix) "src/main.cpp"

$(IntermediateDirectory)/src_tablica.cpp$(ObjectSuffix): src/tablica.cpp $(IntermediateDirectory)/src_tablica.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/tablica.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_tablica.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_tablica.cpp$(DependSuffix): src/tablica.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_tablica.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_tablica.cpp$(DependSuffix) -MM "src/tablica.cpp"

$(IntermediateDirectory)/src_tablica.cpp$(PreprocessSuffix): src/tablica.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_tablica.cpp$(PreprocessSuffix) "src/tablica.cpp"

$(IntermediateDirectory)/src_quicksort.cpp$(ObjectSuffix): src/quicksort.cpp $(IntermediateDirectory)/src_quicksort.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/psiejka/Uczelnia/S4/LAB8/src/quicksort.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_quicksort.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_quicksort.cpp$(DependSuffix): src/quicksort.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_quicksort.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_quicksort.cpp$(DependSuffix) -MM "src/quicksort.cpp"

$(IntermediateDirectory)/src_quicksort.cpp$(PreprocessSuffix): src/quicksort.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_quicksort.cpp$(PreprocessSuffix) "src/quicksort.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


