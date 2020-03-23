#pragma once

#ifndef ANDROID_OS_STRICTMODE_VIOLATION
#define ANDROID_OS_STRICTMODE_VIOLATION

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::os::strictmode
{
	class Violation : public __JniBaseClass
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
	void Violation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.Violation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class Violation : public __jni_impl::android::os::strictmode::Violation
	{
	public:
		Violation(QAndroidJniObject obj) { __thiz = obj; }
		Violation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_VIOLATION

