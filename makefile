prebuild-gen:
	cd src && meson setup ../build

build-gen:
	cd build && meson compile

run-gen:
	./build/app-gen $(CLASS)

create-class-%:
	@echo start create class $*
	@echo create $*.h
	$(MAKE) create-header-file-for-$*
	@echo create $*.c++
	$(MAKE) create-source-file-for-$*

create-header-file-for-%:
	@echo \#pragma once > $*.h
	@echo >> $*.h
	@echo class $* { >> $*.h
	@echo >> $*.h
	@echo }\; >> $*.h

create-source-file-for-%:
	@echo \#include \"$*.h\" > $*.c++
