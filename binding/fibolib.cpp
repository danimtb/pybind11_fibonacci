#include <pybind11/pybind11.h>

#include <fibolib/fibonacci.h>


PYBIND11_MODULE(fibolib, m) {
    m.doc() = "pybind11 fibonacci plugin"; // optional module docstring

    m.def("fib", &fib, "A function that computes the n number of the Fibonacci sequence");
}
