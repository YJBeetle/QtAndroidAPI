#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./CallSite.hpp"

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
		
		MutableCallSite(QAndroidJniObject obj);
		// Constructors
		MutableCallSite(java::lang::invoke::MethodHandle arg0);
		MutableCallSite(java::lang::invoke::MethodType arg0);
		MutableCallSite() = default;
		
		// Methods
		static void syncAll(jarray arg0);
		QAndroidJniObject dynamicInvoker();
		QAndroidJniObject getTarget();
		void setTarget(java::lang::invoke::MethodHandle arg0);
	};
} // namespace java::lang::invoke

