#pragma once

#ifndef ANDROID_ACCOUNTS_NETWORKERROREXCEPTION
#define ANDROID_ACCOUNTS_NETWORKERROREXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "AccountsException.hpp"


namespace __jni_impl::android::accounts
{
	class NetworkErrorException : public __jni_impl::android::accounts::AccountsException
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
	void NetworkErrorException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void NetworkErrorException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void NetworkErrorException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void NetworkErrorException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accounts.NetworkErrorException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::accounts

namespace android::accounts
{
	class NetworkErrorException : public __jni_impl::android::accounts::NetworkErrorException
	{
	public:
		NetworkErrorException(QAndroidJniObject obj) { __thiz = obj; }
		NetworkErrorException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		NetworkErrorException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		NetworkErrorException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		NetworkErrorException()
		{
			__constructor();
		}
	};
} // namespace android::accounts

#endif // ANDROID_ACCOUNTS_NETWORKERROREXCEPTION

