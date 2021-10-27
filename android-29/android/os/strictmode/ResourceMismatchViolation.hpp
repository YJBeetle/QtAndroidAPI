#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class ResourceMismatchViolation : public __jni_impl::android::os::strictmode::Violation
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
	void ResourceMismatchViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.ResourceMismatchViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class ResourceMismatchViolation : public __jni_impl::android::os::strictmode::ResourceMismatchViolation
	{
	public:
		ResourceMismatchViolation(QAndroidJniObject obj) { __thiz = obj; }
		ResourceMismatchViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

