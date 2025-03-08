# Desktop-UI-using-Qt

A simple Qt Counter Application built with Qt6 \& C++.

A basic Qt UI with a counter that increments when a button is clicked.

![Qt Counter App Screenshot](https://media3.giphy.com/media/v1.Y2lkPTc5MGI3NjExano0amUxZXRkeWQ3NGNtZzdid3RwdDlrNWRjeTl5bngyb2RhOWsxcCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/M1ry5H6cCcH8v9Xfqc/giphy.gif)


## Structure
- `counter_window.hpp` - Header file for the main window class
- `counter_window.cpp` - Implementation of the main window
- `main.cpp` - Application entry point
- `meson.build` - Build configuration

## Installation Instructions

### macOS

1. Install Meson and Ninja:
```bash
brew install meson ninja
```

2. Install Qt6:
```bash
brew install qt@6
```

3. Set up environment variables:
```bash
export PATH="/opt/homebrew/opt/qt/bin:$PATH"
export PKG_CONFIG_PATH="/opt/homebrew/opt/qt/lib/pkgconfig:$PKG_CONFIG_PATH"
export LDFLAGS="-L/opt/homebrew/opt/qt/lib $LDFLAGS"
export CPPFLAGS="-I/opt/homebrew/opt/qt/include $CPPFLAGS"
```

### Linux (Ubuntu/Debian)

1. Install Meson and Ninja:
```bash
sudo apt install meson ninja-build
```

2. Install Qt6:
```bash
sudo apt install qt6-base-dev libqt6widgets6 libqt6core6 libqt6gui6
```


## Building and Running

1. Set up the build directory:
```bash
meson setup --wipe builddir
```

2. Compile the application:
```bash
meson compile -C builddir
```

3. Run the application:
```bash
./builddir/qt-counter
```

## Troubleshooting

### Qt6 not found
If Meson can't find Qt6, make sure the environment variables are set correctly:
- On macOS, run the export commands listed in the macOS installation section
- On Linux, ensure the Qt6 development packages are installed

### Build errors
- If you get build errors related to C++ version, make sure your compiler supports C++20
- For other build errors, try cleaning the build directory with `meson setup --wipe builddir`

