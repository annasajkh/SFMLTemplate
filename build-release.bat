if not exist /build (
    mkdir build
)

cd build

if not exist /Release (
    mkdir Release
)

cmake -G "Visual Studio 17 2022" -A Win32 -S "../" -B "."
cmake --build "." --config Release
xcopy /s "../libs/SFML/bin/" "Release/" /f /y
for %%# in ("Release/*.exe") do start Release/%%#