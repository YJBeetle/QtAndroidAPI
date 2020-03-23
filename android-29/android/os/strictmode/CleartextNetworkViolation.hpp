#pragma once

#ifndef ANDROID_OS_STRICTMODE_CLEARTEXTNETWORKVIOLATION
#define ANDROID_OS_STRICTMODE_CLEARTEXTNETWORKVIOLATION

#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class CleartextNetworkViolation : public __jni_impl::android::os::strictmode::Violation
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
	void CleartextNetworkViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.CleartextNetworkViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class CleartextNetworkViolation : public __jni_impl::android::os::strictmode::CleartextNetworkViolation
	{
	public:
		CleartextNetworkViolation(QAndroidJniObject obj) { __thiz = obj; }
		CleartextNetworkViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_CLEARTEXTNETWORKVIOLATION

