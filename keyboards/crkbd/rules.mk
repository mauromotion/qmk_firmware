# Build Options
#   change yes to no to disable
#

DEFAULT_FOLDER = crkbd/rev1

RGBLIGHT_SUPPORTED = no
RGB_MATRIX_SUPPORTED = no

OLED_ENABLE = yes
SRC += oled/oled-bongocat.c oled/oled-icons.c

LTO_ENABLE = yes

CAPS_WORD_ENABLE = yes

COMBO_ENABLE = yes
