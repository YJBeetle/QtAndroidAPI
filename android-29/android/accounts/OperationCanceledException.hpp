#pragma once

#ifndef ANDROID_ACCOUNTS_OPERATIONCANCELEDEXCEPTION
#define ANDROID_ACCOUNTS_OPERATIONCANCELEDEXCEPTION

#include "AccountsException.hpp"


namespace __jni_impl::android::accounts
{
	class OperationCanceledException : public __jni_impl::android::accounts::AccountsException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::accounts


namespace __jni_impl::android::accounts
{
	// Fields
	
	// Constructors
	void OperationCanceledException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void OperationCanceledException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void OperationCanceledException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void OperationCanceledException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::accounts

namespace android::accounts
{
	class OperationCanceledException : public __jni_impl::android::accounts::OperationCanceledException
	{
	public:
		OperationCanceledException(QAndroidJniObject obj) { __thiz = obj; }
		OperationCanceledException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		OperationCanceledException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		OperationCanceledException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		OperationCanceledException()
		{
			__constructor();
		}
	};
} // namespace android::accounts

#endif // ANDROID_ACCOUNTS_OPERATIONCANCELEDEXCEPTION

