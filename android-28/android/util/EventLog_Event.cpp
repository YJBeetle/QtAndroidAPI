#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "./EventLog_Event.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	EventLog_Event::EventLog_Event(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EventLog_Event::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject EventLog_Event::getData()
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		);
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

