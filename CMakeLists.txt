cmake_minimum_required(VERSION 3.23)
project(StructuralDPs)

set(CMAKE_CXX_STANDARD 23)

add_executable(StructuralDPs main.cpp
        Adapter/RoundHole.cpp
        Adapter/RoundPeg.cpp
        Adapter/SquarePeg.cpp
        Adapter/SquarePegAdapter.cpp
        Adapter/RoundShape.cpp

        Bridge/Device.cpp
        Bridge/TV.cpp
        Bridge/Remote.cpp
        Bridge/Radio.cpp
        Bridge/AdvancedRemote.cpp

        Composite/Component.cpp
        Composite/Product.cpp
        Composite/Box.cpp

        Decorator/Widget.cpp
        Decorator/TextField.cpp
        Decorator/Decorator.cpp
        Decorator/BorderDecorator.cpp
        Decorator/ScrollDecorator.cpp

        Proxy/Person.cpp
        Proxy/CashProtected.cpp
        Proxy/Cash.cpp
        )
