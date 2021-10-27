#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class HashMap;
}

namespace __jni_impl::android::os
{
	class StrictMode_VmPolicy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject LAX();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
	};
} // namespace __jni_impl::android::os

#include "../../java/util/HashMap.hpp"

namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject StrictMode_VmPolicy::LAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.StrictMode$VmPolicy",
			"LAX",
			"Landroid/os/StrictMode$VmPolicy;"
		);
	}
	
	// Constructors
	void StrictMode_VmPolicy::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.StrictMode$VmPolicy",
			"(V)V");
	}
	
	// Methods
	jstring StrictMode_VmPolicy::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class StrictMode_VmPolicy : public __jni_impl::android::os::StrictMode_VmPolicy
	{
	public:
		StrictMode_VmPolicy(QAndroidJniObject obj) { __thiz = obj; }
		StrictMode_VmPolicy()
		{
			__constructor();
		}
	};
} // namespace android::os

