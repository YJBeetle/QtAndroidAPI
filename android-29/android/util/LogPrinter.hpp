#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class LogPrinter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jstring arg1);
		void __constructor(jint arg0, const QString &arg1);
		
		// Methods
		void println(jstring arg0);
		void println(const QString &arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void LogPrinter::__constructor(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.LogPrinter",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void LogPrinter::__constructor(jint arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.LogPrinter",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	void LogPrinter::println(jstring arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LogPrinter::println(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"println",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class LogPrinter : public __jni_impl::android::util::LogPrinter
	{
	public:
		LogPrinter(QAndroidJniObject obj) { __thiz = obj; }
		LogPrinter(jint arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::util

