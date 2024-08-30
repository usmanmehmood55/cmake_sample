# CMake Sample

This repo contains the code used in my Medium article, [Setup Guide for C/C++ Programming on VSCode](https://medium.com/@usmanmehmood55/setup-guide-for-c-c-programming-on-vscode-b6047463dc1c).

The article explains in good detail how to set this up, compile and run it.

But here's the short version:

Clone this repo:

```bash
git clone https://github.com/usmanmehmood55/cmake_sample.git
```

Build:

```bash
cmake -G Ninja -B build && ninja -C build
```

Run:

```bash
.\build\cmake_sample.exe
```
