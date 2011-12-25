# ******************************************************************************
#  pan_and_zoom.pro                                                Tao project
# ******************************************************************************
# File Description:
#
#    Qt build file for the PanAndZoom module
#
#    PanAndZoom offers an interesting way to navigate in a slide
#
#
#
# ******************************************************************************
# This software is property of Taodyne SAS - Confidential
# Ce logiciel est la propriété de Taodyne SAS - Confidentiel
# (C) 2011 Christophe de Dinechin <christophe@taodyne.com>
# (C) 2011 Taodyne SAS
# ******************************************************************************

MODINSTDIR = pan_and_zoom

include(../modules.pri)

OTHER_FILES = pan_and_zoom.xl \
    pan_and_zoom2.xl \
    doc/pan_and_zoom.png \
    doc/pan_and_zoom.ddd \
    icon.png

PICTURES = \
    images/Planet-Map.jpg \
    images/Planet-Clouds.png \
    images/Movie-Stars-Background.jpg \
    $$NULL

pics.path  = $$MODINSTPATH/images
pics.files = $$PICTURES

INSTALLS    += thismod_icon pics
INSTALLS    -= thismod_bin

HEADERS += \
    doc/pan_and_zoom.doxy.h

CRYPT_XL_SOURCES = pan_and_zoom2.xl
include(../crypt_xl.pri)

LICENSE_FILES = pan_and_zoom.taokey.notsigned
include(../licenses.pri)

QMAKE_SUBSTITUTES = doc/Doxyfile.in
DOXYFILE = doc/Doxyfile
include(../modules_doc.pri)
