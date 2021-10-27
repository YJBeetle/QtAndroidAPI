#include "./EventLog.hpp"

namespace android::util
{
	// Fields
	
	EventLog::EventLog(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint EventLog::getTagCode(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.EventLog",
			"getTagCode",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint EventLog::getTagCode(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.EventLog",
			"getTagCode",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring EventLog::getTagName(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.EventLog",
			"getTagName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void EventLog::readEvents(jintArray arg0, __JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.util.EventLog",
			"readEvents",
			"([ILjava/util/Collection;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint EventLog::writeEvent(jint arg0, jobjectArray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(I[Ljava/lang/Object;)I",
			arg0,
			arg1
		);
	}
	jint EventLog::writeEvent(jint arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(IF)I",
			arg0,
			arg1
		);
	}
	jint EventLog::writeEvent(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint EventLog::writeEvent(jint arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(ILjava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint EventLog::writeEvent(jint arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(ILjava/lang/String;)I",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jint EventLog::writeEvent(jint arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.EventLog",
			"writeEvent",
			"(IJ)I",
			arg0,
			arg1
		);
	}
} // namespace android::util

