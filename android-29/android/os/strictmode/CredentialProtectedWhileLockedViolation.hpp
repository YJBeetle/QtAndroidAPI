#pragma once

#ifndef ANDROID_OS_STRICTMODE_CREDENTIALPROTECTEDWHILELOCKEDVIOLATION
#define ANDROID_OS_STRICTMODE_CREDENTIALPROTECTEDWHILELOCKEDVIOLATION

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class CredentialProtectedWhileLockedViolation : public __jni_impl::android::os::strictmode::Violation
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
	void CredentialProtectedWhileLockedViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.CredentialProtectedWhileLockedViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class CredentialProtectedWhileLockedViolation : public __jni_impl::android::os::strictmode::CredentialProtectedWhileLockedViolation
	{
	public:
		CredentialProtectedWhileLockedViolation(QAndroidJniObject obj) { __thiz = obj; }
		CredentialProtectedWhileLockedViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_CREDENTIALPROTECTEDWHILELOCKEDVIOLATION

