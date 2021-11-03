#pragma once

#include "../../../JObject.hpp"
#include "./CallSite.hpp"

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
	class VolatileCallSite : public java::lang::invoke::CallSite
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VolatileCallSite(const char *className, const char *sig, Ts...agv) : java::lang::invoke::CallSite(className, sig, std::forward<Ts>(agv)...) {}
		VolatileCallSite(QJniObject obj);
		
		// Constructors
		VolatileCallSite(java::lang::invoke::MethodHandle arg0);
		VolatileCallSite(java::lang::invoke::MethodType arg0);
		
		// Methods
		java::lang::invoke::MethodHandle dynamicInvoker();
		java::lang::invoke::MethodHandle getTarget();
		void setTarget(java::lang::invoke::MethodHandle arg0);
	};
} // namespace java::lang::invoke

