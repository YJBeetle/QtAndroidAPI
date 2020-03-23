#pragma once

#ifndef ANDROID_OS_STRICTMODE_CUSTOMVIOLATION
#define ANDROID_OS_STRICTMODE_CUSTOMVIOLATION

#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class CustomViolation : public __jni_impl::android::os::strictmode::Violation
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
	void CustomViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.CustomViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class CustomViolation : public __jni_impl::android::os::strictmode::CustomViolation
	{
	public:
		CustomViolation(QAndroidJniObject obj) { __thiz = obj; }
		CustomViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_CUSTOMVIOLATION

