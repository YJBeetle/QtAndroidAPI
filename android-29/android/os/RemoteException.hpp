#pragma once

#ifndef ANDROID_OS_REMOTEEXCEPTION
#define ANDROID_OS_REMOTEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


namespace __jni_impl::android::os
{
	class RemoteException : public __jni_impl::android::util::AndroidException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void RemoteException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.RemoteException",
			"()V");
	}
	void RemoteException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.RemoteException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class RemoteException : public __jni_impl::android::os::RemoteException
	{
	public:
		RemoteException(QAndroidJniObject obj) { __thiz = obj; }
		RemoteException()
		{
			__constructor();
		}
		RemoteException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_REMOTEEXCEPTION

