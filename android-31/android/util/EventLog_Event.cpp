#include "./EventLog_Event.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	EventLog_Event::EventLog_Event(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EventLog_Event::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject EventLog_Event::getData()
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint EventLog_Event::getProcessId()
	{
		return callMethod<jint>(
			"getProcessId",
			"()I"
		);
	}
	jint EventLog_Event::getTag()
	{
		return callMethod<jint>(
			"getTag",
			"()I"
		);
	}
	jint EventLog_Event::getThreadId()
	{
		return callMethod<jint>(
			"getThreadId",
			"()I"
		);
	}
	jlong EventLog_Event::getTimeNanos()
	{
		return callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
	jint EventLog_Event::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::util

