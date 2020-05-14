INSTALL_TARGET_PROCESSES = SpringBoard

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = tweak_wechat
#配置Tweak.x的文件位置
tweak_wechat_FILES = src/Tweak.x src/Controller/*.m src/Model/*.m src/View/*.m

tweak_wechat_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk
