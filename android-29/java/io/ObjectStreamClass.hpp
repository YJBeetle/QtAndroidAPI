#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::io
{
	class ObjectStreamField;
}
namespace java::lang
{
	class ClassNotFoundException;
}
namespace java::lang
{
	class Long;
}
namespace java::lang::invoke
{
	class MethodHandle;
}
namespace java::lang::ref
{
	class ReferenceQueue;
}
namespace java::lang::reflect
{
	class Constructor;
}
namespace java::lang::reflect
{
	class Method;
}
namespace java::security
{
	class ProtectionDomain;
}

namespace java::io
{
	class ObjectStreamClass : public __JniBaseClass
	{
	public:
		// Fields
		static jarray NO_FIELDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObjectStreamClass(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ObjectStreamClass(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::io::ObjectStreamClass lookup(jclass arg0);
		static java::io::ObjectStreamClass lookupAny(jclass arg0);
		jclass forClass();
		java::io::ObjectStreamField getField(jstring arg0);
		jarray getFields();
		jstring getName();
		jlong getSerialVersionUID();
		jstring toString();
	};
} // namespace java::io

