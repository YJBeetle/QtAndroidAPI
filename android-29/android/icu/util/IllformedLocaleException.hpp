#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::icu::util
{
	class IllformedLocaleException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jint arg1);
		void __constructor(const QString &arg0, jint arg1);
		
		// Methods
		jint getErrorIndex();
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	
	// Constructors
	void IllformedLocaleException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IllformedLocaleException",
			"()V"
		);
	}
	void IllformedLocaleException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IllformedLocaleException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IllformedLocaleException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IllformedLocaleException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void IllformedLocaleException::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IllformedLocaleException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void IllformedLocaleException::__constructor(const QString &arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IllformedLocaleException",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jint IllformedLocaleException::getErrorIndex()
	{
		return __thiz.callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class IllformedLocaleException : public __jni_impl::android::icu::util::IllformedLocaleException
	{
	public:
		IllformedLocaleException(QAndroidJniObject obj) { __thiz = obj; }
		IllformedLocaleException()
		{
			__constructor();
		}
		IllformedLocaleException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		IllformedLocaleException(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::icu::util

