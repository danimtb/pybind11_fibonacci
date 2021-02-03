from conans import ConanFile


class FibolibConan(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    requires = "pybind11/2.5.0"
    generators = "cmake", "cmake_find_package"
