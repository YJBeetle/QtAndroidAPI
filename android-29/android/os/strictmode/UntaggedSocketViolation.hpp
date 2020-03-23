#pragma once

#ifndef ANDROID_OS_STRICTMODE_UNTAGGEDSOCKETVIOLATION
#define ANDROID_OS_STRICTMODE_UNTAGGEDSOCKETVIOLATION

#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class UntaggedSocketViolation : public __jni_impl::android::os::strictmode::Violation
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
	void UntaggedSocketViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.UntaggedSocketViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class UntaggedSocketViolation : public __jni_impl::android::os::strictmode::UntaggedSocketViolation
	{
	public:
		UntaggedSocketViolation(QAndroidJniObject obj) { __thiz = obj; }
		UntaggedSocketViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_UNTAGGEDSOCKETVIOLATION

