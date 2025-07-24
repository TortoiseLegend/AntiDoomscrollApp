add_rules("mode.debug", "mode.release")
set_defaultmode("debug")
set_languages("c++20")

-- Add raylib and raygui as dependencies
add_requires("raylib", "raygui")

target("anti-doom-scroller")
    set_kind("binary")
    add_files("src/*.cpp")
    add_packages("raylib", "raygui")
