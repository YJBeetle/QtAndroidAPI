#pragma once

#include "../../../JObject.hpp"

class JObjectArray;
class JClass;
class JObject;
class JString;
namespace java::lang::invoke
{
	class MethodHandle;
}
namespace java::lang::invoke
{
	class MethodType;
}
namespace java::lang::invoke
{
	class WrongMethodTypeException;
}

namespace java::lang::invoke
{
	class CallSite : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CallSite(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CallSite(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::lang::invoke::MethodHandle dynamicInvoker();
		java::lang::invoke::MethodHandle getTarget();
		void setTarget(java::lang::invoke::MethodHandle arg0);
		java::lang::invoke::MethodType type();
	};
} // namespace java::lang::invoke

