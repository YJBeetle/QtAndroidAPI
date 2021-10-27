#include "./EventLog_Event.hpp"

namespace android::util
{
	// Fields
	
	EventLog_Event::EventLog_Event(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
} // namespace android::util

