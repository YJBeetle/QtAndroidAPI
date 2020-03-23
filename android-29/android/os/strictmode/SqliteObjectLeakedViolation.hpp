#pragma once

#ifndef ANDROID_OS_STRICTMODE_SQLITEOBJECTLEAKEDVIOLATION
#define ANDROID_OS_STRICTMODE_SQLITEOBJECTLEAKEDVIOLATION

#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class SqliteObjectLeakedViolation : public __jni_impl::android::os::strictmode::Violation
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
	void SqliteObjectLeakedViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.SqliteObjectLeakedViolation",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class SqliteObjectLeakedViolation : public __jni_impl::android::os::strictmode::SqliteObjectLeakedViolation
	{
	public:
		SqliteObjectLeakedViolation(QAndroidJniObject obj) { __thiz = obj; }
		SqliteObjectLeakedViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_SQLITEOBJECTLEAKEDVIOLATION

