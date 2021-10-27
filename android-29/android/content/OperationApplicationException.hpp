#pragma once

#ifndef ANDROID_CONTENT_OPERATIONAPPLICATIONEXCEPTION
#define ANDROID_CONTENT_OPERATIONAPPLICATIONEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace __jni_impl::android::content
{
	class OperationApplicationException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
		jint getNumSuccessfulYieldPoints();
	};
} // namespace __jni_impl::android::content


namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void OperationApplicationException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"()V"
		);
	}
	void OperationApplicationException::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(I)V",
			arg0
		);
	}
	void OperationApplicationException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void OperationApplicationException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void OperationApplicationException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void OperationApplicationException::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void OperationApplicationException::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void OperationApplicationException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void OperationApplicationException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jint OperationApplicationException::getNumSuccessfulYieldPoints()
	{
		return __thiz.callMethod<jint>(
			"getNumSuccessfulYieldPoints",
			"()I"
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class OperationApplicationException : public __jni_impl::android::content::OperationApplicationException
	{
	public:
		OperationApplicationException(QAndroidJniObject obj) { __thiz = obj; }
		OperationApplicationException()
		{
			__constructor();
		}
		OperationApplicationException(jint arg0)
		{
			__constructor(
				arg0);
		}
		OperationApplicationException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		OperationApplicationException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		OperationApplicationException(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		OperationApplicationException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_OPERATIONAPPLICATIONEXCEPTION

