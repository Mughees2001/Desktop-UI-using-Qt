# Desktop-UI-using-Qt

A simple Qt Counter Application using Meson build and C++. 

To run on macOS, follow these steps:

## Installation
Install Meson ninja:
`brew install meson ninja`
Install Qt:
`brew install qt@5`

## Setting up

You will need to export paths in order to help Meson find Qt: 

`export PATH="/opt/homebrew/opt/qt@5/bin:$PATH"    `
`export PKG_CONFIG_PATH="/opt/homebrew/opt/qt@5/lib/pkgconfig:$PKG_CONFIG_PATH"`
`export LDFLAGS="-L/opt/homebrew/opt/qt@5/lib $LDFLAGS"  `
`export CPPFLAGS="-I/opt/homebrew/opt/qt@5/include $CPPFLAGS"  `


## Running the Application

Give these commands to your terminal:

`meson setup builddir`
`meson compile -C builddir`
`./builddir/qt-counter`

Loom Video of my minimal Qt application :) 

https://www.loom.com/share/99fe80ef6469476a9206d84b69030463?sid=3427413c-734c-42ea-ba41-bb104b6ed8ca
