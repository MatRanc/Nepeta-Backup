export ARCHS = armv7 armv7s arm64 arm64e
export TARGET = iphone:11.2:9.0
include $(THEOS)/makefiles/common.mk

# FULL PATH of the FLEX repo on your own machine
FLEX_ROOT = ../FLEX

# Function to convert /foo/bar to -I/foo/bar
dtoim = $(foreach d,$(1),-I$(d))

# Gather FLEX sources
SOURCES  = $(shell find $(FLEX_ROOT)/Classes -name '*.m')
SOURCES += $(shell find $(FLEX_ROOT)/Classes -name '*.mm')
# Gather FLEX headers for search paths
_IMPORTS  = $(shell /bin/ls -d $(FLEX_ROOT)/Classes/*/)
_IMPORTS += $(shell /bin/ls -d $(FLEX_ROOT)/Classes/*/*/)
IMPORTS = -I$(FLEX_ROOT)/Classes/ $(call dtoim, $(_IMPORTS))

TWEAK_NAME = FLEXXX
FLEXXX_FRAMEWORKS = CoreGraphics UIKit ImageIO QuartzCore
FLEXXX_FILES = Tweak.xm $(SOURCES)
FLEXXX_LIBRARIES = sqlite3 z
FLEXXX_CFLAGS += -fobjc-arc -w $(IMPORTS)

include $(THEOS_MAKE_PATH)/tweak.mk

before-stage::
	find . -name ".DS_Store" -delete

after-install::
	install.exec "killall -9 SpringBoard"

# For printing variables from the makefile
print-%  : ; @echo $* = $($*)

