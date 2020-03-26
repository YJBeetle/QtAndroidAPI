#pragma once

#ifndef ANDROID_OS_STRICTMODE_INSTANCECOUNTVIOLATION
#define ANDROID_OS_STRICTMODE_INSTANCECOUNTVIOLATION

#include "../../../__JniBaseClass.hpp"
#include "Violation.hpp"


namespace __jni_impl::android::os::strictmode
{
	class InstanceCountViolation : public __jni_impl::android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong getNumberOfInstances();
	};
} // namespace __jni_impl::android::os::strictmode


namespace __jni_impl::android::os::strictmode
{
	// Fields
	
	// Constructors
	void InstanceCountViolation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.strictmode.InstanceCountViolation",
			"(V)V");
	}
	
	// Methods
	jlong InstanceCountViolation::getNumberOfInstances()
	{
		return __thiz.callMethod<jlong>(
			"getNumberOfInstances",
			"()J"
		);
	}
} // namespace __jni_impl::android::os::strictmode

namespace android::os::strictmode
{
	class InstanceCountViolation : public __jni_impl::android::os::strictmode::InstanceCountViolation
	{
	public:
		InstanceCountViolation(QAndroidJniObject obj) { __thiz = obj; }
		InstanceCountViolation()
		{
			__constructor();
		}
	};
} // namespace android::os::strictmode

#endif // ANDROID_OS_STRICTMODE_INSTANCECOUNTVIOLATION

