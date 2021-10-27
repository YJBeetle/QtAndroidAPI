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
		
		ObjectStreamClass(QAndroidJniObject obj);
		// Constructors
		ObjectStreamClass() = default;
		
		// Methods
		static QAndroidJniObject lookup(jclass arg0);
		static QAndroidJniObject lookupAny(jclass arg0);
		jclass forClass();
		QAndroidJniObject getField(jstring arg0);
		QAndroidJniObject getField(const QString &arg0);
		jarray getFields();
		jstring getName();
		jlong getSerialVersionUID();
		jstring toString();
	};
} // namespace java::io

