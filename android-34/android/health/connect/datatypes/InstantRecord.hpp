#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./InstantRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean InstantRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Instant InstantRecord::getTime() const
	{
		return callObjectMethod(
			"getTime",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::ZoneOffset InstantRecord::getZoneOffset() const
	{
		return callObjectMethod(
			"getZoneOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	inline jint InstantRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
