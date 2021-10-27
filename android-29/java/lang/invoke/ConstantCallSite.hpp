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
	class ConstantCallSite : public java::lang::invoke::CallSite
	{
	public:
		// Fields
		
		ConstantCallSite(QAndroidJniObject obj);
		// Constructors
		ConstantCallSite(java::lang::invoke::MethodHandle &arg0);
		ConstantCallSite() = default;
		
		// Methods
		QAndroidJniObject dynamicInvoker();
		QAndroidJniObject getTarget();
		void setTarget(java::lang::invoke::MethodHandle arg0);
	};
} // namespace java::lang::invoke

