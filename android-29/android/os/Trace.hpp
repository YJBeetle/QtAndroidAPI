#pragma once

#ifndef ANDROID_OS_TRACE
#define ANDROID_OS_TRACE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class Trace : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isEnabled();
		static void endSection();
		static void beginAsyncSection(jstring arg0, jint arg1);
		static void beginAsyncSection(const QString &arg0, jint arg1);
		static void endAsyncSection(jstring arg0, jint arg1);
		static void endAsyncSection(const QString &arg0, jint arg1);
		static void beginSection(jstring arg0);
		static void beginSection(const QString &arg0);
		static void setCounter(jstring arg0, jlong arg1);
		static void setCounter(const QString &arg0, jlong arg1);
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void Trace::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Trace",
			"(V)V");
	}
	
	// Methods
	jboolean Trace::isEnabled()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Trace",
			"isEnabled",
			"()Z"
		);
	}
	void Trace::endSection()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Trace",
			"endSection",
			"()V"
		);
	}
	void Trace::beginAsyncSection(jstring arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Trace",
			"beginAsyncSection",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Trace::beginAsyncSection(const QString &arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Trace",
			"beginAsyncSection",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Trace::endAsyncSection(jstring arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Trace",
			"endAsyncSection",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void Trace::endAsyncSection(const QString &arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Trace",
			"endAsyncSection",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Trace::beginSection(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Trace",
			"beginSection",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Trace::beginSection(const QString &arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Trace",
			"beginSection",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Trace::setCounter(jstring arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Trace",
			"setCounter",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void Trace::setCounter(const QString &arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Trace",
			"setCounter",
			"(Ljava/lang/String;J)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class Trace : public __jni_impl::android::os::Trace
	{
	public:
		Trace(QAndroidJniObject obj) { __thiz = obj; }
		Trace()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_TRACE

