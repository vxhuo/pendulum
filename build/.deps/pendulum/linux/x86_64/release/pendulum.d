{
    files = {
        "build/.objs/pendulum/linux/x86_64/release/src/main.cpp.o",
        "build/.objs/pendulum/linux/x86_64/release/src/types.cppm.o",
        "build/.objs/pendulum/linux/x86_64/release/usr/include/c++/16/bits/std.cc.o"
    },
    values = {
        "/usr/bin/clang++",
        {
            "-m64",
            "-L/home/x/.xmake/packages/g/glad/v2.0.8/464cac51d1314380be9d6200208c4879/lib",
            "-s",
            "-lSDL3",
            "-lglad",
            "-lfreetype",
            "-lz",
            "-lfmt",
            "-ldl",
            "-flto=thin"
        }
    }
}