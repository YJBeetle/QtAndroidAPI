#pragma once

#include "./Metadata.def.hpp"
#include "../../../../JObject.hpp"
#include "./Record.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean Record::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::Metadata Record::getMetadata() const
	{
		return callObjectMethod(
			"getMetadata",
			"()Landroid/health/connect/datatypes/Metadata;"
		);
	}
	inline jint Record::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
