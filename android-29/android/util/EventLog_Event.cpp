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
	jboolean EventLog_Event::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject EventLog_Event::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		);
	}
	jint EventLog_Event::getProcessId() const
	{
		return callMethod<jint>(
			"getProcessId",
			"()I"
		);
	}
	jint EventLog_Event::getTag() const
	{
		return callMethod<jint>(
			"getTag",
			"()I"
		);
	}
	jint EventLog_Event::getThreadId() const
	{
		return callMethod<jint>(
			"getThreadId",
			"()I"
		);
	}
	jlong EventLog_Event::getTimeNanos() const
	{
		return callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
	jint EventLog_Event::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::util

