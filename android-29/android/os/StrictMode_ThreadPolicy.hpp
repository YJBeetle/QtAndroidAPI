#pragma once

#ifndef ANDROID_OS_STRICTMODE_THREADPOLICY
#define ANDROID_OS_STRICTMODE_THREADPOLICY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class StrictMode_ThreadPolicy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject LAX();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject StrictMode_ThreadPolicy::LAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.StrictMode$ThreadPolicy",
			"LAX",
			"Landroid/os/StrictMode$ThreadPolicy;");
	}
	
	// Constructors
	void StrictMode_ThreadPolicy::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.StrictMode$ThreadPolicy",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject StrictMode_ThreadPolicy::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class StrictMode_ThreadPolicy : public __jni_impl::android::os::StrictMode_ThreadPolicy
	{
	public:
		StrictMode_ThreadPolicy(QAndroidJniObject obj) { __thiz = obj; }
		StrictMode_ThreadPolicy()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_STRICTMODE_THREADPOLICY

