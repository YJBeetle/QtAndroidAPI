#pragma once

#ifndef ANDROID_OS_STRICTMODE_NETWORKVIOLATION
#define ANDROID_OS_STRICTMODE_NETWORKVIOLATION

#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class NetworkViolation : public __jni_impl::android::os::strictmode::Violation
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
	void NetworkViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.NetworkViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class NetworkViolation : public __jni_impl::android::os::strictmode::NetworkViolation
	{
	public:
		NetworkViolation(QAndroidJniObject obj) { __thiz = obj; }
		NetworkViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_NETWORKVIOLATION

