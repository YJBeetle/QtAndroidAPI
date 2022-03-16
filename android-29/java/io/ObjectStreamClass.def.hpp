#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
class JArray;
class JArray;
class JObjectArray;
class JArray;
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
class JClass;
namespace java::lang
{
	class ClassNotFoundException;
}
namespace java::lang
{
	class Long;
}
class JObject;
class JString;
class JThrowable;
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
	class ObjectStreamClass : public JObject
	{
	public:
		// Fields
		static JArray NO_FIELDS();
		
		// QJniObject forward
		template<typename ...Ts> explicit ObjectStreamClass(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObjectStreamClass(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::io::ObjectStreamClass lookup(JClass arg0);
		static java::io::ObjectStreamClass lookupAny(JClass arg0);
		JClass forClass() const;
		java::io::ObjectStreamField getField(JString arg0) const;
		JArray getFields() const;
		JString getName() const;
		jlong getSerialVersionUID() const;
		JString toString() const;
	};
} // namespace java::io

