#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class CallSite : public __JniBaseClass
	{
	public:
		// Fields
		
		CallSite(QAndroidJniObject obj);
		// Constructors
		CallSite() = default;
		
		// Methods
		QAndroidJniObject dynamicInvoker();
		QAndroidJniObject getTarget();
		void setTarget(java::lang::invoke::MethodHandle arg0);
		QAndroidJniObject type();
	};
} // namespace java::lang::invoke

