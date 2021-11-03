#pragma once

#include "../../../JObject.hpp"

class JArray;
class JObjectArray;
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;
namespace java::lang::invoke
{
	class MethodHandle;
}
namespace java::lang::invoke
{
	class MethodHandles_Lookup;
}
namespace java::lang::invoke
{
	class MethodType;
}
namespace java::lang::reflect
{
	class Constructor;
}
namespace java::lang::reflect
{
	class Method;
}
namespace java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace java::lang::reflect
{
	class Proxy : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Proxy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Proxy(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getInvocationHandler(JObject arg0);
		static JClass getProxyClass(java::lang::ClassLoader arg0, JArray arg1);
		static jboolean isProxyClass(JClass arg0);
		static JObject newProxyInstance(java::lang::ClassLoader arg0, JArray arg1, JObject arg2);
	};
} // namespace java::lang::reflect

