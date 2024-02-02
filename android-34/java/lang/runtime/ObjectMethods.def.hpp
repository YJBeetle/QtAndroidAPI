#pragma once

#include "../../../JObject.hpp"

class JArray;
class JClass;
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
namespace java::util
{
	class HashMap;
}

namespace java::lang::runtime
{
	class ObjectMethods : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ObjectMethods(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ObjectMethods(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject bootstrap(java::lang::invoke::MethodHandles_Lookup arg0, JString arg1, JObject arg2, JClass arg3, JString arg4, JArray arg5);
	};
} // namespace java::lang::runtime

