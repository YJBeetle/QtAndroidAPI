#pragma once

#include "./CallSite.hpp"

class JArray;
namespace java::lang::invoke
{
	class MethodHandle;
}
namespace java::lang::invoke
{
	class MethodType;
}
namespace java::util::concurrent::atomic
{
	class AtomicInteger;
}

namespace java::lang::invoke
{
	class MutableCallSite : public java::lang::invoke::CallSite
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MutableCallSite(const char *className, const char *sig, Ts...agv) : java::lang::invoke::CallSite(className, sig, std::forward<Ts>(agv)...) {}
		MutableCallSite(QAndroidJniObject obj) : java::lang::invoke::CallSite(obj) {}
		
		// Constructors
		MutableCallSite(java::lang::invoke::MethodHandle arg0);
		MutableCallSite(java::lang::invoke::MethodType arg0);
		
		// Methods
		static void syncAll(JArray arg0);
		java::lang::invoke::MethodHandle dynamicInvoker() const;
		java::lang::invoke::MethodHandle getTarget() const;
		void setTarget(java::lang::invoke::MethodHandle arg0) const;
	};
} // namespace java::lang::invoke

