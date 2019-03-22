# ******************************************************************************
# pan_and_zoom.pro                                                 Tao3D project
# ******************************************************************************
#
# File description:
#
#    Qt build file for the PanAndZoom module
#
#    PanAndZoom offers an interesting way to navigate in a slide
#
#
#
#
# ******************************************************************************
# This software is licensed under the GNU General Public License v3
# (C) 2011-2013, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
# (C) 2011-2013, Catherine Burvelle <catherine@taodyne.com>
# (C) 2011-2014,2019, Christophe de Dinechin <christophe@dinechin.org>
# (C) 2011-2013, Jérôme Forissier <jerome@taodyne.com>
# (C) 2011-2013, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
# ******************************************************************************
# This file is part of Tao3D
#
# Tao3D is free software: you can r redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Tao3D is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Tao3D, in a file named COPYING.
# If not, see <https://www.gnu.org/licenses/>.
# ******************************************************************************

MODINSTDIR = pan_and_zoom

include(../modules.pri)

OTHER_FILES = pan_and_zoom.xl \
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

QMAKE_SUBSTITUTES = doc/Doxyfile.in
DOXYFILE = doc/Doxyfile
DOXYLANG = en,fr
include(../modules_doc.pri)
