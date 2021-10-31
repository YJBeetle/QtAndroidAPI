#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}
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
	class Proxy : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Proxy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Proxy(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass getInvocationHandler(jobject arg0);
		static jclass getProxyClass(java::lang::ClassLoader arg0, jarray arg1);
		static jboolean isProxyClass(jclass arg0);
		static jobject newProxyInstance(java::lang::ClassLoader arg0, jarray arg1, __JniBaseClass arg2);
	};
} // namespace java::lang::reflect

