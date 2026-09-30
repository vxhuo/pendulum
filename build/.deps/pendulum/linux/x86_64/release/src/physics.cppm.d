{
    values = {
        "-Qunused-arguments",
        "-m64",
        "-fvisibility=hidden",
        "-fvisibility-inlines-hidden",
        "-Wall",
        "-Wextra",
        "-Wpedantic",
        "-Werror",
        "-std=c++26",
        "-isystem",
        "/home/x/.xmake/packages/m/magic_enum/v0.9.8/ad3b8bc82c6d4afbbac1a73b09679351/include",
        "-isystem",
        "/home/x/.xmake/packages/m/magic_enum/v0.9.8/ad3b8bc82c6d4afbbac1a73b09679351/include/magic_enum",
        "-isystem",
        "/home/x/.xmake/packages/g/glaze/v7.9.0/e98c7b9208604f118e0077f0a8799617/include",
        "-Wshadow",
        "-Wconversion",
        "-Wformat=2",
        "-Wcast-align",
        "-Wimplicit-fallthrough",
        "-fno-exceptions",
        "-fno-rtti",
        "-Wno-c23-extensions",
        "-Wno-error=deprecated-declarations",
        "-O3",
        "-march=native",
        "-flto=thin",
        "-DNDEBUG"
    },
    moduleinfo = "{\
  \"revision\": 0,\
  \"rules\": [\
    {\
      \"primary-output\": \"build/.objs/pendulum/linux/x86_64/release/src/physics.cppm.o\",\
      \"provides\": [\
        {\
          \"is-interface\": true,\
          \"logical-name\": \"physics\",\
          \"source-path\": \"src/physics.cppm\"\
        }\
      ],\
      \"requires\": [\
        {\
          \"logical-name\": \"types\"\
        }\
      ]\
    }\
  ],\
  \"version\": 1\
}\
",
    files = {
        "src/physics.cppm"
    }
}