#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class UnbufferedIoViolation : public __jni_impl::android::os::strictmode::Violation
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
	void UnbufferedIoViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.UnbufferedIoViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class UnbufferedIoViolation : public __jni_impl::android::os::strictmode::UnbufferedIoViolation
	{
	public:
		UnbufferedIoViolation(QAndroidJniObject obj) { __thiz = obj; }
		UnbufferedIoViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

