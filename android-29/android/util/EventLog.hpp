#pragma once

#ifndef ANDROID_UTIL_EVENTLOG
#define ANDROID_UTIL_EVENTLOG

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class EventLog : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint writeEvent(jint arg0, jfloat arg1);
		static jint writeEvent(jint arg0, jstring arg1);
		static jint writeEvent(jint arg0, jobjectArray arg1);
		static jint writeEvent(jint arg0, jlong arg1);
		static jint writeEvent(jint arg0, jint arg1);
		static void readEvents(jintArray arg0, __jni_impl::__JniBaseClass arg1);
		static jstring getTagName(jint arg0);
		static jint getTagCode(jstring arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void EventLog::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.EventLog",
			"(V)V");
	}
	
	// Methods
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
	void EventLog::readEvents(jintArray arg0, __jni_impl::__JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.util.EventLog",
			"readEvents",
			"([ILjava/util/Collection;)V",
			arg0,
			arg1.__jniObject().object()
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
	jint EventLog::getTagCode(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.util.EventLog",
			"getTagCode",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class EventLog : public __jni_impl::android::util::EventLog
	{
	public:
		EventLog(QAndroidJniObject obj) { __thiz = obj; }
		EventLog()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_EVENTLOG

