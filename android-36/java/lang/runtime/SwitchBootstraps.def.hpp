#pragma once

#include "../../../JObject.hpp"

class JObjectArray;
class JClass;
namespace java::lang
{
	class Enum;
}
class JObject;
class JString;
namespace java::lang::invoke
{
	class CallSite;
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

namespace java::lang::runtime
{
	class SwitchBootstraps : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SwitchBootstraps(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SwitchBootstraps(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::lang::invoke::CallSite enumSwitch(java::lang::invoke::MethodHandles_Lookup arg0, JString arg1, java::lang::invoke::MethodType arg2, JObjectArray arg3);
		static java::lang::invoke::CallSite typeSwitch(java::lang::invoke::MethodHandles_Lookup arg0, JString arg1, java::lang::invoke::MethodType arg2, JObjectArray arg3);
	};
} // namespace java::lang::runtime

