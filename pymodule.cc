#include "dogClass.h"
#include <pybind11/pybind11.h>
#include <string>
namespace py = pybind11;

PYBIND11_MODULE(mytestlib, m) {
  // 模块名称为mytestlib
  using namespace pybind11::literals;
  m.doc() = "mytestlib warp dogClass for python to call\n";
  py::class_<Dog> Dog_py(m, "myDog");
  // 将c++的Dog类 绑定到python端的myDog类 ，可随意起名
  Dog_py.def(py::init<const std::string &, float>(), "name"_a,
             "position"_a = 0.f);
  //绑定构造函数

  Dog_py.def("add", &Dog::add, "distance"_a);
  Dog_py.def("sub", &Dog::sub, "distance"_a);
  Dog_py.def("current_position", &Dog::current_position);
  // 绑定成员函数

  Dog_py.def_property("position", &Dog::get_position, &Dog::set_position);
  // 绑定属性 并设置了getter,setter,
}