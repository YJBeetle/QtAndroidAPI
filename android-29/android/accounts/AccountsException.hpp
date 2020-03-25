#pragma once

#ifndef ANDROID_ACCOUNTS_ACCOUNTSEXCEPTION
#define ANDROID_ACCOUNTS_ACCOUNTSEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace __jni_impl::android::accounts
{
	class AccountsException : public __jni_impl::java::lang::Exception
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
	void AccountsException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountsException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void AccountsException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountsException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void AccountsException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountsException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void AccountsException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accounts.AccountsException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::accounts

namespace android::accounts
{
	class AccountsException : public __jni_impl::android::accounts::AccountsException
	{
	public:
		AccountsException(QAndroidJniObject obj) { __thiz = obj; }
		AccountsException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		AccountsException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		AccountsException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		AccountsException()
		{
			__constructor();
		}
	};
} // namespace android::accounts

#endif // ANDROID_ACCOUNTS_ACCOUNTSEXCEPTION

