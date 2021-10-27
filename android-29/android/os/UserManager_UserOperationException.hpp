#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::os
{
	class UserManager_UserOperationException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getUserOperationResult();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void UserManager_UserOperationException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.UserManager$UserOperationException",
			"(V)V");
	}
	
	// Methods
	jint UserManager_UserOperationException::getUserOperationResult()
	{
		return __thiz.callMethod<jint>(
			"getUserOperationResult",
			"()I"
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class UserManager_UserOperationException : public __jni_impl::android::os::UserManager_UserOperationException
	{
	public:
		UserManager_UserOperationException(QAndroidJniObject obj) { __thiz = obj; }
		UserManager_UserOperationException()
		{
			__constructor();
		}
	};
} // namespace android::os

