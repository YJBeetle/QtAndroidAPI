#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class ImplicitDirectBootViolation : public __jni_impl::android::os::strictmode::Violation
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
	void ImplicitDirectBootViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.ImplicitDirectBootViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class ImplicitDirectBootViolation : public __jni_impl::android::os::strictmode::ImplicitDirectBootViolation
	{
	public:
		ImplicitDirectBootViolation(QAndroidJniObject obj) { __thiz = obj; }
		ImplicitDirectBootViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

