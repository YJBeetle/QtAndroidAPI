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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CallSite(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CallSite(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject dynamicInvoker();
		QAndroidJniObject getTarget();
		void setTarget(java::lang::invoke::MethodHandle arg0);
		QAndroidJniObject type();
	};
} // namespace java::lang::invoke

