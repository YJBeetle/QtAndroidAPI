#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class EventLog_Event : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jobject getData();
		jint getProcessId();
		jint getTag();
		jint getThreadId();
		jlong getTimeNanos();
		jint hashCode();
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void EventLog_Event::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.EventLog$Event",
			"(V)V");
	}
	
	// Methods
	jboolean EventLog_Event::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject EventLog_Event::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint EventLog_Event::getProcessId()
	{
		return __thiz.callMethod<jint>(
			"getProcessId",
			"()I"
		);
	}
	jint EventLog_Event::getTag()
	{
		return __thiz.callMethod<jint>(
			"getTag",
			"()I"
		);
	}
	jint EventLog_Event::getThreadId()
	{
		return __thiz.callMethod<jint>(
			"getThreadId",
			"()I"
		);
	}
	jlong EventLog_Event::getTimeNanos()
	{
		return __thiz.callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
	jint EventLog_Event::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class EventLog_Event : public __jni_impl::android::util::EventLog_Event
	{
	public:
		EventLog_Event(QAndroidJniObject obj) { __thiz = obj; }
		EventLog_Event()
		{
			__constructor();
		}
	};
} // namespace android::util

