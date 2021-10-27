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

namespace java::lang::invoke
{
	class VolatileCallSite : public java::lang::invoke::CallSite
	{
	public:
		// Fields
		
		VolatileCallSite(QAndroidJniObject obj);
		// Constructors
		VolatileCallSite(java::lang::invoke::MethodHandle &arg0);
		VolatileCallSite(java::lang::invoke::MethodType &arg0);
		VolatileCallSite() = default;
		
		// Methods
		QAndroidJniObject dynamicInvoker();
		QAndroidJniObject getTarget();
		void setTarget(java::lang::invoke::MethodHandle arg0);
	};
} // namespace java::lang::invoke

