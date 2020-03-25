#pragma once

#ifndef ANDROID_OS_STRICTMODE_SERVICECONNECTIONLEAKEDVIOLATION
#define ANDROID_OS_STRICTMODE_SERVICECONNECTIONLEAKEDVIOLATION

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class ServiceConnectionLeakedViolation : public __jni_impl::android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os::strictmode


namespace __jni_impl::android::os::strictmode
{
	// Fields
	
	// Constructors
	void ServiceConnectionLeakedViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.ServiceConnectionLeakedViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class ServiceConnectionLeakedViolation : public __jni_impl::android::os::strictmode::ServiceConnectionLeakedViolation
	{
	public:
		ServiceConnectionLeakedViolation(QAndroidJniObject obj) { __thiz = obj; }
		ServiceConnectionLeakedViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_SERVICECONNECTIONLEAKEDVIOLATION

