#pragma once

#ifndef ANDROID_OS_TRANSACTIONTOOLARGEEXCEPTION
#define ANDROID_OS_TRANSACTIONTOOLARGEEXCEPTION

#include "RemoteException.hpp"


namespace __jni_impl::android::os
{
	class TransactionTooLargeException : public __jni_impl::android::os::RemoteException
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
	void TransactionTooLargeException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.TransactionTooLargeException",
			"()V");
	}
	void TransactionTooLargeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.TransactionTooLargeException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::os

namespace android::os
{
	class TransactionTooLargeException : public __jni_impl::android::os::TransactionTooLargeException
	{
	public:
		TransactionTooLargeException(QAndroidJniObject obj) { __thiz = obj; }
		TransactionTooLargeException()
		{
			__constructor();
		}
		TransactionTooLargeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_TRANSACTIONTOOLARGEEXCEPTION

