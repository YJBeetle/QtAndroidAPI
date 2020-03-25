#pragma once

#ifndef ANDROID_OS_DEADSYSTEMEXCEPTION
#define ANDROID_OS_DEADSYSTEMEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"
#include "RemoteException.hpp"
#include "DeadObjectException.hpp"


namespace __jni_impl::android::os
{
	class DeadSystemException : public __jni_impl::android::os::DeadObjectException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void DeadSystemException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.DeadSystemException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class DeadSystemException : public __jni_impl::android::os::DeadSystemException
	{
	public:
		DeadSystemException(QAndroidJniObject obj) { __thiz = obj; }
		DeadSystemException()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_DEADSYSTEMEXCEPTION

