#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class DiskReadViolation : public __jni_impl::android::os::strictmode::Violation
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
	void DiskReadViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.DiskReadViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class DiskReadViolation : public __jni_impl::android::os::strictmode::DiskReadViolation
	{
	public:
		DiskReadViolation(QAndroidJniObject obj) { __thiz = obj; }
		DiskReadViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

