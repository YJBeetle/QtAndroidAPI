#pragma once

#ifndef ANDROID_OS_STRICTMODE_LEAKEDCLOSABLEVIOLATION
#define ANDROID_OS_STRICTMODE_LEAKEDCLOSABLEVIOLATION

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class LeakedClosableViolation : public __jni_impl::android::os::strictmode::Violation
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
	void LeakedClosableViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.LeakedClosableViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class LeakedClosableViolation : public __jni_impl::android::os::strictmode::LeakedClosableViolation
	{
	public:
		LeakedClosableViolation(QAndroidJniObject obj) { __thiz = obj; }
		LeakedClosableViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_LEAKEDCLOSABLEVIOLATION

