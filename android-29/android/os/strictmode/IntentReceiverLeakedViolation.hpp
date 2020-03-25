#pragma once

#ifndef ANDROID_OS_STRICTMODE_INTENTRECEIVERLEAKEDVIOLATION
#define ANDROID_OS_STRICTMODE_INTENTRECEIVERLEAKEDVIOLATION

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class IntentReceiverLeakedViolation : public __jni_impl::android::os::strictmode::Violation
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
	void IntentReceiverLeakedViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.IntentReceiverLeakedViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class IntentReceiverLeakedViolation : public __jni_impl::android::os::strictmode::IntentReceiverLeakedViolation
	{
	public:
		IntentReceiverLeakedViolation(QAndroidJniObject obj) { __thiz = obj; }
		IntentReceiverLeakedViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_INTENTRECEIVERLEAKEDVIOLATION

