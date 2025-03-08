# VCPKG Test

VCPKG is a package manager for C++ created by Microsoft. It's similar to pip/npm/cargo. I'm using it in this repo to download an argument parser dependency, CLI11. Dependencies are contained in vcpkg.json. This can either be edited manually, or updated through the VCPKG cli.

## To run

First, install vcpkg as per the [official tutorial](https://learn.microsoft.com/en-gb/vcpkg/get_started/get-started?pivots=shell-powershell#1---set-up-vcpkg)

Once installed:

```
cmake --preset vcpkg                 # Configure
cmake --build --preset vcpkg         # Build
./build/vcpkg-test -h                # Run
```

That's it!

## Extra

### CMake Presets

I'm using CMake Presets, which can be used to store a CMake command in a config file. Particularly if using long commands, these can make CMake more friendly to use.

### Ninja

I'm also using Ninja over Make. Ninja is a competitor to Make, and is supposed to be faster - particularly for incremental builds. I've only got 1 file here, so in this case it may not be particularly helpful.
