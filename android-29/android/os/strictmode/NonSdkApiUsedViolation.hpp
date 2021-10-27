#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class NonSdkApiUsedViolation : public __jni_impl::android::os::strictmode::Violation
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
	void NonSdkApiUsedViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.NonSdkApiUsedViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class NonSdkApiUsedViolation : public __jni_impl::android::os::strictmode::NonSdkApiUsedViolation
	{
	public:
		NonSdkApiUsedViolation(QAndroidJniObject obj) { __thiz = obj; }
		NonSdkApiUsedViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

