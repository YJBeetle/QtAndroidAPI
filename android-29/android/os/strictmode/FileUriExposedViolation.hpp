#pragma once

#ifndef ANDROID_OS_STRICTMODE_FILEURIEXPOSEDVIOLATION
#define ANDROID_OS_STRICTMODE_FILEURIEXPOSEDVIOLATION

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class FileUriExposedViolation : public __jni_impl::android::os::strictmode::Violation
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
	void FileUriExposedViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.FileUriExposedViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class FileUriExposedViolation : public __jni_impl::android::os::strictmode::FileUriExposedViolation
	{
	public:
		FileUriExposedViolation(QAndroidJniObject obj) { __thiz = obj; }
		FileUriExposedViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_FILEURIEXPOSEDVIOLATION

