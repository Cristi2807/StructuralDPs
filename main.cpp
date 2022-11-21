#include <iostream>
#include "Adapter/RoundHole.h"
#include "Adapter/RoundPeg.h"
#include "Adapter/SquarePeg.h"
#include "Adapter/SquarePegAdapter.h"
#include "Bridge/TV.h"
#include "Bridge/Remote.h"
#include "Bridge/Radio.h"
#include "Bridge/AdvancedRemote.h"
#include "Composite/Box.h"
#include "Composite/Product.h"
#include "Decorator/ScrollDecorator.h"
#include "Decorator/BorderDecorator.h"
#include "Decorator/TextField.h"
#include "Proxy/Person.h"
#include "Proxy/Cash.h"
#include "Facade/Facade.h"
#include "Flyweight/FlyweightFactory.h"

int main() {
//
//
//    //ADAPTER
//
//    auto roundHole = RoundHole(4);
//    auto roundPeg = RoundPeg(3);
//
//    std::cout << roundHole.fits(&roundPeg) << std::endl;
//
//    auto squarePeg = SquarePeg(6);
//
//    //Compile error without Adapter
//    //std::cout << roundHole.fits(&squarePeg);
//
//    auto squarePegAdapter = SquarePegAdapter(&squarePeg);
//
//    std::cout << roundHole.fits(&squarePegAdapter) << std::endl;
//
//    std::cout << std::endl;
//
//
//    //BRIDGE
//
//    auto tv = TV();
//    auto radio = Radio();
//
//    auto remoteTV = Remote(&tv);
//    auto advRemoteRadio = AdvancedRemote(&radio);
//
//    remoteTV.togglePower();
//    remoteTV.volumeUp();
//    std::cout << tv.getVolume() << std::endl;
//    remoteTV.togglePower();
//
//    std::cout << std::endl;
//
//    advRemoteRadio.togglePower();
//    advRemoteRadio.volumeUp();
//    std::cout << radio.getVolume() << std::endl;
//    advRemoteRadio.mute();
//    std::cout << radio.getVolume() << std::endl;
//    advRemoteRadio.togglePower();
//
//    std::cout << std::endl;
//
//
//    //COMPOSITE
//
//    Box box;
//
//    auto phone = Box();
//    phone.addComponent(new Product(10));
//
//    box.addComponent(new Product(7));
//    box.addComponent(new Product(6));
//    box.addComponent(&phone);
//
//    std::cout << "Total box price is: " << box.getPrice() << std::endl;
//
//    std::cout << std::endl;
//
//
//    //DECORATOR
//
//    auto widget = BorderDecorator(new ScrollDecorator(new TextField(20, 30)));
//
//    widget.draw();
//
//    std::cout << std::endl;
//
//
//    //PROXY
//
//    Cash cash;
//
//    Person person1 = Person("Cristian");
//    Person person2 = Person("Adrian");
//    Person person3 = Person("Vasile");
//    Person person4 = Person("Ion");
//
//    std::cout << cash.withdraw(person1, 200) << std::endl;
//    std::cout << cash.withdraw(person3, 200) << std::endl;
//    std::cout << cash.getBalance() << std::endl;
//
//    std::cout << cash.withdraw(person2, 200) << std::endl;
//    std::cout << cash.withdraw(person1, 200) << std::endl;
//    std::cout << cash.getBalance() << std::endl;


    //FACADE

    auto facade = Facade(nullptr, nullptr);

    std::cout << facade.Operation()<<std::endl;


    //FLYWEIGHT

    auto *flyweightFactory = new FlyweightFactory;

    flyweightFactory->addCarPoliceDatabase("HNH055", "Cristian Boris", "Nissan", "Qashqai", "Black");

    flyweightFactory->addCarPoliceDatabase("HNH056", "Adrian Boris", "Mazda", "626", "Red");

    flyweightFactory->addCarPoliceDatabase("HNH057", "Ala Boris", "Nissan", "Qashqai", "Black");



    return 0;
}
