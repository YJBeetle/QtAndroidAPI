#pragma once

#ifndef ANDROID_OS_DEADOBJECTEXCEPTION
#define ANDROID_OS_DEADOBJECTEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"
#include "RemoteException.hpp"


namespace __jni_impl::android::os
{
	class DeadObjectException : public __jni_impl::android::os::RemoteException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void DeadObjectException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.DeadObjectException",
			"()V"
		);
	}
	void DeadObjectException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.DeadObjectException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DeadObjectException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.DeadObjectException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class DeadObjectException : public __jni_impl::android::os::DeadObjectException
	{
	public:
		DeadObjectException(QAndroidJniObject obj) { __thiz = obj; }
		DeadObjectException()
		{
			__constructor();
		}
		DeadObjectException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_DEADOBJECTEXCEPTION

