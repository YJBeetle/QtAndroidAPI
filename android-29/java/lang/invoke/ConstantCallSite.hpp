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
	class ConstantCallSite : public java::lang::invoke::CallSite
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConstantCallSite(const char *className, const char *sig, Ts...agv) : java::lang::invoke::CallSite(className, sig, std::forward<Ts>(agv)...) {}
		ConstantCallSite(QJniObject obj);
		
		// Constructors
		ConstantCallSite(java::lang::invoke::MethodHandle arg0);
		
		// Methods
		java::lang::invoke::MethodHandle dynamicInvoker();
		java::lang::invoke::MethodHandle getTarget();
		void setTarget(java::lang::invoke::MethodHandle arg0);
	};
} // namespace java::lang::invoke

