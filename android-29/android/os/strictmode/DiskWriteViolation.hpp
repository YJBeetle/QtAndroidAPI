#pragma once

#ifndef ANDROID_OS_STRICTMODE_DISKWRITEVIOLATION
#define ANDROID_OS_STRICTMODE_DISKWRITEVIOLATION

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class DiskWriteViolation : public __jni_impl::android::os::strictmode::Violation
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
	void DiskWriteViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.DiskWriteViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class DiskWriteViolation : public __jni_impl::android::os::strictmode::DiskWriteViolation
	{
	public:
		DiskWriteViolation(QAndroidJniObject obj) { __thiz = obj; }
		DiskWriteViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_DISKWRITEVIOLATION

