#include "./Trace.hpp"

namespace android::os
{
	// Fields
	
	Trace::Trace(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
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
	void Trace::endSection()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Trace",
			"endSection",
			"()V"
		);
	}
	jboolean Trace::isEnabled()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Trace",
			"isEnabled",
			"()Z"
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
} // namespace android::os

