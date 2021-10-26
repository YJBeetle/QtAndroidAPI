#pragma once

#ifndef ANDROID_UTIL_LOG
#define ANDROID_UTIL_LOG

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class Log : public __JniBaseClass
	{
	public:
		// Fields
		static jint ASSERT();
		static jint DEBUG();
		static jint ERROR();
		static jint INFO();
		static jint VERBOSE();
		static jint WARN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint println(jint arg0, jstring arg1, jstring arg2);
		static jint println(jint arg0, const QString &arg1, const QString &arg2);
		static jint i(jstring arg0, jstring arg1);
		static jint i(const QString &arg0, const QString &arg1);
		static jint i(jstring arg0, jstring arg1, jthrowable arg2);
		static jint i(const QString &arg0, const QString &arg1, jthrowable arg2);
		static jint d(jstring arg0, jstring arg1);
		static jint d(const QString &arg0, const QString &arg1);
		static jint d(jstring arg0, jstring arg1, jthrowable arg2);
		static jint d(const QString &arg0, const QString &arg1, jthrowable arg2);
		static jint e(jstring arg0, jstring arg1, jthrowable arg2);
		static jint e(const QString &arg0, const QString &arg1, jthrowable arg2);
		static jint e(jstring arg0, jstring arg1);
		static jint e(const QString &arg0, const QString &arg1);
		static jint v(jstring arg0, jstring arg1);
		static jint v(const QString &arg0, const QString &arg1);
		static jint v(jstring arg0, jstring arg1, jthrowable arg2);
		static jint v(const QString &arg0, const QString &arg1, jthrowable arg2);
		static jint w(jstring arg0, jthrowable arg1);
		static jint w(const QString &arg0, jthrowable arg1);
		static jint w(jstring arg0, jstring arg1, jthrowable arg2);
		static jint w(const QString &arg0, const QString &arg1, jthrowable arg2);
		static jint w(jstring arg0, jstring arg1);
		static jint w(const QString &arg0, const QString &arg1);
		static jboolean isLoggable(jstring arg0, jint arg1);
		static jboolean isLoggable(const QString &arg0, jint arg1);
		static jint wtf(jstring arg0, jthrowable arg1);
		static jint wtf(const QString &arg0, jthrowable arg1);
		static jint wtf(jstring arg0, jstring arg1, jthrowable arg2);
		static jint wtf(const QString &arg0, const QString &arg1, jthrowable arg2);
		static jint wtf(jstring arg0, jstring arg1);
		static jint wtf(const QString &arg0, const QString &arg1);
		static jstring getStackTraceString(jthrowable arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jint Log::ASSERT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Log",
			"ASSERT"
		);
	}
	jint Log::DEBUG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Log",
			"DEBUG"
		);
	}
	jint Log::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Log",
			"ERROR"
		);
	}
	jint Log::INFO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Log",
			"INFO"
		);
	}
	jint Log::VERBOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Log",
			"VERBOSE"
		);
	}
	jint Log::WARN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Log",
			"WARN"
		);
	}
	
	// Constructors
	void Log::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.Log",
			"(V)V");
	}
	
	// Methods
	jint Log::println(jint arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"println",
			"(ILjava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Log::println(jint arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"println",
			"(ILjava/lang/String;Ljava/lang/String;)I",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	jint Log::i(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"i",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Log::i(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"i",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint Log::i(jstring arg0, jstring arg1, jthrowable arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"i",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Log::i(const QString &arg0, const QString &arg1, jthrowable arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"i",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint Log::d(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"d",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Log::d(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"d",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint Log::d(jstring arg0, jstring arg1, jthrowable arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"d",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Log::d(const QString &arg0, const QString &arg1, jthrowable arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"d",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint Log::e(jstring arg0, jstring arg1, jthrowable arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"e",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Log::e(const QString &arg0, const QString &arg1, jthrowable arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"e",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint Log::e(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"e",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Log::e(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"e",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint Log::v(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"v",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Log::v(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"v",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint Log::v(jstring arg0, jstring arg1, jthrowable arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"v",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Log::v(const QString &arg0, const QString &arg1, jthrowable arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"v",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint Log::w(jstring arg0, jthrowable arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"w",
			"(Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1
		);
	}
	jint Log::w(const QString &arg0, jthrowable arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"w",
			"(Ljava/lang/String;Ljava/lang/Throwable;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint Log::w(jstring arg0, jstring arg1, jthrowable arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"w",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Log::w(const QString &arg0, const QString &arg1, jthrowable arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"w",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint Log::w(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"w",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Log::w(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"w",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean Log::isLoggable(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Log",
			"isLoggable",
			"(Ljava/lang/String;I)Z",
			arg0,
			arg1
		);
	}
	jboolean Log::isLoggable(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.Log",
			"isLoggable",
			"(Ljava/lang/String;I)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint Log::wtf(jstring arg0, jthrowable arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"wtf",
			"(Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1
		);
	}
	jint Log::wtf(const QString &arg0, jthrowable arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"wtf",
			"(Ljava/lang/String;Ljava/lang/Throwable;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jint Log::wtf(jstring arg0, jstring arg1, jthrowable arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"wtf",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Log::wtf(const QString &arg0, const QString &arg1, jthrowable arg2)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"wtf",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jint Log::wtf(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"wtf",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Log::wtf(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.Log",
			"wtf",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring Log::getStackTraceString(jthrowable arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Log",
			"getStackTraceString",
			"(Ljava/lang/Throwable;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Log : public __jni_impl::android::util::Log
	{
	public:
		Log(QAndroidJniObject obj) { __thiz = obj; }
		Log()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_LOG

