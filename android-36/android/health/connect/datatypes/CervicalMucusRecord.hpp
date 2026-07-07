#pragma once

#include "../../../../JObject.hpp"
#include "./CervicalMucusRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean CervicalMucusRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CervicalMucusRecord::getAppearance() const
	{
		return callMethod<jint>(
			"getAppearance",
			"()I"
		);
	}
	inline jint CervicalMucusRecord::getSensation() const
	{
		return callMethod<jint>(
			"getSensation",
			"()I"
		);
	}
	inline jint CervicalMucusRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"
#include "./InstantRecord.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
