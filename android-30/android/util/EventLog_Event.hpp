#pragma once

#include "../../JObject.hpp"
#include "./EventLog_Event.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EventLog_Event::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject EventLog_Event::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		);
	}
	inline jint EventLog_Event::getProcessId() const
	{
		return callMethod<jint>(
			"getProcessId",
			"()I"
		);
	}
	inline jint EventLog_Event::getTag() const
	{
		return callMethod<jint>(
			"getTag",
			"()I"
		);
	}
	inline jint EventLog_Event::getThreadId() const
	{
		return callMethod<jint>(
			"getThreadId",
			"()I"
		);
	}
	inline jlong EventLog_Event::getTimeNanos() const
	{
		return callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
	inline jint EventLog_Event::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::util

// Base class headers

