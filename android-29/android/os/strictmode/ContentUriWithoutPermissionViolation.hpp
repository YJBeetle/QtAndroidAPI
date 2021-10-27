#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::os::strictmode
{
	class ContentUriWithoutPermissionViolation : public __jni_impl::android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os::strictmode

#include "../../net/Uri.hpp"

namespace __jni_impl::android::os::strictmode
{
	// Fields
	
	// Constructors
	void ContentUriWithoutPermissionViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.ContentUriWithoutPermissionViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class ContentUriWithoutPermissionViolation : public __jni_impl::android::os::strictmode::ContentUriWithoutPermissionViolation
	{
	public:
		ContentUriWithoutPermissionViolation(QAndroidJniObject obj) { __thiz = obj; }
		ContentUriWithoutPermissionViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

