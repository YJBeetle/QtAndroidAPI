#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::os
{
	class NetworkOnMainThreadException : public __jni_impl::java::lang::RuntimeException
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
	void NetworkOnMainThreadException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.NetworkOnMainThreadException",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class NetworkOnMainThreadException : public __jni_impl::android::os::NetworkOnMainThreadException
	{
	public:
		NetworkOnMainThreadException(QAndroidJniObject obj) { __thiz = obj; }
		NetworkOnMainThreadException()
		{
			__constructor();
		}
	};
} // namespace android::os

