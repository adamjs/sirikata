#ifndef _SIRIKATA_PROXY_OBJECT_HPP_
#define _SIRIKATA_PROXY_OBJECT_HPP_
#include <util/UUID.hpp>
#include <util/SpaceObjectReference.hpp>
#include "ProxyObjectListener.hpp"
namespace Sirikata {
/**
 * This class represents a generic object on a remote server
 * Every object has a SpaceObjectReference that allows one to communicate
 * with it. Subclasses implement several Providers for concerned listeners
 * This class should be casted to the various subclasses (ProxyLightObject,etc)
 * and appropriate listeners be registered.
 */
class SIRIKATA_OH_EXPORT ProxyObject{
    SpaceObjectReference mID;
public:
    ProxyObject(){}
    virtual ~ProxyObject(){}
    ///Returns the unique identification for this object and the space to which it is connected that gives it said name
    const SpaceObjectReference&getObjectReference() const{
        return mID;
    }
};
}
#endif
