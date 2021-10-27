#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "AccountsException.hpp"


namespace __jni_impl::android::accounts
{
	class OperationCanceledException : public __jni_impl::android::accounts::AccountsException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::accounts


namespace __jni_impl::android::accounts
{
	// Fields
	
	// Constructors
	void OperationCanceledException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"()V"
		);
	}
	void OperationCanceledException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void OperationCanceledException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void OperationCanceledException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void OperationCanceledException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void OperationCanceledException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.OperationCanceledException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::accounts

namespace android::accounts
{
	class OperationCanceledException : public __jni_impl::android::accounts::OperationCanceledException
	{
	public:
		OperationCanceledException(QAndroidJniObject obj) { __thiz = obj; }
		OperationCanceledException()
		{
			__constructor();
		}
		OperationCanceledException(jstring arg0)
		{
			__constructor(
				arg0);
		}
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
	};
} // namespace android::accounts

