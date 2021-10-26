#pragma once

#ifndef ANDROID_CONTENT_RES_RESOURCES_NOTFOUNDEXCEPTION
#define ANDROID_CONTENT_RES_RESOURCES_NOTFOUNDEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::android::content::res
{
	class Resources_NotFoundException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, __jni_impl::java::lang::Exception arg1);
		void __constructor(const QString &arg0, __jni_impl::java::lang::Exception arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::content::res

#include "../../../java/lang/Exception.hpp"

namespace __jni_impl::android::content::res
{
	// Fields
	
	// Constructors
	void Resources_NotFoundException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Resources$NotFoundException",
			"()V"
		);
	}
	void Resources_NotFoundException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Resources$NotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Resources_NotFoundException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Resources$NotFoundException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Resources_NotFoundException::__constructor(jstring arg0, __jni_impl::java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Resources$NotFoundException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Resources_NotFoundException::__constructor(const QString &arg0, __jni_impl::java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Resources$NotFoundException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::content::res

namespace android::content::res
{
	class Resources_NotFoundException : public __jni_impl::android::content::res::Resources_NotFoundException
	{
	public:
		Resources_NotFoundException(QAndroidJniObject obj) { __thiz = obj; }
		Resources_NotFoundException()
		{
			__constructor();
		}
		Resources_NotFoundException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Resources_NotFoundException(jstring arg0, __jni_impl::java::lang::Exception arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::content::res

#endif // ANDROID_CONTENT_RES_RESOURCES_NOTFOUNDEXCEPTION

