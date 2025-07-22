@echo off

clear

if not exist build (
    mkdir build
) else (
    echo [BUILD] Build folder already exists. Skipping.
    echo.
)

cd build

echo [BUILD] Running CMake build...
echo.

cmake ..
cmake --build .

echo.
echo [BUILD] CMake build succeeded.
echo.

echo [BUILD] Program successfully built in build folder.